using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class SearchRaycastHolder : MonoBehaviour
{
    public Transform lineOfSightDirection {get {return _lineOfSightDirection;} private set {_lineOfSightDirection = value;}}


    [SerializeField]
    [Tooltip("Set the transform for the lineOfSightDirection")]
    private Transform _lineOfSightDirection = null;

    // flag if this raycast has hit a registered target object
    private bool hasHitTarget = false;


    void Awake(){
        if(lineOfSightDirection == null){
            Debug.LogError("SearchRaycastHolder: No transform for the lineOfSightDirection was set in the inspector.");
            return;
        }
    }


    // function to destroy the object after a short delay while in playMode
    public void fnc_destroyObject(){
        if(Application.isPlaying){
            Destroy(gameObject, 0.5f);
        }
        else{
            DestroyImmediate(gameObject);
        }
    }


    // function to draw a debug ray
    public void fnc_drawDebugRay(float inDisplayFor){
        // only display the debug rays during playback
        if(Application.isPlaying){
            if(hasHitTarget){
                Debug.DrawRay(gameObject.transform.position, lineOfSightDirection.position - gameObject.transform.position, 
                Color.green, inDisplayFor);            
            }
            else{
                Debug.DrawRay(gameObject.transform.position, lineOfSightDirection.position - gameObject.transform.position, 
                Color.red, inDisplayFor);  
            }
        }
    }


    // function to set the hasHit state
    public void fnc_setHitState(bool inHasHit){
        hasHitTarget = inHasHit;
    }
}
