using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GarageManager : MonoBehaviour
{
    public static GarageManager instance { get; private set; }

    public CameraProperties[] cameras;
    public List<GameObject> items;
    public GameObject prefab;
    public Transform content;
    #region GUI
    public GameObject energyObj;
    public Image energySlider;
    public TMP_Text energyText;
    public Button energyBtn;
    public GameObject radiusObj;
    public Image radiusSlider;
    public TMP_Text radiusText;
    public Button radiusBtn;
    public GameObject rangeObj;
    public Image rangeSlider;
    public TMP_Text rangeText;
    public Button rangeBtn;
    public GameObject delayObj;
    public Image delaySlider;
    public TMP_Text delayText;
    public Button delayBtn;
    public GameObject clearnessObj;
    public Image clearnessSlider;
    public TMP_Text clearnessText;
    public Button clearnessBtn;
    public Image CameraImage;
    public TMP_Text cameraNameText;
    public GameObject block;
    #endregion

    [HideInInspector]
    public int currentIndex;

    private void Awake()
    {
        //DontDestroyOnLoad(gameObject);
        if (instance != null && instance != this)
        {
            Destroy(this);
        }
        else
        {
            instance = this;
        }
    }
    private void Start()
    {
        UpdateCameras();
        InvokeRepeating("UpdateCameras", 0, 2);
        SetGarage();
        SetStats(0);

    }

    private void UpdateCameras()
    {
       cameras = FindObjectOfType<GameManager>().cameras;
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
            currentIndex = obj.GetComponent<CameraButton>().index;
            items.Add(obj);
        }
    }
    public void SetStats(int index)
    {
        cameraNameText.text = cameras[index].name;
        CameraImage.sprite = cameras[index].image;

        energySlider.fillAmount = cameras[index].energyPerSeond[cameras[index].energyIndex]/ cameras[index].energyPerSeond[cameras[index].energyPerSeond.Length-1];
        energyText.text = cameras[index].energyPerSeond[cameras[index].energyIndex] +"/"+ cameras[index].energyPerSeond[(cameras[index].energyPerSeond.Length - 1)];
        energyBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = cameras[index].energyPrice[cameras[index].energyIndex].ToString();
        energyBtn.onClick.AddListener(()=>UpgradeEnergy(index));

        if (cameras[index].type == Type.Camera)
        {
            radiusObj.SetActive(true);
            clearnessObj.SetActive(true);
            rangeObj.SetActive(false);
            delayObj.SetActive(false);
            //radiusSlider.maxValue = cameras[index].radiusMax;
            radiusSlider.fillAmount = cameras[index].radius[cameras[index].radiusIndex] / cameras[index].radius[cameras[index].radius.Length - 1];
            radiusText.text = (cameras[index].radius[cameras[index].radiusIndex] + "/" + cameras[index].radius[cameras[index].radius.Length - 1]);
            radiusBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = cameras[index].radiusPrice[cameras[index].radiusIndex].ToString();
            radiusBtn.onClick.AddListener(() => UpgradeRadius(index));

            // clearnessSlider.maxValue = cameras[index].clearnessMax;
            clearnessSlider.fillAmount = cameras[index].clearness[cameras[index].clearnessIndex] / cameras[index].clearness[cameras[index].clearness.Length - 1];
            clearnessText.text = cameras[index].clearness[cameras[index].clearnessIndex] + "/" + cameras[index].clearness[cameras[index].clearness.Length - 1];
            clearnessBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = cameras[index].clearnessPrice[cameras[index].clearnessIndex].ToString();
            clearnessBtn.onClick.AddListener(() => UpgradeClearness(index));
        }
       
        else if(cameras[index].type == Type.Wire)
        {
            radiusObj.SetActive(false);
            clearnessObj.SetActive(false);
            rangeObj.SetActive(true);
            delayObj.SetActive(false);
            rangeSlider.fillAmount = cameras[index].ranges[cameras[index].rangeIndex] / cameras[index].ranges[cameras[index].ranges.Length - 1];
            rangeText.text = cameras[index].ranges[cameras[index].rangeIndex] + "/" + cameras[index].ranges[cameras[index].ranges.Length - 1];
            rangeBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = cameras[index].rangePrice[cameras[index].rangeIndex].ToString();
            radiusBtn.onClick.AddListener(() => UpgradeRange(index));
        }
        else if (cameras[index].type == Type.Lock)
        {
            radiusObj.SetActive(false);
            clearnessObj.SetActive(false);
            rangeObj.SetActive(false);
            delayObj.SetActive(true);
            delaySlider.fillAmount = cameras[index].delays[cameras[index].DelayIndex] / cameras[index].delays[cameras[index].delays.Length - 1];
            delayText.text = cameras[index].delays[cameras[index].DelayIndex] + "/" + cameras[index].delays[cameras[index].delays.Length - 1];
            delayBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = cameras[index].delaysPrice[cameras[index].DelayIndex].ToString();
            delayBtn.onClick.AddListener(() => UpgradeDelay(index));
        }


        if (!cameras[index].unlocked)
            block.SetActive(true);
        else
            block.SetActive(false);
    }
    bool temp = false;
    public void UpgradeRange(int index)
    {
        if (!temp)
        {
            temp = true;
            if (Game.instance.GetCash() >= cameras[index].rangePrice[cameras[index].rangeIndex])
            {
                if (cameras[index].rangeIndex < cameras[index].ranges.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - cameras[index].rangePrice[cameras[index].rangeIndex]);
                    cameras[index].rangeIndex++;
                    SetStats(index);
                }
            }
            else
                MainMenuManager.instance.NoCashAnimation();

            this.Wait(0.2f, () => temp = false);
        }
    }
    public void UpgradeRadius(int index)
    {
        if (!temp)
        {
            temp = true;
            if (Game.instance.GetCash() >= cameras[index].radiusPrice[cameras[index].radiusIndex])
            {
                if (cameras[index].radiusIndex < cameras[index].radius.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - cameras[index].radiusPrice[cameras[index].radiusIndex]);
                    cameras[index].radiusIndex++;
                    SetStats(index);
                }
            }
            else
                MainMenuManager.instance.NoCashAnimation();
            this.Wait(0.2f, () => temp = false);
        }
    }
    public void UpgradeAngle(int index)
    {
        if (!temp)
        {
            temp = true;
            if (Game.instance.GetCash() >= cameras[index].anglePrice[cameras[index].angleIndex])
        {
            if (cameras[index].angleIndex < cameras[index].angle.Length)
            {
                Game.instance.SetCash(Game.instance.GetCash() - cameras[index].anglePrice[cameras[index].angleIndex]);
                cameras[index].angleIndex++;
                SetStats(index);
            }
            }
            else
                MainMenuManager.instance.NoCashAnimation();
            this.Wait(0.2f, () => temp = false);
        }
    }
  
    public void UpgradeEnergy(int index)
    {
        if (!temp)
        {
            temp = true;
            if (Game.instance.GetCash() >= cameras[index].energyPrice[cameras[index].energyIndex])
            {
                if (cameras[index].energyIndex < cameras[index].energyPerSeond.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - cameras[index].energyPrice[cameras[index].energyIndex]);
                    cameras[index].energyIndex++;
                    SetStats(index);
                }
            }
            else
                MainMenuManager.instance.NoCashAnimation();
            this.Wait(.2f, () => temp = false);
        }
      
    }
    public void UpgradeDelay(int index)
    {
        if (!temp)
        {
            temp = true;
            if (Game.instance.GetCash() >= cameras[index].delaysPrice[cameras[index].DelayIndex])
            {
                if (cameras[index].DelayIndex < cameras[index].delays.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - cameras[index].delaysPrice[cameras[index].DelayIndex]);
                    cameras[index].DelayIndex++;
                    SetStats(index);
                }
            }
            else
                MainMenuManager.instance.NoCashAnimation();
            this.Wait(0.2f, () => temp = false);
        }
    }
    public void UpgradeClearness(int index)
    {
        if (!temp)
        {
            temp = true;
            if (Game.instance.GetCash() >= cameras[index].clearnessPrice[cameras[index].clearnessIndex])
            {
                if (cameras[index].clearnessIndex < cameras[index].clearness.Length - 1)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - cameras[index].clearnessPrice[cameras[index].clearnessIndex]);
                    cameras[index].clearnessIndex++;
                    SetStats(index);
                    Debug.Log("Camera " + cameras[index].name + " Angle " + cameras[index].clearness[cameras[index].clearnessIndex - 1] + " Upgraded to" + cameras[index].clearness[cameras[index].clearnessIndex]);
                }
            }
            else
                MainMenuManager.instance.NoCashAnimation();
            this.Wait(0.2f, () => temp = false);
        }
    }
}
