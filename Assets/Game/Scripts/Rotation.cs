using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    public float rotationAngle = 25.0f;
    public float rotationOffset = 90.0f;
    float rotationSpeed = 2.0f;
    public Vector3 rotationAxis = Vector3.up;
   // public GameObject childObject;

    private void Start()
    {
    }
    public void SetInitPosition()
    {

       /* initPos = transform.eulerAngles.z;
        consMax = initPos+ limit;
        consMin = initPos- limit;*/
    }
    // Update is called once per frame
    void LateUpdate()
    {
        float sin = Mathf.Sin(Time.time * rotationSpeed);
        float angle = sin * rotationAngle + rotationOffset;

        Quaternion rotation = Quaternion.AngleAxis(angle, rotationAxis);

        transform.rotation = rotation;
       // childObject.transform.rotation = Quaternion.identity;
        /*  if (transform.eulerAngles.z >= consMax)
              speed = -speed;
          else if(transform.eulerAngles.z <= -consMin)
              speed = Mathf.Abs(speed);
            transform.Rotate(0, 0,speed * Time.deltaTime);*/
    }
}
