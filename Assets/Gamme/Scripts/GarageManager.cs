using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GarageManager : MonoBehaviour
{
    public CameraProperties[] cameras;
    public List<GameObject> items;
    public GameObject prefab;
    public Transform content;

    #region GUI
    public Image energySlider;
    public TMP_Text energyText;
    public Image radiusSlider;
    public TMP_Text radiusText;
    public Image rangeSlider;
    public TMP_Text rangeText;
    public Image clearnessSlider;
    public TMP_Text clearnessText;
    public Image CameraImage;
    public TMP_Text cameraNameText;
    public GameObject block;
    #endregion

    public int[] prices = {140,650,1200,4500,7000,10000,13000,15000};

    private void Start()
    {
        cameras = FindObjectOfType<StoreManager>().cameras;
        SetGarage();
        SetStats(0);
    }
    public void SetGarage()
    {
        foreach (Transform child in content.transform)
        {
            GameObject.Destroy(child.gameObject);
        }
        foreach (CameraProperties camera in cameras)
        {
            GameObject obj = Instantiate(prefab, content);

            obj.GetComponent<CameraButton>().SetButton(camera.image, camera.name, camera.index);
            obj.GetComponent<CameraButton>().AddListener();
            items.Add(obj);
        }
    }
    public void SetStats(int index)
    {
        cameraNameText.text = cameras[index].name;
        CameraImage.sprite = cameras[index].image;

        // energySlider.maxValue = cameras[index].energyPerSeondMax;
        energySlider.fillAmount = cameras[index].clearnessIndex / (cameras[index].clearness.Length - 1);
      //  Debug.Log(cameras[index].energyPerSeond + ", " + cameras[index].energyPerSeondMax + " Result " + cameras[index].energyPerSeond / cameras[index].energyPerSeondMax);
        energyText.text = cameras[index].energyIndex / (cameras[index].energyPerSeond.Length-1) + "%";

        //radiusSlider.maxValue = cameras[index].radiusMax;
        radiusSlider.fillAmount = cameras[index].clearnessIndex / (cameras[index].clearness.Length - 1);
        radiusText.text = (cameras[index].radiusIndex / (cameras[index].radius.Length-1))+"%";
        Debug.Log(cameras[index].radiusIndex + "   " + (cameras[index].radius.Length - 1));
        // rangeSlider.maxValue = cameras[index].rangeMax;
        rangeSlider.fillAmount = cameras[index].clearnessIndex / (cameras[index].clearness.Length - 1);
        rangeText.text = cameras[index].angleIndex / (cameras[index].angle.Length-1) + "%";

        // clearnessSlider.maxValue = cameras[index].clearnessMax;
        clearnessSlider.fillAmount = cameras[index].clearnessIndex / (cameras[index].clearness.Length - 1);
        clearnessText.text = cameras[index].clearnessIndex / (cameras[index].clearness.Length-1) + "%";
        if (!cameras[index].unlocked)
            block.SetActive(true);
        else
            block.SetActive(false);

    }
    public void UpgradeRange(int index)
    {
        if (Game.instance.GetCash() >= prices[0])
        {
            if(cameras[index].energyIndex < cameras[index].radius.Length)
            {
                Game.instance.SetCash(Game.instance.GetCash() - prices[cameras[index].radiusIndex]);
                cameras[index].radiusIndex++;
                Debug.Log("Camera " + cameras[index].name + " range Upgraded to"+ cameras[index].radius[cameras[index].radiusIndex]);
            }
        }
    }
    public void UpgradeAngle(int index)
    {
        if (Game.instance.GetCash() >= prices[cameras[index].angleIndex])
        {
            if (cameras[index].angleIndex < cameras[index].angle.Length)
            {
                Game.instance.SetCash(Game.instance.GetCash() - prices[cameras[index].angleIndex]);
                cameras[index].angleIndex++;
               // Debug.Log("Camera " + cameras[index].name + " Angle "+ cameras[index].angle--+" Upgraded to" + cameras[index].angle);
            }
        }
    }
    public void UpgradeClearness(int index)
    {
        if (Game.instance.GetCash() >= prices[cameras[index].angleIndex])
        {
            if (cameras[index].clearnessIndex < cameras[index].clearness.Length)
            {
                Game.instance.SetCash(Game.instance.GetCash() - prices[cameras[index].angleIndex]);
                cameras[index].clearnessIndex++;
                Debug.Log("Camera " + cameras[index].name + " Angle " + cameras[index].clearness[cameras[index].clearnessIndex-1] + " Upgraded to" + cameras[index].clearness[cameras[index].clearnessIndex]);
            }
        }
    }
}
