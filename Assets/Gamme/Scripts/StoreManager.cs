using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StoreManager : MonoBehaviour
{
    public List<GameObject> items;
    public GameObject prefab;
    public Transform content;

    private void Awake()
    {
        SetShop();
        // SetStats(0);
    }

    public void SetShop()
    {
        foreach (Transform child in content.transform)
        {
            GameObject.Destroy(child.gameObject);
        }
        foreach (CameraProperties camera in GameManager.instance.cameras)
        {
            GameObject obj = Instantiate(prefab, content);

            obj.GetComponent<CameraUIObject>().SetObject(camera.name, camera.price,camera.image,camera.unlocked,camera.index);
            obj.GetComponent<CameraUIObject>().AddListener();
           // items.Add(obj);
        }
    }
    public void SetStats(int index)
    {
       if(Game.instance.GetCash() >= GameManager.instance.cameras[index].price)
       {
            Game.instance.SetCash(Game.instance.GetCash() - GameManager.instance.cameras[index].price);
            GameManager.instance.cameras[index].unlocked = true;
            GameManager.instance.cameras[index].quntity++;
            Debug.Log("Camera " + GameManager.instance.cameras[index].name + " Purchased.");
       }

    }
 

}
