using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Type { Camera, Wire, Lock };
[System.Serializable]
public class CameraProperties
{
   
    public string name;
    public int price;
    public bool unlocked = false;
   // public GameObject prefab;
    public int quntity = 0;
    public Type type = Type.Camera;

    public float[] energyPerSeond;
    public int[] energyPrice;
    public int energyIndex = 0;
    public float[] radius;
    public int[] radiusPrice;
    public int radiusIndex;
    public float[] angle;
    public int[] anglePrice;
    public int angleIndex;
    public float[] clearness;
    public int[] clearnessPrice;
    public int clearnessIndex;
    public float[] ranges;
    public int[] rangePrice;
    public int rangeIndex;
    public float[] delays;
    public int[] delaysPrice;
    public int DelayIndex;
    public int index;


}
