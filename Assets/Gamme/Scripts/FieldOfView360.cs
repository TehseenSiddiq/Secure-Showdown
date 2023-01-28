using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FieldOfView360 : MonoBehaviour
{
	public float radius;

	public LayerMask targetMask;
	public LayerMask obstacleMask;
	public GameObject playerRef;

	[Range(0, 3)]
	public float transitionSpeed = 1.25f;
	public Image fieldOfViewImage;
	public Color[] colors;
	public float clearness;
	public AudioSource alertSound;
	public bool isWorking = false;
	public float energy;
	public bool CanSeelPlayer { get; private set; }

	void Start()
	{
		playerRef = GameObject.FindGameObjectWithTag("Bot");
		alertSound = GetComponent<AudioSource>();
		StartCoroutine("FindTargetsWithDelay", .2f);
		InvokeRepeating("Visual", 0.1f, 1);
	}
	public void Setter(float _radius, float _energy = 8, float _clearness = 2)
	{
		radius = _radius;
		energy = _energy;
		clearness = _clearness;
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
		if (CanSeelPlayer)
		{
			//fieldOfViewImage.DOFade(0, transitionSpeed / 2);
			fieldOfViewImage.DOColor(colors[0], transitionSpeed);
			alertSound.Play();
		}
		else
		{
			alertSound.Stop();
			//fieldOfViewImage.DOFade(0, transitionSpeed / 2);
			fieldOfViewImage.DOColor(colors[1], transitionSpeed);
		}
	}
	[SerializeField] Collider2D[] targetsInViewRadius;
	void FindVisibleTargets()
	{
		targetsInViewRadius = Physics2D.OverlapCircleAll(transform.position, radius, targetMask);

		if (targetsInViewRadius.Length > 0)
		{
			Transform target = targetsInViewRadius[0].transform;
			Vector2 directionToTarget = (target.position - transform.position).normalized;

			float distanceToTarget = Vector2.Distance(transform.position, target.position);

			if (!Physics2D.Raycast(transform.position, target.position, distanceToTarget, obstacleMask))
			{
				CanSeelPlayer = true;
				target.GetComponent<LootController>().StressManage(clearness);
				Debug.Log("Found.");
			}
			else
				CanSeelPlayer = false;
		}
		else
			CanSeelPlayer = false;
	}

	private void OnDrawGizmos()
	{
		Gizmos.color = Color.yellow;
		Gizmos.DrawWireSphere(transform.position, radius);
		//UnityEditor.Handles.DrawWireDisc(transform.position, Vector3.forward, radius);
		//	Vector3 fovLine1 = DirectionFromAngle
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
