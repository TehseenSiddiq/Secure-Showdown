using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreezeRotation : MonoBehaviour
{
    Quaternion startLocalRotation;

    // Start is called before the first frame update
    void Start()
    {
        startLocalRotation = transform.parent.localRotation;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        transform.localRotation = startLocalRotation;
    }
}
