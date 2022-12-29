using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimationController : MonoBehaviour
{
     public void Surrender()
    {
        Destroy(GetComponentInParent<Transform>().gameObject);
    }
}
