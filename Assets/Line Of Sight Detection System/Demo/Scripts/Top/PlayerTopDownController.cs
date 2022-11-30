using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTopDownController : MonoBehaviour
{
    private Rigidbody2D rb = null;

    private float movementSpeedMultiplicator = 50.0f;
    private Vector2 movementVector = Vector2.zero;


    void Awake(){
        rb = gameObject.GetComponent<Rigidbody2D>();
        if(rb == null){
            Debug.LogError("PlayerTopDownController: No rigidBody2D was found on the gameObject.");
            return;
        }
    }


    void Update()
    {
        if(Input.GetAxis("Vertical") != 0.0f || Input.GetAxis("Horizontal") != 0.0f){
            movementVector.x = Input.GetAxis("Horizontal") * movementSpeedMultiplicator;
            movementVector.y = Input.GetAxis("Vertical") * movementSpeedMultiplicator;
        }
        else{
            movementVector = Vector2.zero;
        }
    }


    void FixedUpdate(){
        rb.velocity = movementVector;
        if(movementVector != Vector2.zero){
            // create the rotation
            // check if the angle direction is positive or negative
            float sign = 0.0f;
            if(Vector2.Dot(movementVector, Vector2.right) > 0.0f){
                sign = -1.0f;
            }
            else{
                sign = 1.0f;
            }
            gameObject.transform.rotation = Quaternion.Euler(0.0f, 
                0.0f, sign * Vector2.Angle(Vector2.up, movementVector));
        }
    }
}
