using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class InGameStore : MonoBehaviour
{
    public CameraProperties[] cameras;
    public StoreItem[] storeItem;
    public Transform content;

    public Ease ease = Ease.InBack;

    private void Start()
    {
        cameras = ES3.Load("Cameras", cameras);
    }
    public void BuyItem(int index)
    {
        if(Game.instance.GetCash() >= storeItem[index].price)
        {
            var a =  Instantiate(storeItem[index].prefab, transform.position,Quaternion.identity);
            a.GetComponent<FieldOfView>().Setter(cameras[index].radius[cameras[index].radiusIndex], cameras[index].angle[cameras[index].angleIndex]);
            transform.DOScale(0, 0.5f).SetEase(ease);
        }
    }
}
[System.Serializable]
public class StoreItem
{
    public string name;
    public int price;
    public GameObject prefab;
}
