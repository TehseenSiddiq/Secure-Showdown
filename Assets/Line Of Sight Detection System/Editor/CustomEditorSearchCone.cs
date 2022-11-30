using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.Events;

[CustomEditor(typeof(SearchCone))]
[CanEditMultipleObjects]
public class CustomEditorSearchCone : Editor
{
    /// connected properties
    private SerializedProperty evaluateChangesProperty;
    private SerializedProperty goSearchConeProperty;
    private SerializedProperty searchConeAngleProperty;
    private SerializedProperty searchConeSizeProperty;
    private SerializedProperty searchConeStartRotationAngleProperty;
    private SerializedProperty useSearchConeSweepProperty;
    private SerializedProperty searchConeSweepAngleProperty;
    private SerializedProperty searchConeSweepTimeProperty;
    private SerializedProperty stopSearchConeSweepOnDetectionProperty;
    private SerializedProperty displaySearchConeProperty;
    private SerializedProperty useColorChangeOnDetectionProperty;
    private SerializedProperty colNeutralProperty;
    private SerializedProperty colDetectedProperty;
    private SerializedProperty colChangeTimeProperty;
    private SerializedProperty useCustomSearchConeSpritesProperty;
    private SerializedProperty spriteNeutralProperty;
    private SerializedProperty spriteDetectedProperty;
    private SerializedProperty tagsToDetectProperty;
    private SerializedProperty raycastIncludedLayersProperty;
    private SerializedProperty detectionIntervalProperty;
    private SerializedProperty raycastDensityProperty;
    private SerializedProperty searchFromOutsideInProperty;
    private SerializedProperty showDebugRaysProperty;
    private SerializedProperty onTargetDetectedProperty;
    private SerializedProperty onTargetLostProperty;
    private SerializedProperty onTargetFoundProperty;


    /// keeps min/max values for the sliders
    private int minSearchConeAngle = 1;
    private int maxSearchConeAngle = 180;
    private int minSearchConeSize = 1;
    private int maxSearchConeSize = 5000;
    private float minSearchConeStartRotationAngle = 0.0f;
    private float maxSearchConeStartRotationAngle = 360.0f;
    private float minSearchConeSweepAngle = 1.0f;
    // this value should not be above 180° since the sweep runs in every direction with this value
    private float maxSearchConeSweepAngle = 180.0f;
    // this value shouldn't be below 1.0 seconds or else the movement get's to jittery
    private float minSearchConeSweepTime = 0.1f;
    private float maxSearchConeSweepTime = 30.0f;
    // this value shouldn't be below 0.1 seconds or else the animation can have problems
    private float minColChangeTime = 0.1f;
    private float maxColChangeTime = 5.0f;
    private float minDetectionInterval = 0.1f;
    private float maxDetectionInterval = 5.0f;
    private int minRaycastDensity = 1;
    private int maxRaycastDensity = 30;


    // flags if submenues are open
    private bool searchConeSettingsIsOpen = true;
    private bool searchConeColorChangeSettingsIsOpen = true;
    private bool searchConeSpriteSettingsIsOpen = true;
    private bool raycastSettingsIsOpen = true;
    private bool eventSectionIsOpen = true;


    /// gui styles
    // label styles
    private GUIStyle styleLabelError = new GUIStyle();
    private GUIStyle styleLabelHeadline = new GUIStyle();
    // horizontal line
    private GUIStyle styleHorizontalLine = new GUIStyle();


    /// gui images
    private Texture spriteInsideOut;
    private Texture spriteOutisdeIn;


    void OnEnable(){
        evaluateChangesProperty = serializedObject.FindProperty("evaluateChanges");
        goSearchConeProperty = serializedObject.FindProperty("goSearchCone");
        searchConeAngleProperty = serializedObject.FindProperty("searchConeAngle");
        searchConeSizeProperty = serializedObject.FindProperty("searchConeSize");
        searchConeStartRotationAngleProperty = serializedObject.FindProperty("searchConeStartRotationAngle");
        useSearchConeSweepProperty = serializedObject.FindProperty("useSearchConeSweep");
        searchConeSweepAngleProperty = serializedObject.FindProperty("searchConeSweepAngle");
        searchConeSweepTimeProperty = serializedObject.FindProperty("searchConeSweepTime");
        stopSearchConeSweepOnDetectionProperty = serializedObject.FindProperty("stopSearchConeSweepOnDetection");
        displaySearchConeProperty = serializedObject.FindProperty("displaySearchCone");
        useColorChangeOnDetectionProperty = serializedObject.FindProperty("useColorChangeOnDetection");
        colNeutralProperty = serializedObject.FindProperty("colNeutral");
        colDetectedProperty = serializedObject.FindProperty("colDetected");
        colChangeTimeProperty = serializedObject.FindProperty("colChangeTime");
        useCustomSearchConeSpritesProperty = serializedObject.FindProperty("useCustomSearchConeSprites");
        spriteNeutralProperty = serializedObject.FindProperty("spriteNeutral");
        spriteDetectedProperty = serializedObject.FindProperty("spriteDetected");
        tagsToDetectProperty = serializedObject.FindProperty("tagsToDetect");
        raycastIncludedLayersProperty = serializedObject.FindProperty("raycastIncludedLayers");
        detectionIntervalProperty = serializedObject.FindProperty("detectionInterval");
        raycastDensityProperty = serializedObject.FindProperty("raycastDensity");
        searchFromOutsideInProperty = serializedObject.FindProperty("searchFromOutsideIn");
        showDebugRaysProperty = serializedObject.FindProperty("showDebugRays");
        onTargetDetectedProperty = serializedObject.FindProperty("OnTargetDetected");
        onTargetLostProperty = serializedObject.FindProperty("OnTargetLost");
        onTargetFoundProperty = serializedObject.FindProperty("OnTargetFound");
        // setup the guiStyles
        styleLabelError.normal.textColor = Color.red;
        styleLabelHeadline.fontStyle = FontStyle.Bold;
        // load the sprites
        spriteInsideOut = Resources.Load<Texture>("CustomEditor/GUI_insideOut_64");
        spriteOutisdeIn = Resources.Load<Texture>("CustomEditor/GUI_outsideIn_64");
        // check if the layers exist
        LayerCreator.fnc_createNewLayer("Detectable");
        LayerCreator.fnc_createNewLayer("Undetectable");
    }


    public override void OnInspectorGUI() {
        // call update in the serialized object
        serializedObject.Update();
        evaluateChangesProperty.boolValue = EditorGUILayout.ToggleLeft("Evaluate value changes during runtime", 
            evaluateChangesProperty.boolValue);
        if(evaluateChangesProperty.boolValue){
            EditorGUILayout.LabelField("Should be unchecked for shipping the project.",
                styleLabelError);
            EditorGUILayout.LabelField("Has huge impact on the performance.",
                styleLabelError);
        }
        fnc_drawSeperatorLine(Color.black);
        EditorGUILayout.LabelField("SearchCone GameObject with SearchConeImageHelper", styleLabelHeadline);
        // set the gameObject with the searchConeImageHelperScript
        goSearchConeProperty.objectReferenceValue = EditorGUILayout.ObjectField("SearchCone gameObject", 
            goSearchConeProperty.objectReferenceValue, typeof(GameObject), true);
        if(goSearchConeProperty.objectReferenceValue == null){
            EditorGUILayout.LabelField("Set the gameObject with the SearchConeImageHelper script.", 
                styleLabelError);
        }
        else{
            // get the reference gameObject
            GameObject goSearchImage = goSearchConeProperty.objectReferenceValue as GameObject;
            if(!goSearchImage.GetComponent<SearchConeImageHelpers>()){
                EditorGUILayout.LabelField("The SearchConeImageHelper script isn't on this object.", 
                    styleLabelError);
            }
            else{
                /// search cone settings
                EditorGUILayout.Space();
                fnc_drawSeperatorLine(Color.black);
                searchConeSettingsIsOpen = EditorGUILayout.BeginFoldoutHeaderGroup(searchConeSettingsIsOpen, 
                    "SearchCone settings", EditorStyles.foldoutHeader);
                    if(searchConeSettingsIsOpen){
                        // slider for the angle of the search cone
                        EditorGUILayout.IntSlider(searchConeAngleProperty, minSearchConeAngle, 
                            maxSearchConeAngle, "SearchCone angle");
                        // slider for the length/size of the search cone
                        EditorGUILayout.IntSlider(searchConeSizeProperty, minSearchConeSize, 
                            maxSearchConeSize, "SearchCone size/length");
                        // slider for the start rotation of the search cone
                        EditorGUILayout.Slider(searchConeStartRotationAngleProperty, minSearchConeStartRotationAngle, 
                            maxSearchConeStartRotationAngle, "SearchCone start rotation");
                        // check if automatic scan sweep should be made
                        useSearchConeSweepProperty.boolValue = EditorGUILayout.ToggleLeft("Use automatic SearchCone sweep", 
                            useSearchConeSweepProperty.boolValue);
                        // if use automatic sweep add additional properties
                        if(useSearchConeSweepProperty.boolValue){
                            fnc_drawSeperatorLine(Color.grey);
                                EditorGUILayout.LabelField("SearchCone auto sweep settings", styleLabelHeadline);
                                searchConeSweepAngleProperty.floatValue = EditorGUILayout.Slider("Sweep angle", 
                                    searchConeSweepAngleProperty.floatValue, minSearchConeSweepAngle, 
                                    maxSearchConeSweepAngle);
                                searchConeSweepTimeProperty.floatValue = EditorGUILayout.Slider("Sweep duration", 
                                    searchConeSweepTimeProperty.floatValue, minSearchConeSweepTime, 
                                    maxSearchConeSweepTime);
                                stopSearchConeSweepOnDetectionProperty.boolValue = EditorGUILayout.ToggleLeft("Stop automatic sweep on detection",
                                    stopSearchConeSweepOnDetectionProperty.boolValue);
                        }
                    }
                EditorGUILayout.EndFoldoutHeaderGroup();
                EditorGUILayout.Space();
                fnc_drawSeperatorLine(Color.black);
                EditorGUILayout.LabelField("SearchCone display settings", styleLabelHeadline);
                /// display settings enable/disable the visible fov cone
                displaySearchConeProperty.boolValue = EditorGUILayout.ToggleLeft("Display the search cone", 
                    displaySearchConeProperty.boolValue);
                if(displaySearchConeProperty.boolValue){
                    /// search cone color change settings
                    // check if color change for detection should be used
                    useColorChangeOnDetectionProperty.boolValue = EditorGUILayout.ToggleLeft("Use color change for detection",
                        useColorChangeOnDetectionProperty.boolValue);
                    if(useColorChangeOnDetectionProperty.boolValue){
                        fnc_drawSeperatorLine(Color.grey);
                        searchConeColorChangeSettingsIsOpen = EditorGUILayout.BeginFoldoutHeaderGroup(searchConeColorChangeSettingsIsOpen,
                            "SearchCone color change settings", EditorStyles.foldoutHeader);
                        if(searchConeColorChangeSettingsIsOpen){
                            //EditorGUILayout.LabelField("SearchCone color change settings", styleLabelHeadline);
                            colNeutralProperty.colorValue = EditorGUILayout.ColorField("Color for neutral state", 
                                colNeutralProperty.colorValue);
                            colDetectedProperty.colorValue = EditorGUILayout.ColorField("Color for detected state", 
                                colDetectedProperty.colorValue);
                            colChangeTimeProperty.floatValue = EditorGUILayout.Slider("Color change animation time", 
                                colChangeTimeProperty.floatValue, minColChangeTime, maxColChangeTime);
                        }
                        EditorGUILayout.EndFoldoutHeaderGroup();
                        fnc_drawSeperatorLine(Color.grey);
                    }
                    /// search cone sprite settings
                    // check if custom sprites should be used
                    useCustomSearchConeSpritesProperty.boolValue = EditorGUILayout.ToggleLeft("Use custom sprites for the SearchCone",
                        useCustomSearchConeSpritesProperty.boolValue);
                    if(useCustomSearchConeSpritesProperty.boolValue){
                        fnc_drawSeperatorLine(Color.grey);
                        searchConeSpriteSettingsIsOpen = EditorGUILayout.BeginFoldoutHeaderGroup(searchConeSpriteSettingsIsOpen,
                            "SearchCone sprite settings", EditorStyles.foldoutHeader);
                        if(searchConeSpriteSettingsIsOpen){
                            //EditorGUILayout.LabelField("SearchCone sprite settings", styleLabelHeadline);
                            spriteNeutralProperty.objectReferenceValue = EditorGUILayout.ObjectField("SearchCone neutral", 
                                spriteNeutralProperty.objectReferenceValue, typeof(Sprite), false);
                            spriteDetectedProperty.objectReferenceValue = EditorGUILayout.ObjectField("SearchCone detected",
                                spriteDetectedProperty.objectReferenceValue, typeof(Sprite), false);
                            if(spriteNeutralProperty.objectReferenceValue == null){
                                EditorGUILayout.LabelField("Set a sprite for the neutral state.", 
                                    styleLabelError);
                            }
                            else{
                                if(spriteDetectedProperty.objectReferenceValue == null){
                                    spriteDetectedProperty.objectReferenceValue = spriteNeutralProperty.objectReferenceValue;
                                }
                            }
                        }
                        EditorGUILayout.EndFoldoutHeaderGroup();
                        fnc_drawSeperatorLine(Color.black);                    
                    }                    
                }
                /// raycast settings
                raycastSettingsIsOpen = EditorGUILayout.BeginFoldoutHeaderGroup(raycastSettingsIsOpen, "Raycast settings",
                    EditorStyles.foldoutHeader);
                if(raycastSettingsIsOpen){
                    EditorGUILayout.PropertyField(tagsToDetectProperty, true);
                    fnc_drawSeperatorLine(Color.grey);
                    EditorGUILayout.PropertyField(raycastIncludedLayersProperty, true);
                    fnc_drawSeperatorLine(Color.grey);
                    detectionIntervalProperty.floatValue = EditorGUILayout.Slider("Detection interval (s)",
                        detectionIntervalProperty.floatValue, minDetectionInterval, maxDetectionInterval);
                    raycastDensityProperty.intValue = EditorGUILayout.IntSlider("Raycast scan density",
                        raycastDensityProperty.intValue, minRaycastDensity, maxRaycastDensity);
                    var scanDirectionBox = EditorGUILayout.BeginHorizontal();
                    EditorGUILayout.EndHorizontal();                    
                    searchFromOutsideInProperty.boolValue = EditorGUILayout.ToggleLeft("Search from outside in",
                        searchFromOutsideInProperty.boolValue);
                    // box to house the graphic representation of the scan direction
                    Rect boxRect = new Rect(scanDirectionBox.width-50, scanDirectionBox.y, 64, 128);
                    if(searchFromOutsideInProperty.boolValue){
                        GUI.DrawTexture(boxRect, spriteOutisdeIn, ScaleMode.ScaleToFit, true, 0f);
                    }
                    else{
                        GUI.DrawTexture(boxRect, spriteInsideOut, ScaleMode.ScaleToFit, true, 0f);
                    }
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();
                    EditorGUILayout.Space();                                                            
                    showDebugRaysProperty.boolValue = EditorGUILayout.ToggleLeft("Show debug rays", 
                        showDebugRaysProperty.boolValue);
                    if(showDebugRaysProperty.boolValue){
                        EditorGUILayout.LabelField("Use this only for debugging purposes! Consumes lots of performance.", 
                            styleLabelError);
                    }
                }
                EditorGUILayout.EndFoldoutHeaderGroup();
                fnc_drawSeperatorLine(Color.black);
                eventSectionIsOpen = EditorGUILayout.BeginFoldoutHeaderGroup(eventSectionIsOpen, "Target events",
                EditorStyles.foldoutHeader);
                if(eventSectionIsOpen){
                    EditorGUILayout.PropertyField(onTargetDetectedProperty, true);
                    EditorGUILayout.PropertyField(onTargetLostProperty, true);
                }
                EditorGUILayout.EndFoldoutHeaderGroup();
                fnc_drawSeperatorLine(Color.grey);
            }
        }
        // apply the values to the connected script
        serializedObject.ApplyModifiedProperties();
    }


    // function to draw a horizontal line
    private void fnc_drawSeperatorLine(Color inLineColor){
        var rect = EditorGUILayout.BeginHorizontal();
        Handles.color = inLineColor;
        Handles.DrawLine(new Vector2(rect.x, rect.y), new Vector2(rect.width, rect.y));
        EditorGUILayout.EndHorizontal();
    }
}
