using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StoreManager : MonoBehaviour
{
    public CameraProperties[] cameras;
    public GameObject prefab;
    public Transform content;

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

    private void Start()
    {
        SetShop();
        SetStats(0);
    }
    public void SetShop()
    {
        foreach(CameraProperties camera in cameras)
        {
            GameObject obj = Instantiate(prefab, content);
            obj.GetComponent<CameraButton>().SetButton(camera.image, camera.name,camera.index);
            obj.GetComponent<CameraButton>().AddListener();
            
        }
    }
    public void SetStats(int index)
    {
        cameraNameText.text = cameras[index].name;
        CameraImage.sprite = cameras[index].image;

       // energySlider.maxValue = cameras[index].energyPerSeondMax;
        energySlider.fillAmount = cameras[index].energyPerSeond/ cameras[index].energyPerSeondMax;
        Debug.Log(cameras[index].energyPerSeond+", "+ cameras[index].energyPerSeondMax+ " Result "+ cameras[index].energyPerSeond / cameras[index].energyPerSeondMax);
        energyText.text = cameras[index].energyPerSeond + "/" + cameras[index].energyPerSeondMax;

        //radiusSlider.maxValue = cameras[index].radiusMax;
        radiusSlider.fillAmount = cameras[index].radius/ cameras[index].radiusMax;
        radiusText.text = cameras[index].radius + "/" + cameras[index].radiusMax;

       // rangeSlider.maxValue = cameras[index].rangeMax;
        rangeSlider.fillAmount = cameras[index].range/ cameras[index].rangeMax;
        rangeText.text = cameras[index].range + "/" + cameras[index].rangeMax;

       // clearnessSlider.maxValue = cameras[index].clearnessMax;
        clearnessSlider.fillAmount = cameras[index].clearness/ cameras[index].clearnessMax;
        clearnessText.text = cameras[index].clearness + "/" + cameras[index].clearnessMax;

    }
}
