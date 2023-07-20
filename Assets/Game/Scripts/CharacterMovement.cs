using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMovement : MonoBehaviour
{
    public float speed = 10;

    private Waypoints[] waypoints;
    private Waypoints waypoint;
    private int wayPointIndex = 0;
    private Transform target;
    private LootController lootController;
    private bool isReturning = false;
    public bool canWalk = true;
    private AudioSource audioSource;
    public GameObject[] faces;
    public Animator anim;

    private void Start()
    {
        waypoints = FindObjectsOfType<Waypoints>();
        waypoint = waypoints[Random.Range(0, waypoints.Length)];
        lootController = GetComponent<LootController>();
        target = waypoint.waypoints[0];
        InvokeRepeating("CheckDistance", 0.1f, 0.1f);
        audioSource = GetComponent<AudioSource>();
    }
    private void Update()
    {
        Vector2 dir =  target.position - transform.position;
        if(canWalk)
           transform.Translate(dir.normalized * speed * Time.deltaTime,Space.World);

        foreach(GameObject face in faces)
        {
            face.SetActive(false);
        }
        if(Mathf.Abs(dir.y) > Mathf.Abs(dir.x))
        {
            if(dir.y >= 1)
            {
                faces[1].SetActive(true);
            }
            else if(dir.y < 1)
            {
                faces[0].SetActive(true);
            }
        }
        if (Mathf.Abs(dir.x) > Mathf.Abs(dir.y))
        {
            if (dir.x >= 1)
            {
                faces[2].SetActive(true);
            }
            else if (dir.x < 1)
            {
                faces[3].SetActive(true);
            }
        }
        anim.SetBool("Walk", canWalk);
    }
    
    void CheckDistance()
    {
        if (Vector2.Distance(transform.position, target.position) <= 1f)
        {
            if (target.GetComponent<Waypoint>().isLocked)
            {
                if(target.GetComponent<Waypoint>().lockDelay <= 0)
                {
                    //Door Unlocked.
                    target.GetComponent<Waypoint>().isLocked = false;
                    if(target.GetComponent<Waypoint>().lock_Obj!= null)
                    target.GetComponent<Waypoint>().lock_Obj.GetComponent<Door>().SetDoor();
                   
                }
                else
                {
                    canWalk = false;
                    target.GetComponent<Waypoint>().lockDelay -= .1f;
                    return;
                }
            }
            else if (target.GetComponent<Waypoint>().lootAmount > 0)
            {
                lootController.lootBar.SetActive(true);
                if (target.GetComponent<Waypoint>().lootAmount > 0 && lootController.looted < lootController.maxLoot)
                {
                    canWalk = false;
                    lootController.Loot(target.GetComponent<Waypoint>());
                    return;
                }
            }
            canWalk = true;
            GetNewWayPoint();
        }
        else
            lootController.lootBar.SetActive(false);
    }
    void GetNewWayPoint()
    {
        int max = waypoints.Length;
        if (lootController.looted >= lootController.maxLoot || waypoint.waypoints[waypoint.waypoints.Length-1].GetComponent<Waypoint>().lootAmount <= 0)
        {
            if (wayPointIndex == 0)
            {
                if (lootController.looted < lootController.maxLoot)
                {
                    while (waypoint.waypoints[waypoint.waypoints.Length - 1].GetComponent<Waypoint>().lootAmount <= 0)
                    {
                        max--;
                        waypoint = waypoints[Random.Range(0, waypoints.Length)];
                        if (max < 1)
                        {
                            Destroy(gameObject);
                            break;
                        }
                           
                    }
                    wayPointIndex++;
                }else
                    Destroy(gameObject);
            }
            else if (wayPointIndex > 0)
                wayPointIndex--;
            else
                Destroy(gameObject);
           // Debug.Log("It worked: " + wayPointIndex);
        }
        else
        {
          if(wayPointIndex < waypoint.waypoints.Length-1)
            wayPointIndex++;
        }
  
         target = waypoint.waypoints[wayPointIndex];

    }
}
