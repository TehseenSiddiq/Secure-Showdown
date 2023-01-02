using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimationController : MonoBehaviour
{
    public GameObject parent;
    public GameObject effect;
     public void Surrender()
    {
        FindObjectOfType<LevelManager>().thiefCaught++;
        var a = Instantiate(effect, transform.parent.position, Quaternion.identity);
        Destroy(a, 2);
        Destroy(parent);
    }
}
