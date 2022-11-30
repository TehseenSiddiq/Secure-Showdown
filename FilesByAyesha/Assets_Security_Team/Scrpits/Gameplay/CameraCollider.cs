using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraCollider : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Level Complete");
        if (other.tag == "AI")
        {
            Debug.Log("Level Complete");
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Debug.Log("Level "+ collision.otherCollider.gameObject.name);
        if (collision.otherCollider.gameObject.name == "trail")
        {
            Debug.Log("Level Complete");
            AI_Manager.instance.AI = false;
            GameplayManager.instance.Won();
        }
    }
}
