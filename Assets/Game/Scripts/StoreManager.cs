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
    private GameManager gameManager;

    private void Awake()
    {
        gameManager = GameManager.instance;
        
        // SetStats(0);
    }
    private void Start()
    {
        SetShop();
    }
    public void SetShop()
    {
        foreach (Transform child in content.transform)
        {
            Destroy(child.gameObject);
        }
        foreach (CameraProperties camera in GameManager.instance.cameras)
        {
            GameObject obj = Instantiate(prefab, content);
            CameraUIObject cameraUI = obj.GetComponent<CameraUIObject>();
            cameraUI.SetObject(camera.name, camera.price, GameManager.instance.cameraImages[camera.index], camera.index);
            cameraUI.AddListener();
            // items.Add(obj);
        }
    }
    public void SetStats(int index)
    {
        GameManager gm = GameManager.instance;
        CameraProperties camera = gm.cameras[index];
        int cash = Game.instance.GetCash();

        if (cash >= camera.price)
        {
            Game.instance.SetCash(cash - camera.price);
            camera.unlocked = true;
            camera.quntity++;

            ES3.Save("Cameras", gm.cameras);
        }

    }
 

}
