using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{
    public float speed = 10;
    public float initPos = 0;
    public float limit = 25;
    private float consMax = 25;
    private float consMin = -25;

    private void Start()
    {
    }
    public void SetInitPosition()
    {

        initPos = transform.eulerAngles.z;
        consMax = initPos+ limit;
        consMin = initPos- limit;
    }
    // Update is called once per frame
    void LateUpdate()
    {
        if (transform.eulerAngles.z >= consMax)
            speed = -speed;
        else if(transform.eulerAngles.z <= -consMin)
            speed = Mathf.Abs(speed);
          transform.Rotate(0, 0,speed * Time.deltaTime);
    }
}
