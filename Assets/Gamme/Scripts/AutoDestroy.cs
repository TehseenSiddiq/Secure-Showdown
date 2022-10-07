using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoDestroy : MonoBehaviour
{
    [SerializeField]
    float delay = 0;
    void Start()
    {
        this.Wait(delay, () => Destroy(gameObject));
    }

   
}
