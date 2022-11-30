using UnityEngine;
using UnityEditor;
 
public class LayerCreator
{
    /// <summary>
    /// Create a layer at the next available index.
    /// </summary>
    /// <param inLayerName="layerName">Name of the layer that should be created</param>
    public static void fnc_createNewLayer(string inLayerName)
    {
        if (string.IsNullOrEmpty(inLayerName)){
            Debug.LogError("LayerCreator: the supplied layer name is empty or null");
            return;
        }
        // get the tagManager as serialized object
        var tagManager = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset")[0]);
        var layerProperties = tagManager.FindProperty("layers");
        var nrOfProperties = layerProperties.arraySize;
        // get the first empty property
        SerializedProperty firstEmptyProperty = null;
        // loop through all properties and check if the layer already exists or if the max amount has been filled,
        // if neither applies, create a new layer with the needed name
        for (var i = 0; i < nrOfProperties; i++){
            // get the current property
            var layerProperty = layerProperties.GetArrayElementAtIndex(i);
            // get the name of the current property
            var propertyStringValue = layerProperty.stringValue;
            // check if this is the same as the selected one, if so exit further handling
            if (string.Equals(propertyStringValue, inLayerName)){
                //Debug.Log("LayerCreator: The layer already exists.");
                return;
            } 
            // check if there isn't an empty string at this point, if not continue the loop
            if (i < 8 || propertyStringValue != string.Empty){
                continue;
            }
            // if an empty property field was found set it to the current layer property
            if (firstEmptyProperty == null){
                firstEmptyProperty = layerProperty;
                break;
            }
        }
        // now check if the first empty property is null, if so, the max amount of layers has been reached
        if (firstEmptyProperty == null){
            UnityEngine.Debug.LogWarning("LayerCreator: Couldn't create a new layer with name " + inLayerName + 
                ", because the max amount of layer (32) has been reached");
            return;
        }
        // create a new layer with the supplied name and apply the properties to the TagManager
        firstEmptyProperty.stringValue = inLayerName;
        tagManager.ApplyModifiedProperties();
    }
}