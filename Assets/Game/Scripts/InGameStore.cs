using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using System;

public class InGameStore : MonoBehaviour
{
    private GameManager gm;
   // public CameraProperties[] cameras;
   // public CameraProperties[] reserveCameras;
    public Transform content;
    public Transform prefab;

    public GameObject panel;
    public GameObject noCircuitText;
   
    public Ease ease = Ease.InBack;

    private void Awake()
    {
        gm = GameManager.instance;
    }
    private void Start()
    {
       // reserveCameras = FindObjectOfType<GameManager>().cameras;
        //cameras = gm.cameras;
      //  Array.Copy(gm.cameras, cameras, cameras.Length);

        DestroyExistingItems();
        SetShop();
    }

    private void DestroyExistingItems()
    {
        foreach (Transform obj in content.transform)
        {
            Destroy(obj.gameObject);
        }
    }

    private void SetShop()
    {
        for (int i = 0; i < gm.cameras.Length; i++)
        {
            InstantiateButton(i);
        }
    }

    private void InstantiateButton(int index)
    {
        Transform button = Instantiate(prefab, content);
        ButtonProperty buttonProperty = button.GetComponent<ButtonProperty>();
        buttonProperty.SetButton(gm.cameraImages[gm.cameras[index].index], gm.cameras[index].name, gm.cameras[index].quntity, index);
        button.GetComponent<Button>().onClick.AddListener(() => BuyItem(index));
    }

    private Vector3 GetCenterScreenPosition()
    {
        Camera mainCamera = Camera.main;
        float screenCenterX = Screen.width * 0.5f;
        float screenCenterY = Screen.height * 0.5f;
        Vector3 centerScreenPosition = mainCamera.ScreenToWorldPoint(new Vector3(screenCenterX, screenCenterY, 0));
        Vector3 newCenter = new Vector3(centerScreenPosition.x, centerScreenPosition.y, 0);
        return newCenter;
    }

    public void BuyItem(int index)
    {
        if (gm.cameras[index].quntity > 0)
        {
            gm.cameras[index].quntity--;

            InstantiateItem(index);
            panel.GetComponent<FadeInOut>().Hide();
            Debug.Log("Purchased: " + gm.cameras[index].name);
        }
        else
        {
            Debug.Log("Not enough Cash!");
            ShowNoCircuitText();
        }
    }

    private void ShowNoCircuitText()
    {
        GameObject text = Instantiate(noCircuitText, new Vector2(0, -50), Quaternion.identity);
        text.transform.DOMoveY(20, 3);
        Destroy(text, 4);
    }

    private void InstantiateItem(int index)
    {
        Vector3 centerScreenPosition = GetCenterScreenPosition();
        Quaternion rotation = Quaternion.identity;
        GameObject instantiatedItem = Instantiate(gm.cameraPrefabs[index], centerScreenPosition, rotation);

        if (gm.cameras[index].type == Type.Camera)
        {
            FieldOfView fieldOfView = instantiatedItem.GetComponent<FieldOfView>();
          
            Debug.Log(gm.cameras[index].radius[gm.cameras[index].radiusIndex]);
            Debug.Log(gm.cameras[index].angle[gm.cameras[index].angleIndex]);
            Debug.Log(gm.cameras[index].energyPerSeond[gm.cameras[index].energyIndex]);
            Debug.Log(gm.cameras[index].clearness[gm.cameras[index].clearnessIndex]);
            if (fieldOfView != null)
            {
                fieldOfView.Setter(gm.cameras[index].radius[gm.cameras[index].radiusIndex], gm.cameras[index].angle[gm.cameras[index].angleIndex], gm.cameras[index].energyPerSeond[gm.cameras[index].energyIndex], gm.cameras[index].clearness[gm.cameras[index].clearnessIndex]);
            }
            else
            {
                FieldOfView360 fieldOfView360 = instantiatedItem.GetComponent<FieldOfView360>();
                fieldOfView360.Setter(gm.cameras[index].radius[gm.cameras[index].radiusIndex], gm.cameras[index].energyPerSeond[gm.cameras[index].energyIndex], gm.cameras[index].clearness[gm.cameras[index].clearnessIndex]);
            }
            
        }
        else if (gm.cameras[index].type == Type.Wire)
        {
            WireTraps wireTraps = instantiatedItem.GetComponent<WireTraps>();
            wireTraps.range = gm.cameras[index].ranges[gm.cameras[index].rangeIndex];
            wireTraps.energy = gm.cameras[index].energyPerSeond[gm.cameras[index].energyIndex];
        }
        else if (gm.cameras[index].type == Type.Lock)
        {
            Lock _lock = instantiatedItem.GetComponent<Lock>();
            _lock.delay = gm.cameras[index].delays[gm.cameras[index].DelayIndex];
            _lock.energy = gm.cameras[index].energyPerSeond[gm.cameras[index].energyIndex];
        }
    }
}

