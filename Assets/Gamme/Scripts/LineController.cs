using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineController : MonoBehaviour
{
    private LineRenderer lr;
    public List<Transform> points;
    public Gradient gradient;
    private void Start()
    {
        lr = GetComponent<LineRenderer>();
    }
  

    public void SetUp(List<Transform> points)
    {
        lr.positionCount = points.Count;
        this.points = points;
    }
    public void Update()
    {
        for (int i = 0; i < points.Count; i++)
        {
            lr.SetPosition(i, points[i].position);
            if(points[i] != null)
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
            }

        }
    }
}
