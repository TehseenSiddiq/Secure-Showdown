using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{
    private SpriteRenderer spirte;
    public Sprite[] doors;
    public Waypoint waypoint;

    private void Start()
    {
        spirte = GetComponent<SpriteRenderer>();
        spirte.sprite = doors[0];
        InvokeRepeating("SetDoor", 1, 0.05f);
    }

    public void SetDoor()
    {
        if (waypoint.isLocked)
        {
            spirte.sprite = doors[0];
        }else
            spirte.sprite = doors[1];
    }
}
