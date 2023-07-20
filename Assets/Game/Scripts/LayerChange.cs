using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LayerChange : MonoBehaviour
{
    private SpriteRenderer renderer;

    private void Start()
    {
        renderer = GetComponent<SpriteRenderer>();
    }
    private void OnCollisionStay2D(Collision2D collision)
    {
        if(collision.collider.tag == "Bot")
        {
            renderer.sortingLayerID = 10;
        }
    }
}
