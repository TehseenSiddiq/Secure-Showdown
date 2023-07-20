using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GarageManager : MonoBehaviour
{
    //  public static GarageManager instance { get; private set; }

    private GameManager gm;
    
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

   // private int currentIndex;

    private HashSet<GameObject> items = new HashSet<GameObject>();

    private static GarageManager instance;
    public static GarageManager Instance => instance;

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            instance = this;
          //  DontDestroyOnLoad(this.gameObject);
        }
        gm = FindObjectOfType<GameManager>();
    }

    private void Start()
    {
       
      
    
    }

    private void OnEnable()
    {
        SetStats(0);
        SetGarage();
    }
   

    public void SetGarage()
    {
        foreach (GameObject item in items)
        {
            Destroy(item);
        }
        items.Clear();

        foreach (CameraProperties camera in gm.cameras)
        {
            GameObject obj = Instantiate(prefab, content);
            CameraButton cameraButton = obj.GetComponent<CameraButton>();

            cameraButton.SetButton(GameManager.instance.cameraImages[camera.index], camera.name, camera.index);
            cameraButton.AddListener();

           // currentIndex = cameraButton.index;
            items.Add(obj);
        }
    }

    public void SetStats(int index)
    {
        CameraProperties camera = gm.cameras[index];
        cameraNameText.text = camera.name;
        CameraImage.sprite = gm.cameraImages[index];

        // Remove listeners before adding new ones
        delayBtn.onClick.RemoveAllListeners();
        energyBtn.onClick.RemoveAllListeners();
        radiusBtn.onClick.RemoveAllListeners();
        clearnessBtn.onClick.RemoveAllListeners();
        rangeBtn.onClick.RemoveAllListeners();

        energySlider.fillAmount = camera.energyPerSeond[camera.energyIndex] / camera.energyPerSeond[camera.energyPerSeond.Length - 1];
        energyText.text = $"{camera.energyPerSeond[camera.energyIndex]}/{camera.energyPerSeond[camera.energyPerSeond.Length - 1]}";
        energyBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = camera.energyPrice[camera.energyIndex].ToString();
        energyBtn.onClick.AddListener(() => UpgradeEnergy(index));

        if (camera.type == Type.Camera)
        {
            radiusObj.SetActive(true);
            clearnessObj.SetActive(true);
            rangeObj.SetActive(false);
            delayObj.SetActive(false);

            radiusSlider.fillAmount = camera.radius[camera.radiusIndex] / camera.radius[camera.radius.Length - 1];
            radiusText.text = $"{camera.radius[camera.radiusIndex]}/{camera.radius[camera.radius.Length - 1]}";
            radiusBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = camera.radiusPrice[camera.radiusIndex].ToString();
            radiusBtn.onClick.AddListener(() => UpgradeRadius(index));

            clearnessSlider.fillAmount = camera.clearness[camera.clearnessIndex] / camera.clearness[camera.clearness.Length - 1];
            clearnessText.text = $"{camera.clearness[camera.clearnessIndex]}/{camera.clearness[camera.clearness.Length - 1]}";
            clearnessBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = camera.clearnessPrice[camera.clearnessIndex].ToString();
            clearnessBtn.onClick.AddListener(() => UpgradeClearness(index));
        }
        else if (camera.type == Type.Wire)
        {
            radiusObj.SetActive(false);
            clearnessObj.SetActive(false);
            rangeObj.SetActive(true);
            delayObj.SetActive(false);

            rangeSlider.fillAmount = camera.ranges[camera.rangeIndex] / camera.ranges[camera.ranges.Length - 1];
            rangeText.text = $"{camera.ranges[camera.rangeIndex]}/{camera.ranges[camera.ranges.Length - 1]}";
            rangeBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = camera.rangePrice[camera.rangeIndex].ToString();
            rangeBtn.onClick.AddListener(() => UpgradeRange(index));
        }
        else if (camera.type == Type.Lock)
        {
            radiusObj.SetActive(false);
            clearnessObj.SetActive(false);
            rangeObj.SetActive(false);
            delayObj.SetActive(true);

            delaySlider.fillAmount = camera.delays[camera.DelayIndex] / camera.delays[camera.delays.Length - 1];
            delayText.text = $"{camera.delays[camera.DelayIndex]}/{camera.delays[camera.delays.Length - 1]}";
            delayBtn.transform.GetChild(0).GetComponent<TMP_Text>().text = camera.delaysPrice[camera.DelayIndex].ToString();
            delayBtn.onClick.AddListener(() => UpgradeDelay(index));
        }
        block.SetActive(!camera.unlocked);
    }
 

    private bool upgrading = false;

    public void UpgradeRange(int index)
    {
        Debug.Log("Range Index " + index);
        if (!upgrading)
        {
            upgrading = true;
            if (Game.instance.GetCash() >= gm.cameras[index].rangePrice[gm.cameras[index].rangeIndex])
            {
                if (gm.cameras[index].rangeIndex < gm.cameras[index].ranges.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - gm.cameras[index].rangePrice[gm.cameras[index].rangeIndex]);
                    
                    gm.cameras[index].rangeIndex++;
                    SetStats(index);
                    ES3.Save("Cameras", gm.cameras);

                }
            }
            else
            {
                MainMenuManager.instance.NoCashAnimation();
            }
            this.Wait(0.2f, () => upgrading = false);
        }
    }

    public void UpgradeRadius(int index)
    {
        if (!upgrading)
        {
            upgrading = true;
            if (Game.instance.GetCash() >= gm.cameras[index].radiusPrice[gm.cameras[index].radiusIndex])
            {
                if (gm.cameras[index].radiusIndex < gm.cameras[index].radius.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - gm.cameras[index].radiusPrice[gm.cameras[index].radiusIndex]);
                    gm.cameras[index].radiusIndex++;
                    SetStats(index);
                }
            }
            else
            {
                MainMenuManager.instance.NoCashAnimation();
            }
            this.Wait(0.2f, () => upgrading = false);
        }
    }

    public void UpgradeAngle(int index)
    {
        if (!upgrading)
        {
            upgrading = true;
            if (Game.instance.GetCash() >= gm.cameras[index].anglePrice[gm.cameras[index].angleIndex])
            {
                if (gm.cameras[index].angleIndex < gm.cameras[index].angle.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - gm.cameras[index].anglePrice[gm.cameras[index].angleIndex]);
                    gm.cameras[index].angleIndex++;
                    SetStats(index);
                    ES3.Save("Cameras", gm.cameras);
                }
            }
            else
            {
                MainMenuManager.instance.NoCashAnimation();
            }
            this.Wait(0.2f, () => upgrading = false);
        }
    }

    public void UpgradeEnergy(int index)
    {
        if (!upgrading)
        {
            upgrading = true;
            if (Game.instance.GetCash() >= gm.cameras[index].energyPrice[gm.cameras[index].energyIndex])
            {
                if (gm.cameras[index].energyIndex < gm.cameras[index].energyPerSeond.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - gm.cameras[index].energyPrice[gm.cameras[index].energyIndex]);
                    gm.cameras[index].energyIndex++;
                    SetStats(index);
                    ES3.Save("Cameras", gm.cameras);

                }
            }
            else
            {
                MainMenuManager.instance.NoCashAnimation();
            }
            this.Wait(0.2f, () => upgrading = false);
        }
    }

    public void UpgradeDelay(int index)
    {
        if (!upgrading)
        {
            upgrading = true;
            if (Game.instance.GetCash() >= gm.cameras[index].delaysPrice[gm.cameras[index].DelayIndex])
            {
                if (gm.cameras[index].DelayIndex < gm.cameras[index].delays.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - gm.cameras[index].delaysPrice[gm.cameras[index].DelayIndex]);
                    gm.cameras[index].DelayIndex++;
                    SetStats(index);
                    ES3.Save("Cameras", gm.cameras);
                }
            }
            else
            {
                MainMenuManager.instance.NoCashAnimation();
            }
            this.Wait(0.2f, () => upgrading = false);
        }
    }

    public void UpgradeClearness(int index)
    {
        if (!upgrading)
        {
            upgrading = true;
            if (Game.instance.GetCash() >= gm.cameras[index].clearnessPrice[gm.cameras[index].clearnessIndex])
            {
                if (gm.cameras[index].clearnessIndex < gm.cameras[index].clearness.Length)
                {
                    Game.instance.SetCash(Game.instance.GetCash() - gm.cameras[index].clearnessPrice[gm.cameras[index].clearnessIndex]);
                    gm.cameras[index].clearnessIndex++;
                    SetStats(index);
                    ES3.Save("Cameras", gm.cameras);
                }
            }
            else
            {
                MainMenuManager.instance.NoCashAnimation();
            }
            this.Wait(0.2f, () => upgrading = false);
        }
    }


}