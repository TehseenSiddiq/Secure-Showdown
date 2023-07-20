using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class FieldOfView2D : MonoBehaviour
{
    private float researchTimer = 1;
    public GameObject[] targets;
   // public Transform target;
    [SerializeField] float maxAngle;
    [SerializeField] float maxRadius;

    [Range(0, 3)]
    public float transitionSpeed = 1.25f;

    public Image normal, danagerSignal;


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

       // Gizmos.color = Color.red;
        //Gizmos.DrawRay(transform.position, (target.position - transform.position).normalized * maxRadius);

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

                    Gizmos.DrawRay(transform.position, (target.position - transform.position).normalized * maxRadius);
                    float angle = Vector3.Angle(checkingObject.up, directionBetween);
                    Debug.Log(angle);
                    if (angle <= maxAngle)
                    {
                        Ray2D ray = new Ray2D(checkingObject.position, target.position - checkingObject.position);
                        RaycastHit2D hit = Physics2D.Raycast(transform.position, -Vector2.up); ;
                        Debug.Log(hit.collider.name);
                        if(hit.collider !=null)
                        {
                            Debug.Log("<color=red>Player equals to </color>" + AI);
                            normal.DOFade(0, transitionSpeed / 2);
                            this.Wait(transitionSpeed / 2, () => danagerSignal.DOFade(1, transitionSpeed / 2));
                            Debug.Log("<color=red>Player equals to </color>"+AI);
                            //Ref AI here
                        }
                    }
                    if(Vector2.Distance(target.position, checkingObject.position) > maxRadius || angle > maxAngle)
                    {
                        //Ref AI here
                    }
                }
                else
                {
                    AI = null;
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
