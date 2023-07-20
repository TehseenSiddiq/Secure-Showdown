using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WireTraps : MonoBehaviour
{
    public Transform[] points;
    [SerializeField] LineRenderer lr;
    public Gradient caughtColor, warningColor,workingColor;
    public float range = 5;
    public bool isSetable = true;
    private FreeDrag freeDrag;
    public AudioSource alertSound;
    public float energy;
    public bool isWorking = false;
    [SerializeField] float stress = 50;

    private void Start()
    {
        freeDrag = GetComponent<FreeDrag>();
    }
    bool temp = true;
    public void Update()
    {
        lr.SetPosition(0, points[0].position);
        lr.SetPosition(1, points[1].position);

        Vector2 dir = (points[0].position - points[1].position).normalized;

        RaycastHit2D hit = Physics2D.Raycast(points[0].position, -dir, Vector2.Distance(points[0].position, points[1].position));
  
     
        if(freeDrag.act > 0) { 
        if (Vector2.Distance(points[0].position, points[1].position) > range )
        {
            isSetable = false;
            lr.colorGradient = warningColor;
            
            return;
        }
        else
            isSetable = true;
        }
        if (hit.collider == null)
        {
            lr.colorGradient = caughtColor;
            Debug.DrawLine(points[0].position, hit.point, Color.magenta);
            Debug.DrawRay(points[1].position, -dir, Color.red);
            temp = true;
        }
        else
        {
            if (isWorking)
            {
                lr.colorGradient = workingColor;
                hit.collider.GetComponent<LootController>().StressManage(stress);
                if (temp)
                {
                    alertSound.Play();
                    temp = false;
                    Destroy(gameObject, 0.3f);
                }
            }
        }
      
    }
}
