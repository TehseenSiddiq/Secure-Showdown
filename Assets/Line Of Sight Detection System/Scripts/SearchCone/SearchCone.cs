using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


// prototype for the custom event that returns a found/lost target
[System.Serializable]
public class TargetEvent : UnityEvent<GameObject, GameObject>
{
}


[ExecuteInEditMode]
[RequireComponent(typeof(RectTransform))]
[RequireComponent(typeof(CircleCollider2D))]
public class SearchCone : MonoBehaviour
{
    public bool isReady {get {return _isReady;} private set {_isReady = value;}}
    private bool _isReady = false;
    public float searchRotationAngle {get {return _searchRotationAngle;} private set {_searchRotationAngle = value;}}
    private float _searchRotationAngle = 0.0f;

    /// search cone settings
    // flag if the values should be evalutated for changes -> should be turned off for shipping, saves a lot of performance
    public bool evaluateChanges = true;
    // keeps the gameObject with the searchConeImageHelper
    public GameObject goSearchCone = null;
    // keeps the angle of the search cone
    public int searchConeAngle = 30;
    // keeps the size/length of the searchCone
    public int searchConeSize = 300;
    // keeps the start rotation of the search cone
    public float searchConeStartRotationAngle = 0.0f;
    // flag if automatic sweep rotation is used
    public bool useSearchConeSweep = true;
    // keeps the degrees of sweep rotation per direction
    public float searchConeSweepAngle = 45.0f;
    // keeps the time in seconds a sweep takes
    public float searchConeSweepTime = 2.0f;
    // flag if the sweep motion stops on a valid detection
    public bool stopSearchConeSweepOnDetection = true;
    // flag if the searchCone should be displayed
    public bool displaySearchCone = true;
    // flag if color change is used for detection
    public bool useColorChangeOnDetection = true;
    // color for neutral/scanning
    public Color colNeutral = new Color(1.0f, 1.0f, 1.0f, 0.5f);
    // color for detected
    public Color colDetected = new Color(1.0f, 0.0f, 0.0f, 0.5f);
    // time a color change takes to fade between
    public float colChangeTime = 1.0f;
    // flag if custom searchCone sprites should be used
    public bool useCustomSearchConeSprites = true;
    // sprite for the neutral searchCone
    public Sprite spriteNeutral = null;
    // sprite for the detected searchCone
    public Sprite spriteDetected = null;
    /// raycast search settings
    public string [] tagsToDetect = {"Player"};
    // keeps the layers that should be excluded from the raycast
    public int [] raycastIncludedLayers = {8};
    // keeps the detection intervall in seconds after which a new scan should take place
    public float detectionInterval = 0.25f;
    // keeps the density for the raycast, lower number -> more raycasts -> less performance
    // 1 -> one raycast for every degree
    public int raycastDensity = 5;
    // flag if the raycast should work from the boundaries of the cone to the center or inverse
    public bool searchFromOutsideIn = true;
    // flag to show the debu rays -> only use for debug purposes since these weigh heavy on the performance
    public bool showDebugRays = false;


    // events for when the target was lost/found
    public TargetEvent OnTargetDetected = new TargetEvent();
    public TargetEvent OnTargetLost = new TargetEvent();
    

    // reference to the search cone image helper
    private SearchConeImageHelpers searchConeImg = null;
    // reference to the rectTransform of this gameObject
    private RectTransform rectTrans = null;
    // reference to the circleCollider2D
    private CircleCollider2D circleColl = null;

    // private copies of the previous read values from the inspector -> to allow changes after one was made in the gui
    private int _searchConeAngle;
    private int _searchConeSize;
    private float _searchConeStartRotationAngle;
    private bool _useSearchConeSweep;
    private float _searchConeSweepAngle;
    private float _searchConeSweepTime;
    private bool _stopSearchConeSweepOnDetection;
    private bool _displaySearchCone;
    private bool _useColorChangeOnDetection;
    private Color _colNeutral;
    private Color _colDetected;
    private float _colChangeTime;
    private bool _useCustomSearchConeSprites;
    private Sprite _spriteNeutral;
    private Sprite _spriteDetected;
    private string [] _tagsToDetect;
    private int [] _raycastIncludedLayers;
    private float _detectionInterval;
    private int _raycastDensity;
    private bool _searchFromOutsideIn;
    private bool _showDebugRays;


    // flag if a valid object has entered the detection radius
    private bool objectEnteredDetectionArea = false;
    // flag if an object was detected
    private bool objectWasDetected = false;
    // flag to keep the rotation active
    private bool searchConeRotationActive = false;
    // flag to check if the rotation is paused
    private bool searchConeRotationPaused = false;
    // keeps the current rotation time, used to calculate the sweep angle
    float sweepRotationTime = 0;
    // keeps the current rotation for the sweep
    Vector3 rotVector = Vector3.zero;    
    // reference to the coroutine which rotates the search cone
    private Coroutine coroutineSearchConeRotation;



    void Awake(){
        rectTrans = gameObject.GetComponent<RectTransform>();
        if(rectTrans == null){
            Debug.LogError("SearchCone: No rectTransform was found on this object");
            return;
        }
        circleColl = gameObject.GetComponent<CircleCollider2D>();
        if(circleColl == null){
            Debug.LogError("SearchCone: No CircleCollider2D was found on this object");
            return;
        }
        // set the radius to 0.5 since the starting size of the cone is 1.0
        circleColl.radius = 0.5f;
    }


    void Start(){
        // check if the changes from the editor shouldn't be evaluated, 
        // if so read in the values at the start and then never again during runtime
        if(!evaluateChanges){
            if(goSearchCone == null){
                Debug.LogError("SearchCone: No gameObject with the searchCone was set in the inspector.");
                return;
            }
            if(searchConeImg == null){
                searchConeImg = goSearchCone.GetComponent<SearchConeImageHelpers>();
                if(searchConeImg == null){
                    Debug.Log("SearchCone: No SearchConeImageHelpers component was found on the searchCone gameObject.");
                    return;
                }
            }
            fnc_checkForValueChanges();
        }
        int layerNr = LayerMask.NameToLayer("Undetectable");
        // set this gameObject to the undetectable layer
        if(layerNr > -1){
            // check if the layer for this gameObject is already set
            if(gameObject.layer != layerNr){
                gameObject.layer = layerNr;
                // apply the change to all children
                for(int i = 0; i < gameObject.transform.childCount; i++){
                    gameObject.transform.GetChild(i).gameObject.layer = layerNr;
                }
            }
        }

    }


    void Update()
    {
        // check if the gameObject with the searchCone was set
        if(goSearchCone == null){
            Debug.LogError("SearchCone: No gameObject with the searchCone was set in the inspector.");            
            return;
        }
        // check if the searchConeImageHelpers reference was set
        if(searchConeImg == null){
            searchConeImg = goSearchCone.GetComponent<SearchConeImageHelpers>();
            if(searchConeImg == null){
                Debug.Log("SearchCone: No SearchConeImageHelpers component was found on the searchCone gameObject.");
                return;
            }            
            return;
        }
        // check if changes should in the values from the inspector should be evaluated
        if(evaluateChanges){
            // now check for changes in the local values of the variables, if so handle accordingly
            fnc_checkForValueChanges();
        }
        // check if an object has entered the detection area and was picked up by the raycast
        // of the searchConeImageHelper
        fnc_checkForObjectDetection();
    }


    // function to check for changes in the values via the inspector -> do needed changes accordingly
    private void fnc_checkForValueChanges(){
        if(searchConeAngle != _searchConeAngle){
            //Debug.Log("SearchCone: Change in the searchConeAngle to " + searchConeAngle);
            _searchConeAngle = searchConeAngle;
            searchConeImg.fnc_setSearchConeAngle(searchConeAngle, evaluateChanges);
        }
        if(searchConeSize != _searchConeSize){
            //Debug.Log("SearchCone: Change in the searchConeSize to " + searchConeSize);
            _searchConeSize = searchConeSize;
            rectTrans.localScale = new Vector2(searchConeSize, searchConeSize);
            searchConeImg.fnc_setSearchConeSize(searchConeSize, evaluateChanges);
        }
        if(searchConeStartRotationAngle != _searchConeStartRotationAngle){
            //Debug.Log("SearchCone: Change in the searchConeStartAngle to " + searchConeStartRotationAngle);
            _searchConeStartRotationAngle = searchConeStartRotationAngle;
            rectTrans.localEulerAngles = new Vector3(0.0f, 0.0f, searchConeStartRotationAngle);
        }
        if(useSearchConeSweep != _useSearchConeSweep){
            //Debug.Log("SearchCone: Change in useSearchConeSweep to " + useSearchConeSweep);
            _useSearchConeSweep = useSearchConeSweep;
            if(useSearchConeSweep){
                fnc_startRotationSweep();
            }
            else{
                fnc_stopRotationSweep();
            }
        }
        if(searchConeSweepAngle != _searchConeSweepAngle){
            //Debug.Log("SearchCone: Change in the searchConeSweepAngle to " + searchConeSweepAngle);
            _searchConeSweepAngle = searchConeSweepAngle;
        }
        if(searchConeSweepTime != _searchConeSweepTime){
            //Debug.Log("SearchCone: Change in the searchConeSweepTime to " + searchConeSweepTime);
            _searchConeSweepTime = searchConeSweepTime;
        }
        if(stopSearchConeSweepOnDetection != _stopSearchConeSweepOnDetection){
            //Debug.Log("SearchCone: Change in stopSearchConeSweepOnDetection to " + stopSearchConeSweepOnDetection);
            _stopSearchConeSweepOnDetection = stopSearchConeSweepOnDetection;
        }
        if(displaySearchCone != _displaySearchCone){
            //Debug.Log("SearchCone: Change in displaySearchCone to " + displaySearchCone);
            _displaySearchCone = displaySearchCone;
            searchConeImg.fnc_setDisplaySearchCone(displaySearchCone);
        }
        if(useColorChangeOnDetection != _useColorChangeOnDetection){
            //Debug.Log("SearchCone: Change in useColorChangeOnDetection to " + useColorChangeOnDetection);
            _useColorChangeOnDetection = useColorChangeOnDetection;
            searchConeImg.fnc_setUseColorChangeOnDetection(useColorChangeOnDetection);
        }
        if(colNeutral != _colNeutral){
            //Debug.Log("SearchCone: Change in colNeutral to " + colNeutral);
            _colNeutral = colNeutral;
            searchConeImg.fnc_setColNeutral(colNeutral);
        }
        if(colDetected != _colDetected){
            //Debug.Log("SearchCone: Change in colDetected to " + colDetected);
            _colDetected = colDetected;
            searchConeImg.fnc_setColDetected(colDetected);
        }
        if(colChangeTime != _colChangeTime){
            //Debug.Log("SearchCone: Change in the colChangeTime to " + colChangeTime);
            _colChangeTime = colChangeTime;
            searchConeImg.fnc_setColChangeTime(colChangeTime);
        }
        if(useCustomSearchConeSprites != _useCustomSearchConeSprites){
            //Debug.Log("SearchCone: Change in useCustomSearchConeSprites to " + useCustomSearchConeSprites);
            _useCustomSearchConeSprites = useCustomSearchConeSprites;
            searchConeImg.fnc_setUseCustomSearchConeSprites(useCustomSearchConeSprites);
        }
        if(spriteNeutral != _spriteNeutral){
            //Debug.Log("SearchCone: Change in spriteNeutral");
            _spriteNeutral = spriteNeutral;
            searchConeImg.fnc_setSpriteNeutral(spriteNeutral);
        }
        if(spriteDetected != _spriteDetected){
            //Debug.Log("SearchCone: Change in spriteDetected");
            _spriteDetected = spriteDetected;
            searchConeImg.fnc_setSpriteDetected(spriteDetected);
        }
        if(tagsToDetect.Length > 0){
            // check if the local holder array is null, if so fill it with the current values
            // and update the values in the searchConeImageHelpers component
            if(_tagsToDetect == null){
                _tagsToDetect = tagsToDetect;
                tagsToDetect.CopyTo(_tagsToDetect, 0);
                searchConeImg.fnc_setTagsToDetect(tagsToDetect);
            }
            // check if the arrays have the same length, if so check if the contents have changed
            if(tagsToDetect.Length == _tagsToDetect.Length){
                for(int i = 0; i < tagsToDetect.Length; i++){
                    // if change in the contents was detected, make a new copy to the working array and update
                    // the copy in the searchConeImageHelper
                    if(!string.Equals(tagsToDetect[i], _tagsToDetect[i])){
                        /*
                        Debug.Log("SearchCone: Detected change in tagsToDetect at " + 
                            i + " to " + tagsToDetect[i]);
                        */
                        // update the tags to detect    
                        tagsToDetect.CopyTo(_tagsToDetect, 0);
                        searchConeImg.fnc_setTagsToDetect(tagsToDetect);
                        break;
                    }
                }
            }
            else{
                //Debug.Log("SearchCone: Change in tagsToDetect length to " + tagsToDetect.Length);
                // resize the local copy of the array to the right size
                System.Array.Resize(ref _tagsToDetect, tagsToDetect.Length);
                // copy the array instead of just referencing to allow check for changes in the contents
                tagsToDetect.CopyTo(_tagsToDetect, 0);
                // update the array in the searchConeImageHelper
                searchConeImg.fnc_setTagsToDetect(tagsToDetect);
            }
        }
        else{
            Debug.LogError("SearchCone: At least one tag that should be detected has to be entered.");
        }
        if(raycastIncludedLayers.Length > 0){
            if(_raycastIncludedLayers == null){
                _raycastIncludedLayers = raycastIncludedLayers;
                raycastIncludedLayers.CopyTo(_raycastIncludedLayers, 0);
                searchConeImg.fnc_setRaycastIncludedLayers(raycastIncludedLayers);
            }
            if(raycastIncludedLayers.Length == _raycastIncludedLayers.Length){
                for(int i = 0; i < raycastIncludedLayers.Length; i++){
                    if(!int.Equals(raycastIncludedLayers[i], _raycastIncludedLayers[i])){
                        /*
                        Debug.Log("SearchCone: Detected change in raycastIncludedLayers at " + 
                            i + " to " + raycastIncludedLayers[i]);
                        */
                        // update the excludedLayers
                        raycastIncludedLayers.CopyTo(_raycastIncludedLayers, 0);
                        searchConeImg.fnc_setRaycastIncludedLayers(raycastIncludedLayers);
                        break;
                    }
                }
            }
            else{
                //Debug.Log("SearchCone: Change in raycastIncludedLayers length to " + raycastIncludedLayers.Length);
                System.Array.Resize(ref _raycastIncludedLayers, raycastIncludedLayers.Length);
                raycastIncludedLayers.CopyTo(_raycastIncludedLayers, 0);
                searchConeImg.fnc_setRaycastIncludedLayers(raycastIncludedLayers);
            }
        }
        else{
            Debug.LogError("SearchCone: At least one layer that should be targeted by the detection has to be entered");
        }
        if(detectionInterval != _detectionInterval){
            //Debug.Log("SearchCone: Change in the detectionInterval to " + detectionInterval);
            _detectionInterval = detectionInterval;
            searchConeImg.fnc_setDetectionInterval(detectionInterval);
        }
        if(raycastDensity != _raycastDensity){
            //Debug.Log("SearchCone: Change in the raycastDensity to " + raycastDensity);
            _raycastDensity = raycastDensity;
            searchConeImg.fnc_setRaycastDensity(raycastDensity);
        }
        if(searchFromOutsideIn != _searchFromOutsideIn){
            //Debug.Log("SearchCone: Change in searchFromOutsideIn to " + searchFromOutsideIn);
            _searchFromOutsideIn = searchFromOutsideIn;
            searchConeImg.fnc_setSearchFromOutsideIn(searchFromOutsideIn);
        }
        if(showDebugRays != _showDebugRays){
            //Debug.Log("SearchCone: Change in showDebugRays to " + showDebugRays);
            _showDebugRays = showDebugRays;
            searchConeImg.fnc_setShowDebugRays(showDebugRays);
        }
    }


    // coroutine for the rotation of the search cone
    private IEnumerator RotateSearchCone(){
        while (searchConeRotationActive) {
            if(!searchConeRotationPaused){
                // calculate the rotation angle
                searchRotationAngle = Mathf.Sin(sweepRotationTime * (1.0f/(searchConeSweepTime * 0.5f))) * searchConeSweepAngle;
                rotVector.z = searchConeStartRotationAngle + searchRotationAngle;
                gameObject.transform.localEulerAngles = rotVector;
                // update the rotation time
                sweepRotationTime += Time.deltaTime;
            }           
            yield return null;
        }
    }
    

    // helper function to start the rotation
    private void fnc_startRotationSweep(){
        if(Application.isPlaying){
            if(!searchConeRotationActive){
                // set the flags and start the coroutine
                searchConeRotationActive = true;
                searchConeRotationPaused = false;
                if(coroutineSearchConeRotation == null){
                    coroutineSearchConeRotation = StartCoroutine(RotateSearchCone());
                }
            }
            else{
                Debug.Log("SearchCone: Can't start coroutine, is already running");
            }
        }
    }


    // helper function to stop the rotation
    private void fnc_stopRotationSweep(){
        if(Application.isPlaying){
            if(searchConeRotationActive){
                // reset the rotation flags and stop the coroutine
                searchConeRotationActive = false;
                searchConeRotationPaused = false;
                if(coroutineSearchConeRotation != null){
                    StopCoroutine(coroutineSearchConeRotation);
                }
                // reset to the original rotation
                gameObject.transform.localEulerAngles = new Vector3(0.0f, 0.0f, searchConeStartRotationAngle);
                // reset the rotation time
                sweepRotationTime = 0.0f;
            }
            else{
                Debug.Log("SearchCone: Can't stop coroutine, seems to be stopped already");
                
            }
        }
    }


    // function to check if the object was detected by the raycast or if it had been detected 
    // before and is now lost from the visible field
    private void fnc_checkForObjectDetection(){
        if(objectEnteredDetectionArea){
            // check if the object was detected by the raycast and hasn't been registered as detected
            if(searchConeImg.targetDetected && !objectWasDetected){
                if(useSearchConeSweep){
                    if(stopSearchConeSweepOnDetection){
                        // check if a search cone rotation is running, if so pause it
                        if(searchConeRotationActive){
                            searchConeRotationPaused = true;
                        }
                    }
                }
                objectWasDetected = true;
                //Debug.Log("SearchCone: Object " + searchConeImg.lastDetectedGO.name + " was detected, is type " + searchConeImg.lastDetectedGO);
                OnTargetDetected.Invoke(gameObject, searchConeImg.lastDetectedGO);                
                return;
            }
        }
        // check if the object was detected before but isn't any longer seen by the raycast
        if(!searchConeImg.targetDetected && objectWasDetected){
            if(useSearchConeSweep){
                if(stopSearchConeSweepOnDetection){
                    // check if a search cone rotation was running, if so resume it's animation
                    if(searchConeRotationActive){
                        searchConeRotationPaused = false;
                    }
                }
            }
            objectWasDetected = false;
            //Debug.Log("SearchCone: Object " + searchConeImg.lastDetectedGO.name + " is no longer detected.");
            OnTargetLost.Invoke(gameObject, searchConeImg.lastDetectedGO);            
        }
    }


    // trigger enter/exit to enabled/disable detection via raycasts
    void OnTriggerEnter2D(Collider2D coll)
    {
        for(int i = 0; i < tagsToDetect.Length; i++){
            if(string.Equals(coll.tag, tagsToDetect[i])){
                //Debug.Log("SearchCone: Object entered active zone: " + coll.gameObject.name);
                objectEnteredDetectionArea = true;
                searchConeImg.fnc_setDetectionActive(true);
                break;
            }
        }
    }


    void OnTriggerExit2D(Collider2D coll){
        for(int i = 0; i < tagsToDetect.Length; i++){
            if(string.Equals(coll.tag, tagsToDetect[i])){
                //Debug.Log("SearchCone: Object left active zone: " + coll.gameObject.name);
                objectEnteredDetectionArea = false;
                searchConeImg.fnc_setDetectionActive(false);
                break;
            }
        }
    }
}
