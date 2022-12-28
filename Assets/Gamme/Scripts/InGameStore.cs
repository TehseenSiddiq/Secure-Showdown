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
            if (cameras[index].type == Type.Camera)
                a.GetComponent<FieldOfView>().Setter(cameras[index].radius[cameras[index].radiusIndex], cameras[index].angle[cameras[index].angleIndex]);
            else if (cameras[index].type == Type.Wire)
                a.GetComponent<WireTraps>().range = cameras[index].ranges[cameras[index].rangeIndex];
            else if (cameras[index].type == Type.Lock)
                a.GetComponent<WireTraps>().range = cameras[index].delays[cameras[index].DelayIndex];
            panel.GetComponent<FadeInOut>().Hide();
            Debug.Log("Purchased: "+cameras[index].name);
        }
        else
        {
            Debug.Log("Not enough Cash!");
        }
    }
}

