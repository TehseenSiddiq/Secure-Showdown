using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FieldOfView2D : MonoBehaviour
{
    private float researchTimer = 1;
    public GameObject[] targets;
   // public Transform target;
    [SerializeField] float maxAngle;
    [SerializeField] float maxRadius;

    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void Update()
    {
        researchTimer -= Time.deltaTime;
        if (researchTimer <= 0)
        {
            researchTimer = 1;
            targets = GameObject.FindGameObjectsWithTag("Bot");
        }
    }
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.yellow;
        Gizmos.DrawWireSphere(transform.position, maxRadius);

        Vector2 fovLine1 = Quaternion.AngleAxis(maxAngle, transform.forward) * transform.up * maxRadius;
        Vector2 fovLine2 = Quaternion.AngleAxis(-maxAngle, transform.forward) * transform.up * maxRadius;

        Gizmos.color = Color.blue;
        Gizmos.DrawRay(transform.position, fovLine1);
        Gizmos.DrawRay(transform.position, fovLine2);

      //  Gizmos.color = Color.red;
       // Gizmos.DrawRay(transform.position, (target.position - transform.position).normalized * maxRadius);

        Gizmos.color = Color.black;
        Gizmos.DrawRay(transform.position, transform.up * maxRadius);
    }
    public Collider2D AI;
    public void InFOV(Transform checkingObject,Transform target,float maxAngle, float maxRadius)
    {
        Collider2D[] overlaps = new Collider2D[10];
        int count = Physics2D.OverlapCircleNonAlloc(checkingObject.position, maxRadius, overlaps);
       
        for(int i = 0;i < count + 1; i++)
        { 
            if(overlaps[i] != null)
            {
                if(overlaps[i].transform == target)
                {
                    AI = overlaps[i];
                    Vector3 directionBetween = (target.position - checkingObject.position).normalized;
                    directionBetween.z *= 0;
                    
                    float angle = Vector3.Angle(checkingObject.up, directionBetween);
               //     Debug.Log(angle);
                    if (angle <= maxAngle)
                    {
                      
                        Ray2D ray = new Ray2D(checkingObject.position, target.position - checkingObject.position);
                        RaycastHit2D hit = Physics2D.Raycast(transform.position, -Vector2.up); ;

                        if(hit.collider !=null)
                        {
                            Debug.Log(AI);
                            //Ref AI here
                        }
                    }
                    if(Vector2.Distance(target.position, checkingObject.position) > maxRadius || angle > maxAngle)
                    {
                        //Ref AI here
                    }
                }
            }
        }
        
    }

    private void FixedUpdate()
    {
        foreach(GameObject tar in targets)
        {
            InFOV(transform, tar.transform, maxAngle, maxRadius);
        }
      
        
    }



}
