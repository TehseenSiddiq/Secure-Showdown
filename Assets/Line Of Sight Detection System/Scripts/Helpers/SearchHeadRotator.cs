using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SearchHeadRotator : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Set the SearchCone script for this object here")]
    private SearchCone searchCone = null;

    // vector to keep the local rotation
    private Vector3 rotVector = Vector3.zero;
    private float startRotationAngle = 0.0f;


    void Awake(){
        if(searchCone == null){
            Debug.LogError("SearchHeadRotator: No SearchCone was set in the inspector. Please fix this.");
            return;
        }
        // get the local euler angles for the rotation at start
        rotVector = gameObject.transform.localEulerAngles;
        startRotationAngle = rotVector.z;
    }


    void Update()
    {
        // check if the searchCone was found and check if automatic sweep motion is selected
        if(searchCone != null){
            if(searchCone.useSearchConeSweep){
                rotVector.z = startRotationAngle + searchCone.searchRotationAngle;
                gameObject.transform.localEulerAngles = rotVector;
            }
        }
    }
}
