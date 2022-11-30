using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerPlaneController : MonoBehaviour
{
    private Rigidbody2D rb = null;

    private float impulseMultiplicator = 150.0f;
    private Vector2 impulseVector = Vector2.zero;


    void Awake(){
        rb = gameObject.GetComponent<Rigidbody2D>();
        if(rb == null){
            Debug.LogError("PlayerPlaneController: No rigidBody2D was found on the gameObject.");
            return;
        }
    }


    void Update()
    {
        if(Input.GetAxis("Vertical") != 0.0f || Input.GetAxis("Horizontal") != 0.0f){
            impulseVector.x = Input.GetAxis("Horizontal") * impulseMultiplicator;
            impulseVector.y = Input.GetAxis("Vertical") * impulseMultiplicator;
        }
        else{
            impulseVector = Vector2.zero;
        }
        if(rb.velocity.x >= 0){
            gameObject.transform.localScale = new Vector3(-1.0f, 1.0f, 1.0f);
        }
        else{
            gameObject.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
        }
    }


    void FixedUpdate(){
        if(impulseVector != Vector2.zero){
            rb.AddForce(impulseVector);
        }
    }
}
