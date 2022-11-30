using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StopSentryAnimation : MonoBehaviour
{
    private Animator animSentry = null;
    private float animationSpeed = 1.0f;

    void Awake(){
        animSentry = gameObject.GetComponent<Animator>();
        if(animSentry == null){
            Debug.Log("StopSentryAnimation: No animator was found on the gameObject.");
            return;
        }
    }


    // function to "pause" the animation on the found target
    public void fnc_foundTarget(GameObject inDetectorGO, GameObject inDetectedGO){
        animationSpeed = animSentry.speed;
        animSentry.speed = 0.0f;
    }


    // function to "resume" the animation on the found target
    public void fnc_lostTarget(GameObject inDetectorGO, GameObject inDetectedGO){
        animSentry.speed = animationSpeed;
    }
}
