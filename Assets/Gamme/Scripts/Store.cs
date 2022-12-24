using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Store : MonoBehaviour
{
    public GameObject point;
    public int price = 100;

    public void BuyElectricPoint()
    {
        var a = Instantiate(point, Vector3.zero, Quaternion.identity);
        SnapManager.instance.AddPoint(a.transform);
        this.gameObject.SetActive(false);
    }
    
}
