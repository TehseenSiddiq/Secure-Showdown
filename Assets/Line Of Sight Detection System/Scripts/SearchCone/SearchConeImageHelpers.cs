using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[ExecuteInEditMode]
[RequireComponent(typeof(Image))]
public class SearchConeImageHelpers : MonoBehaviour
{
    // keeps reference to the last detected gameObject
    public GameObject lastDetectedGO {get {return _lastDetectedGO;} private set {_lastDetectedGO = value;}}
    private GameObject _lastDetectedGO;
    public bool targetDetected {get {return _targetDetected;} private set {_targetDetected = value;}}
    private bool _targetDetected = false;

    [SerializeField]
    [Tooltip("Set the transform of the raycast forward direction")]
    private GameObject searchRaycastHolderPrefab = null;
    [SerializeField]
    [Tooltip("Set the transform for the raycast origin")]
    private Transform raycastOrigin = null;

    // keeps the image object with the sprite attached
    private Image imgSearchCone = null;
    // keeps the rect transform
    private RectTransform rectTrans = null;
    // keeps the current searchConeAngle
    private int searchConeAngle;
    // keeps the current searchConeSize
    private int searchConeSize;
    // flag if the search cone should be displayed
    private bool displaySearchCone;
    // flag if a change should be made in the color on detection
    private bool useColorChangeOnDetection;
    // keeps the color for a neutral searchCone
    private Color colNeutral;
    // keeps the color for a searchCone in the detected stage
    private Color colDetectd;
    // keeps the time a color change takes
    private float colChangeTime;
    // flag if a custom sprite for detected should be used
    private bool useCustomSearchConeSprites;
    // keeps the sprite for a neutral searchCone
    private Sprite spriteNeutral;
    // keeps the sprite for a detected searchCone
    private Sprite spriteDetected;
    // keeps the tags that need to be checked for a detection
    private string [] tagsToDetect;
    // keeps the layers that should be excluded from the raycast
    private int [] raycastIncludedLayers;
    // keep the detectionInterval
    private float detectionInterval;
    // keeps the density of raycasts
    private int raycastDensity;
    // bool for the search direction
    private bool searchFromOutsideIn;
    // flag if debug rays should be drawn
    private bool showDebugRays;


    // keeps reference to the detectors in gameObjects 
    private List<GameObject> listDetectors = new List<GameObject>();
    // keeps reference to the raycast holders of the detectors
    private List<SearchRaycastHolder> listRaycastHolders = new List<SearchRaycastHolder>();
    // keeps the excluded layerMask
    private LayerMask includedLayerMask;
    // keeps the time for when the next raycast detection should take place
    private float nextRaycastTime = 0.0f;
    // keeps the length of a raycast
    private float raycastLength = 0.0f;
    // keeps the time of the current color fade
    private float colorFadeTime = 0.0f;
    // keeps the color during the fade
    private Color colFade;


    // flag if detection can take place -> entered the detection zone
    private bool detectionActive = false;
    // flag if currently in creation
    private bool isInCreation = false;


    // keeps the coroutines for the color fades
    private Coroutine coroutineFadeSearchConeToDetected;
    private Coroutine coroutineFadeSearchConeToNeutral;



    void Start(){
        // get reference to the UI image which holds the searchConeSprite
        imgSearchCone = gameObject.GetComponent<Image>();
        if(imgSearchCone == null){
            Debug.LogError("SearchConeImageHelper: No UI Image was found on this gameObject. Please add one.");
            return;
        }
        // set the imageSettings
        imgSearchCone.raycastTarget = false;
        imgSearchCone.type = Image.Type.Filled;
        imgSearchCone.fillMethod = Image.FillMethod.Radial360;
        imgSearchCone.fillOrigin = 0;
        imgSearchCone.fillClockwise = true;
        // get the rectTrans
        rectTrans = gameObject.GetComponent<RectTransform>();
        if(rectTrans == null){
            Debug.LogError("SearchConeImageHelpers: No rectTransfrom was found on this gameObject. Please add one.");
            return;
        }
        if(searchRaycastHolderPrefab == null){
            Debug.LogError("SearchConeImageHelpers: No transform for the forward direction of the raycast was set.");
            return;
        }
        if(!searchRaycastHolderPrefab.GetComponent<SearchRaycastHolder>()){
            Debug.LogError("SearchConeImageHelpers: The SearchRaycastHolder script wasn't found on the supplied gameObject prefab.");
        }
        if(raycastOrigin == null){
            Debug.LogError("SearchConeImageHelpers: No transform for the raycast origin was set.");
            return;
        }
    }


    void Update(){
        if(isInCreation){
            return;
        }
        // check if the debug rays should be displayed
        if(showDebugRays){
            fnc_displayDebugRays();
        }
    }


    void FixedUpdate(){
        if(isInCreation){
            return;
        }        
        // check if the detection is currently activated, if so check for a raycast hit
        if(detectionActive){
            fnc_checkForRaycastHit();
        }
    }


    /// functions to create the detectors
    private void fnc_createDetectors(){
        if(isInCreation){
            Debug.LogWarning("SearchConeImageHelpers: Can't create detectors, is currently in the creation process");
            return;
        }
        isInCreation = true;
        // check if detectors exist, if so remove them
        if(listDetectors != null){
            if(listDetectors.Count > 0){
                // check if nulls are in the holder, if not destroy the object
                for(int i = 0; i < listDetectors.Count; i++){
                    if(listDetectors[i] != null){
                        // check if a searchRaycastHolder exists, if so destroy it
                        if(listDetectors[i].GetComponent<SearchRaycastHolder>() != null){
                            listDetectors[i].GetComponent<SearchRaycastHolder>().fnc_destroyObject();
                        }
                    }
                }
                listDetectors.Clear();
                listDetectors.TrimExcess();
                listRaycastHolders.Clear();
                listRaycastHolders.TrimExcess();
            }
        }
        // check if still remenants exist
        if(raycastOrigin.childCount > 0){
            for(int i = 0; i < raycastOrigin.childCount; i++){
                if(raycastOrigin.GetChild(i).gameObject.GetComponent<SearchRaycastHolder>() != null){
                    raycastOrigin.GetChild(i).gameObject.GetComponent<SearchRaycastHolder>().fnc_destroyObject();
                }
            }
        }
        // start creating the detector objects
        // calculate the number of objects to create
        if(searchConeAngle > 0 && raycastDensity > 0){
            int nrOfDetectors = searchConeAngle/raycastDensity;
            // check if this is an even number, if so add one
            if(nrOfDetectors%2 == 0){
                nrOfDetectors += 1;
            }
            Vector3 setScale = new Vector3(1.0f, 1.0f, 1.0f);
            float rotationVal = ((float)searchConeAngle / 2.0f) / (float)nrOfDetectors;
            // create the detectors
            for(int i = 0; i < nrOfDetectors+2; i++){
                if(i == 0){
                    // instantiate a new instance
                    GameObject detector = Instantiate(searchRaycastHolderPrefab);
                    // create the name
                    detector.name = "SearchRaycast_" + i;
                    // parent under the origin
                    detector.transform.SetParent(raycastOrigin);
                    // set the local position, rotation and scale
                    detector.transform.localPosition = raycastOrigin.transform.localPosition;
                    detector.transform.localEulerAngles = new Vector3(0.0f, 0.0f, 0.0f);
                    detector.transform.localScale = setScale;
                    // add to the holder list
                    listDetectors.Add(detector);
                    listRaycastHolders.Add(detector.GetComponent<SearchRaycastHolder>());
                }
                else{
                    if(i%2 == 1){
                        GameObject detectorLeft = Instantiate(searchRaycastHolderPrefab);
                        detectorLeft.name = "SearchRaycast_" + i;
                        detectorLeft.transform.SetParent(raycastOrigin);
                        detectorLeft.transform.localPosition = raycastOrigin.transform.localPosition;
                        detectorLeft.transform.localEulerAngles = new Vector3(0.0f, 0.0f, i * rotationVal);
                        detectorLeft.transform.localScale = setScale;
                        listDetectors.Add(detectorLeft);
                        listRaycastHolders.Add(detectorLeft.GetComponent<SearchRaycastHolder>());
                    }
                    else{
                        GameObject detectorRight = Instantiate(searchRaycastHolderPrefab);
                        detectorRight.name = "SearchRaycast_" + i;
                        detectorRight.transform.SetParent(raycastOrigin);
                        detectorRight.transform.localPosition = raycastOrigin.transform.localPosition;
                        detectorRight.transform.localEulerAngles = new Vector3(0.0f, 0.0f, -(i - 1) * rotationVal);
                        detectorRight.transform.localScale = setScale;
                        listDetectors.Add(detectorRight);
                        listRaycastHolders.Add(detectorRight.GetComponent<SearchRaycastHolder>());
                    }
                }
            }
        }
        isInCreation = false;
    }


    // function to draw DebugRays
    private void fnc_displayDebugRays(){
        if(!isInCreation){
            if(listRaycastHolders != null){
                if(listRaycastHolders.Count > 0){
                    for(int i = 0; i < listRaycastHolders.Count; i++){
                        if(listRaycastHolders[i] !=  null){
                            listRaycastHolders[i].fnc_drawDebugRay(Time.deltaTime);
                        }
                    }
                }
            }
        }
    }


    // function to create raycasts and check if the hit object has one of the registered tags to warrant detection
    private void fnc_checkForRaycastHit(){
        // check if the next detection intervall time has been reached
        if(nextRaycastTime < Time.time){
            // now check if raycast holder are set
            if(listRaycastHolders.Count > 0){
                // schedule the time for the next raycast
                nextRaycastTime = Time.time + detectionInterval;
                // calculate the max length/distance of the raycast
                raycastLength = Vector2.Distance(raycastOrigin.position, listRaycastHolders[0].lineOfSightDirection.position);
                // flag if a registered object was detected in the raycasts, if so further handling can take place
                bool targetHitByRaycast = false;
                string tagOfHitObject = string.Empty;
                // check if debugRays are displayed, if so set them all to not hit
                if(showDebugRays){
                    for(int i = 0; i < listRaycastHolders.Count; i++){
                        listRaycastHolders[i].fnc_setHitState(false);
                    }
                }
                // loop through all raycast holders and create raycasts and check for hits
                for(int i = 0; i < listRaycastHolders.Count; i++){
                    // counter for the direction
                    int j = i;
                    // change the search direction if needed
                    if(searchFromOutsideIn){
                        j = listRaycastHolders.Count - 1 - i;
                    }                  
                    // create a raycast for the current line of sight
                    RaycastHit2D rHit = Physics2D.Raycast(raycastOrigin.position, 
                        listRaycastHolders[j].lineOfSightDirection.position - raycastOrigin.position, 
                            raycastLength, includedLayerMask);
                    // check if it has hit anything
                    if(rHit){
                        //Debug.Log("SearchConeImageHelpers: Hit object " + rHit.transform.gameObject.name);
                        // check if the hit was with a registered target
                        tagOfHitObject = rHit.transform.gameObject.tag;
                        // loop through all registered tags and compare the string
                        for(int k = 0; k < tagsToDetect.Length; k++){
                            if(string.Equals(tagsToDetect[k], tagOfHitObject)){
                                // set the detectedGameObject
                                lastDetectedGO = rHit.transform.gameObject;
                                // set the flag that a target was hit by a raycast
                                targetHitByRaycast = true;
                                // if debugRays are used, set the one that hit to display the hit color
                                if(showDebugRays){
                                    listRaycastHolders[j].fnc_setHitState(true);
                                }
                                break;
                            }
                        }
                    }
                    // check if a target was hit by a raycast, if so break out of the raycast loop
                    if(targetHitByRaycast){
                        break;
                    }
                }
                // check for the hit status after the loop and make changes if needed
                if(targetHitByRaycast){
                    if(!targetDetected){
                        // set the flag that the target was detected
                        targetDetected = true;
                        // check if color change is used
                        if(useColorChangeOnDetection){
                            fnc_fadeToDetected();
                        }
                        if(useCustomSearchConeSprites){
                            fnc_changeSpriteToDetected();
                        }
                    }
                }
                else{
                    // check if one was detected before, if so set it to undetected
                    if(targetDetected){
                        // reset the flags
                        targetDetected = false;
                        // check if color change is used
                        if(useColorChangeOnDetection){
                            fnc_fadeToUndetected();
                        }
                        if(useCustomSearchConeSprites){
                            fnc_changeSpriteToUndetected();
                        }
                    }
                }                
            }
            else{
                Debug.LogWarning("SearchConeImageHelper: No raycast holder were created");
            }
        }
    }


    // function to fade the color of the search cone to detected
    private void fnc_fadeToDetected(){
        if(displaySearchCone){
            if(coroutineFadeSearchConeToNeutral != null){
                StopCoroutine(coroutineFadeSearchConeToNeutral);
            }
            coroutineFadeSearchConeToDetected = StartCoroutine(FadeSearchConeColorToDetected());
        }
    }


    // function to fade the color of the search cone to neutral
    private void fnc_fadeToUndetected(){
        if(displaySearchCone){
            if(coroutineFadeSearchConeToDetected != null){
                StopCoroutine(coroutineFadeSearchConeToDetected);
            }
            coroutineFadeSearchConeToNeutral = StartCoroutine(FadeSearchConeColorToNeutral());
        }
    }


    // function to switch out the sprite of the search cone to the one set for detected target
    private void fnc_changeSpriteToDetected(){
        if(displaySearchCone){
            if(spriteDetected != null){
                imgSearchCone.sprite = spriteDetected;
            }
        }
    }


    // function to switch out the sprite of the search cone to the one set for neutral/no target
    private void fnc_changeSpriteToUndetected(){
        if(displaySearchCone){
            if(spriteNeutral != null){
                imgSearchCone.sprite = spriteNeutral;
            }
        }
    }


    // coroutine to fade the color of the searchCone to the detected state
    private IEnumerator FadeSearchConeColorToDetected(){
        Color startCol = imgSearchCone.color;
        colorFadeTime = 0.0f;
        while(colorFadeTime < 1.0f){
            colFade = Color.Lerp(startCol, colDetectd, colorFadeTime);
            // apply the changed color to the image
            imgSearchCone.color = colFade;
            // calculate the current color fade time for the progress
            colorFadeTime += Time.deltaTime * (1.0f / colChangeTime);
            yield return null;
        }
    }


    // coroutine to fade the color of the searchCone to neutral
    private IEnumerator FadeSearchConeColorToNeutral(){
        // get the current color tint of the image
        Color startCol = imgSearchCone.color;
        colorFadeTime = 0.0f;
        while(colorFadeTime < 1.0f){
            colFade = Color.Lerp(startCol, colNeutral, colorFadeTime);
            // apply the changed color to the image
            imgSearchCone.color = colFade;
            // calculate the current color fade time for the progress
            colorFadeTime += Time.deltaTime * (1.0f / colChangeTime);
            yield return null;
        }
    }


    // function to set the detection state -> only detect when a valid object has entered the collider zone 
    // -> to save resources
    public void fnc_setDetectionActive(bool inIsActive){
        detectionActive = inIsActive;
        // check if the object has left the collider zone but is still detected
        if(!detectionActive){
            if(targetDetected){
                // reset the flags
                targetDetected = false;
                // check if color change is used
                if(useColorChangeOnDetection){
                    fnc_fadeToUndetected();
                }
                if(useCustomSearchConeSprites){
                    fnc_changeSpriteToUndetected();
                }
                // check if debugRays are displayed, if so set them all to not hit
                if(showDebugRays){
                    for(int i = 0; i < listRaycastHolders.Count; i++){
                        listRaycastHolders[i].fnc_setHitState(false);
                    }
                }                
            }            
        }
    }


    /// variable setter functions
    // function to update the searchConeAngle -> update the mask of the image and rotation to the center
    public void fnc_setSearchConeAngle(int inAngle, bool inEavluateChanges){
        searchConeAngle = inAngle;
        imgSearchCone.fillAmount = (float)searchConeAngle/360.0f;
        rectTrans.localEulerAngles = new Vector3(0.0f, 0.0f, (float)searchConeAngle/2.0f);
        if(inEavluateChanges){
            fnc_createDetectors();
        }
    }


    // function to set the size of the searchCone -> update the detectors
    public void fnc_setSearchConeSize(int inSize, bool inEavluateChanges){
        searchConeSize = inSize;
        if(inEavluateChanges){
            fnc_createDetectors();
        }
    }


    // function to set the visibility of the search cone
    public void fnc_setDisplaySearchCone(bool inDisplaySearchCone){
        displaySearchCone = inDisplaySearchCone;
        if(displaySearchCone){
            imgSearchCone.enabled = true;
        }
        else{
            imgSearchCone.enabled = false;
        }
    }


    // function to set the useColorChange
    public void fnc_setUseColorChangeOnDetection(bool inUseColorChange){
        useColorChangeOnDetection = inUseColorChange;
    }


    // function to set the neutral color
    public void fnc_setColNeutral(Color inCol){
        colNeutral = inCol;
        // change the color if the target 
        imgSearchCone.color = colNeutral;
    }


    // function to set the detected color
    public void fnc_setColDetected(Color inCol){
        colDetectd = inCol;
        if(useColorChangeOnDetection && targetDetected){
            imgSearchCone.color = colDetectd;
        }
    }


    // function to set the color change time
    public void fnc_setColChangeTime(float inChangeTime){
        colChangeTime = inChangeTime;
    }


    // function to set the state if a custom sprite for detection should be used
    public void fnc_setUseCustomSearchConeSprites(bool inUse){
        // reset if currently active on a detected sprite and a change to no longe use them has been made
        if(!inUse && useCustomSearchConeSprites && targetDetected){
            imgSearchCone.sprite = spriteNeutral;
        }
        useCustomSearchConeSprites = inUse;        
    }


    // function to set the neutral cone sprite
    public void fnc_setSpriteNeutral(Sprite inSprite){
        spriteNeutral = inSprite;
        if(useCustomSearchConeSprites && !targetDetected){
            imgSearchCone.sprite = spriteNeutral;
        }
    }


    // function to set the detected cone sprite
    public void fnc_setSpriteDetected(Sprite inSprite){
        spriteDetected = inSprite;
        if(useCustomSearchConeSprites && targetDetected){
            imgSearchCone.sprite = spriteDetected;
        }
    }


    // function to update the tags to detect
    public void fnc_setTagsToDetect(string[] inTagsToDetect){
        tagsToDetect = inTagsToDetect;
    }


    // function to update the raycast excluded layers
    public void fnc_setRaycastIncludedLayers(int[] inRaycastIncludedLayers){
        raycastIncludedLayers = inRaycastIncludedLayers;
        // reset the includedLayerMask
        includedLayerMask = 0;
        for(int i = 0; i < raycastIncludedLayers.Length; i++){
            includedLayerMask += 1 << raycastIncludedLayers[i];
        }
    }


    // function to update the detection interval
    public void fnc_setDetectionInterval(float inDetectionInterval){
        detectionInterval = inDetectionInterval;
    }


    // function to update the raycast density
    public void fnc_setRaycastDensity(int inDensity){
        raycastDensity = inDensity;
        fnc_createDetectors();
    }


    // function to update the search from outside in flag
    public void fnc_setSearchFromOutsideIn(bool inFromOutsideIn){
        searchFromOutsideIn = inFromOutsideIn;
    }


    // function to set the flag for the debug ray
    public void fnc_setShowDebugRays(bool inShowDebugRays){
        showDebugRays = inShowDebugRays;
    }
}
