using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AI_Manager : MonoBehaviour
{
    public List<GameObject> target;
    public float speed;
    public float distance;
    public int targetIndex=0;

    private void Update()
    {
       
        if (targetIndex < target.Count)
        {
            GotoTarget();
        }
    }
    public void GotoTarget()
    {
        distance = Vector2.Distance(transform.position, target[targetIndex].transform.position);
        if (targetIndex+1==target.Count && distance < 1.5f)
        {
            targetIndex++;
            return;
        }
        else if(distance<0.5f)
        {
            targetIndex++;
        }
        Vector2 direction = target[targetIndex].transform.position - transform.position;
        direction.Normalize();
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
        transform.position = Vector2.MoveTowards(this.transform.position, target[targetIndex].transform.position, speed * Time.deltaTime);
        //transform.rotation = Quaternion.Euler(Vector3.forward * angle);
       
    }
}
