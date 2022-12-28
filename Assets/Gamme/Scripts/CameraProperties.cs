using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Type { Camera, Wire, Lock };
[System.Serializable]
public class CameraProperties
{
   
    public string name;
    public Sprite image;
    public int price;
    public bool unlocked = false;
    public GameObject prefab;
    public Type type = Type.Camera;

    public float[] energyPerSeond;
    public int energyIndex = 0;
    public float[] radius;
    public int radiusIndex;
    public float[] angle;
    public int angleIndex;
    public float[] clearness;
    public int clearnessIndex;
    public float[] ranges;
    public int rangeIndex;
    public float[] delays;
    public int DelayIndex;
    public int index;

}
