using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class FieldOfView : MonoBehaviour
{

	public float radius;
	[Range(0, 180)]
	public float viewAngle;

	public LayerMask targetMask;
	public LayerMask obstacleMask;
	public GameObject playerRef;

	[Range(0, 3)]
	public float transitionSpeed = 1.25f;
	public Image normal, danagerSignal;
	public RectTransform imageRect;
	public bool CanSeelPlayer { get; private set; }

	void Start()
	{
		playerRef = GameObject.FindGameObjectWithTag("Bot");

		StartCoroutine("FindTargetsWithDelay", .2f);
		InvokeRepeating("Visual", 1, 1);
	}

	void Visual()
    {
		normal.fillAmount = viewAngle / 180;
		danagerSignal.fillAmount = viewAngle / 180;
		imageRect.transform.eulerAngles = new Vector3(0, 0, viewAngle);
	
    }
	IEnumerator FindTargetsWithDelay(float delay)
	{
		while (true)
		{
			yield return new WaitForSeconds(delay);
			FindVisibleTargets();
		}
	}

	void LateUpdate()
	{
		//DrawFieldOfView();
	}
	[SerializeField] Collider2D[] targetsInViewRadius;
	void FindVisibleTargets()
	{

		targetsInViewRadius = Physics2D.OverlapCircleAll(transform.position, radius, targetMask);

		/*for (int i = 0; i < targetsInViewRadius.Length; i++)
		{
			Transform target = targetsInViewRadius[i].transform;
			Vector3 dirToTarget = (target.position - transform.position).normalized;
			if (Vector3.Angle(transform.forward, dirToTarget) < viewAngle / 2)
			{
				float dstToTarget = Vector3.Distance(transform.position, target.position);

				if (!Physics.Raycast(transform.position, dirToTarget, dstToTarget, obstacleMask))
				{
					visibleTargets.Add(target);
				}
			}
		}*/
		if(targetsInViewRadius.Length > 0)
        {
			Transform target = targetsInViewRadius[0].transform;
			Vector2 directionToTarget = (target.position - transform.position).normalized;
			Debug.Log(CanSeelPlayer);
			if (Vector2.Angle(transform.up, directionToTarget) < viewAngle)
			{
				float distanceToTarget = Vector2.Distance(transform.position, target.position);

				if (!Physics2D.Raycast(transform.position, directionToTarget, distanceToTarget, obstacleMask))
					CanSeelPlayer = true;
				else
					CanSeelPlayer = false;
			}
			else if (CanSeelPlayer)
				CanSeelPlayer = false;
        }
	}

	private void OnDrawGizmos()
	{
		Gizmos.color = Color.yellow;
		Gizmos.DrawWireSphere(transform.position, radius);
		UnityEditor.Handles.DrawWireDisc(transform.position,Vector3.forward,radius);

		Vector2 fovLine1 = Quaternion.AngleAxis(viewAngle, transform.forward) * transform.up * radius;
		Vector2 fovLine2 = Quaternion.AngleAxis(-viewAngle, transform.forward) * transform.up * radius;
	//	Vector3 fovLine1 = DirectionFromAngle

		Gizmos.color = Color.blue;
		Gizmos.DrawRay(transform.position, fovLine1);
		Gizmos.DrawRay(transform.position, fovLine2);

        // Gizmos.color = Color.red;
        //Gizmos.DrawRay(transform.position, (target.position - transform.position).normalized * maxRadius);
        if (CanSeelPlayer)
        {
			Gizmos.color = Color.red;
			Gizmos.DrawLine(transform.position, playerRef.transform.position);
        }

		Gizmos.color = Color.black;
		Gizmos.DrawRay(transform.position, transform.up * radius);
	}
}