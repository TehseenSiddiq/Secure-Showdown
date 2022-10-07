using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapManager : MonoBehaviour
{
    public static SnapManager instance;

    public List<Transform> points;

    private void Awake()
    {
        instance = this;
    }
}
