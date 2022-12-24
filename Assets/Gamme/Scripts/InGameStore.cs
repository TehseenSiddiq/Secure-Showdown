using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class InGameStore : MonoBehaviour
{
    public CameraProperties[] cameras;
    public Transform content;
    public GameObject panel;

    public Ease ease = Ease.InBack;

    private void Start()
    {
        cameras = GameManager.instance.cameras;
    }
    public void BuyItem(int index)
    {
        if(Game.instance.GetCash() >= cameras[index].price)
        {
            var a =  Instantiate(cameras[index].prefab, transform.position,Quaternion.identity);
            a.GetComponent<FieldOfView>().Setter(cameras[index].radius[cameras[index].radiusIndex], cameras[index].angle[cameras[index].angleIndex]);
            panel.GetComponent<FadeInOut>().Hide();
        }
    }
}

