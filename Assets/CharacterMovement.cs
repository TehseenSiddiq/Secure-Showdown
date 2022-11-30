using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMovement : MonoBehaviour
{
    public float speed = 10;

    public Waypoints waypoints;
    public int wayPointIndex = 0;
    public Transform target;
    private LootController lootController;
    private bool isReturning = false;



    private void Start()
    {
        waypoints = FindObjectOfType<Waypoints>();
        lootController = GetComponent<LootController>();
        target = waypoints.waypoints[0];
        InvokeRepeating("CheckDistance", 0.1f, 0.1f);
    }
    private void Update()
    {
        Vector2 dir =  target.position - transform.position;
        transform.Translate(dir.normalized * speed * Time.deltaTime,Space.World);
    }
    public float delayTime = 3;
    void CheckDistance()
    {
        if (Vector2.Distance(transform.position, target.position) <= 3f)
        {
            if (target.GetComponent<Waypoint>().isLocked)
            {
                if(delayTime <= 0)
                {
                    target.GetComponent<Waypoint>().isLocked = false;
                    Debug.Log("Door Unlocked"); 
                }
                else
                {
                    delayTime -= .1f;
                    return;
                }
            }
            if (target.GetComponent<Waypoint>().lootAmount > 0)
            {
                Debug.Log("Its Working.");
                lootController.lootBar.SetActive(true);
            }
            if (target.GetComponent<Waypoint>().lootAmount > 0 && lootController.looted < lootController.maxLoot)
            {
                lootController.loot(target.GetComponent<Waypoint>());
                return;
            }
            GetNewWayPoint();
        }
        else
            lootController.lootBar.SetActive(false);
    }
    void GetNewWayPoint()
    { 
        if (lootController.looted >= lootController.maxLoot)
        {
            if (wayPointIndex < 0)
                Destroy(gameObject);
            wayPointIndex--;
           // Debug.Log("It worked: " + wayPointIndex);
        }
        else
        {
          if(wayPointIndex < waypoints.waypoints.Length-1)
            wayPointIndex++;
        }
        target = waypoints.waypoints[wayPointIndex];
        delayTime = 3;
    }
}
