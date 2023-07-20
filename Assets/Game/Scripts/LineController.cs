using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LineController : MonoBehaviour
{
    private LineRenderer lr;
    public List<Transform> points;
    public Gradient gradient;
    public Transform contianer;
    [SerializeField] float buffer = 0.1f;
    private void Start()
    {
        // GameObject[] gameObjects = GameObject.FindGameObjectsWithTag("CircuitPoints");
        points.Clear();
        foreach (Transform gameOject in contianer)
        {
            points.Add(gameOject.transform);
        }
     
      /*  foreach (GameObject gameObject in gameObjects)
        {
            points.Add(gameObject.transform);
        }*/
        lr = GetComponent<LineRenderer>();
        StartCoroutine (SetUp(points));
    }
    IEnumerator SetUp(List<Transform> points)
    {
        if (points.Count <= 1)
            yield break;
        lr.positionCount = points.Count;

        for (int i = 0; i < points.Count; i++)
        {
            //TMP_Text a = Instantiate(Text, content);
            //a.text = points[i].name;
            lr.SetPosition(i, points[i].position);
            if (points[i] != null)
            {
                Vector2 dir = (points[i].position - points[i].position).normalized;

                RaycastHit2D hit = Physics2D.Raycast(points[i].position, -dir, Vector2.Distance(points[i].position, points[i].position));
                if (hit.collider != null)
                {
                    lr.SetColors(Color.red, Color.red);
                    Debug.DrawLine(points[i].position, hit.point, Color.magenta);
                    Debug.DrawRay(points[i].position, -dir, Color.red);
                }
                else
                {
                    lr.colorGradient = gradient;
                }
                yield return new WaitForSecondsRealtime(buffer);
            }
        }
    }
  /*  public void SetUp(List<Transform> points)
    {
       // Debug.Log(points.Count);
       


        //  this.points = points;
    }*/
    public void Update()
    {
        
    }
}
