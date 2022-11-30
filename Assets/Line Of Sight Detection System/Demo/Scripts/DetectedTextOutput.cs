using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DetectedTextOutput : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Set the textField for the output here")]
    private TMP_Text txtDetectedOut = null;

    private List<string> listDetectors = new List<string>();
    private string detectedObj = string.Empty;

    void Awake(){
        if(txtDetectedOut == null){
            Debug.LogError("DetectedTextOutput: No textfield for the output of the detected text was set.");
            return;
        }
    }


    public void fnc_detected(GameObject inDetectorGO, GameObject inDetectedGO){
        if(!listDetectors.Contains(inDetectorGO.name)){
            listDetectors.Add(inDetectorGO.name);
        }
        detectedObj = inDetectedGO.name;
        fnc_updateText();
    }


    public void fnc_removedDetected(GameObject inDetectorGO, GameObject inDetectedGO){
        if(listDetectors.Contains(inDetectorGO.name)){
            listDetectors.Remove(inDetectorGO.name);
        }
        fnc_updateText();
    }


    private void fnc_updateText(){
        if(txtDetectedOut != null){
            if(listDetectors.Count > 0){
                string textOut = string.Empty;
                for(int i = 0; i < listDetectors.Count; i++){
                    textOut += "Detected " + detectedObj + " by " + listDetectors[i] + System.Environment.NewLine;
                }
                txtDetectedOut.text = textOut;
            }
            else{
                txtDetectedOut.text = string.Empty;
            }
        }
    }
}
