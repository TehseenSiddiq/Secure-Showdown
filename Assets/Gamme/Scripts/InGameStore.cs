using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class InGameStore : MonoBehaviour
{
    public CameraProperties[] cameras;
    public Transform content;
    public Transform prefab;

    public GameObject panel;
   
    public Ease ease = Ease.InBack;

    private void Start()
    {
        cameras = GameManager.instance.cameras;
        for (int i = 0; i < cameras.Length; i++)
        {
            SetShop(i);
        }
       
    }

    void SetShop(int index)
    {
        var a = Instantiate(prefab);
        a.transform.parent = content;
        a.transform.localScale = new Vector3(1, 1, 1);
        a.GetComponent<ButtonProperty>().SetButton(cameras[index].image, cameras[index].name, cameras[index].quntity,index);
        a.GetComponent<Button>().onClick.AddListener(() => FindObjectOfType<InGameStore>().BuyItem(index));
    }

    public void BuyItem(int index)
    {
        if(cameras[index].quntity > 0)
        {
            cameras[index].quntity--;
            var a =  Instantiate(cameras[index].prefab, transform.position,Quaternion.identity);

            if (cameras[index].type == Type.Camera)
                a.GetComponent<FieldOfView>().Setter(cameras[index].radius[cameras[index].radiusIndex],cameras[index].angle[cameras[index].angleIndex],cameras[index].energyPerSeond[cameras[index].energyIndex],cameras[index].clearness[cameras[index].clearnessIndex]);

            else if (cameras[index].type == Type.Wire)
            { 
                a.GetComponent<WireTraps>().range = cameras[index].ranges[cameras[index].rangeIndex];
                a.GetComponent<WireTraps>().energy = cameras[index].energyPerSeond[cameras[index].energyIndex];
            }

            else if (cameras[index].type == Type.Lock)
            {
                Lock _lock = a.GetComponent<Lock>();
                Debug.Log("Checking: " + _lock.delay);
                _lock.delay = cameras[index].delays[cameras[index].DelayIndex];
                _lock.energy = cameras[index].energyPerSeond[cameras[index].energyIndex];
            }
               
            panel.GetComponent<FadeInOut>().Hide();
            Debug.Log("Purchased: "+cameras[index].name);
        }
        else
        {
            Debug.Log("Not enough Cash!");
        }
    }
}

