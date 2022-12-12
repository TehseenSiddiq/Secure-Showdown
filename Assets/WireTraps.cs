using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WireTraps : MonoBehaviour
{
    public Transform[] points;
    [SerializeField] LineRenderer lr;
    public Gradient caughtColor, warningColor,workingColor;
    public float range = 5;
    public void Update()
    {
        lr.SetPosition(0, points[0].position);
        lr.SetPosition(1, points[1].position);

        Vector2 dir = (points[0].position - points[1].position).normalized;

        RaycastHit2D hit = Physics2D.Raycast(points[0].position, -dir, Vector2.Distance(points[0].position, points[1].position));
        Debug.Log(hit.collider);
        if(Vector2.Distance(points[0].position,points[1].position) > range)
        {
            lr.colorGradient = warningColor;
            return;
        }
        if (hit.collider != null)
        {
            lr.colorGradient = workingColor;
            Debug.DrawLine(points[0].position, hit.point, Color.magenta);
            Debug.DrawRay(points[1].position, -dir, Color.red);
        }
        
        else
        {
              lr.colorGradient = caughtColor;
        }
    }
}
