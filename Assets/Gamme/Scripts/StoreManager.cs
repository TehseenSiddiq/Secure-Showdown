using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StoreManager : MonoBehaviour
{
    public CameraProperties[] cameras;
    public List<GameObject> items;
    public GameObject prefab;
    public Transform content;

    private void Start()
    {
        SetShop();
        if (ES3.KeyExists("Cameras"))
        {
            cameras = ES3.Load("Cameras", cameras);
        }
        else
            ES3.Save("Cameras", cameras);
       // SetStats(0);
    }

    public void SetShop()
    {
        foreach (Transform child in content.transform)
        {
            GameObject.Destroy(child.gameObject);
        }
        foreach (CameraProperties camera in cameras)
        {
            GameObject obj = Instantiate(prefab, content);

            obj.GetComponent<CameraUIObject>().SetObject(camera.name, camera.price,camera.image,camera.unlocked,camera.index);
            obj.GetComponent<CameraUIObject>().AddListener();
           // items.Add(obj);
        }
    }
    public void SetStats(int index)
    {
       if(Game.instance.GetCash() >= cameras[index].price)
        {
            Game.instance.SetCash(Game.instance.GetCash() - cameras[index].price);
            cameras[index].unlocked = true;
            cameras = FindObjectOfType<StoreManager>().cameras;
            Debug.Log("Camera " + cameras[index].name + " Purchased.");

        }

    }
    private void OnApplicationQuit()
    {
        ES3.Save("Cameras", cameras);
    }

}
