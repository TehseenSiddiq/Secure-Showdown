using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    public float speed = 10;
    public float limit = 45;
    
    // Update is called once per frame
    void LateUpdate()
    {
        if (transform.eulerAngles.z >= limit)
            speed = -speed;
        else if(transform.eulerAngles.z <= 0)
            speed = Mathf.Abs(speed);
          transform.Rotate(0, 0,speed * Time.deltaTime);
  
    }
}
