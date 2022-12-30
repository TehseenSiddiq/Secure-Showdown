using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour
{
    public static LevelManager instance { get; private set; }

    public float idleTime = 30;
    public float matchTime = 90;
    public bool start = false;


    //  GUI
    [Header("GUI")]
    public Slider energySlider;
    public Sprite Image;
    public GameObject prefab;
    public Slider lootSlider;
    public float totalLoot;
    public float remainingLoot;
    public TextMeshProUGUI timerText;

    //Values
    [Header("Values")]
    public float currentEnergy;
    public int maxEnergy;

    public static bool allwavesCompleted = false;
    private void Awake()
    {
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
        idleTime = GameManager.instance.idleTime;
        Waypoints[] wp = FindObjectsOfType<Waypoints>();
        for (int i = 0; i < wp.Length; i++)
        {
            for(int j = 0; j < wp[i].waypoints.Length; j++)
            {
                totalLoot += wp[i].waypoints[j].GetComponent<Waypoint>().lootAmount;
            }
        }
        lootSlider.maxValue = totalLoot;
        InvokeRepeating("UpdateLoot", 0.3f, 0.3f);
    }
    float delay = 0.3f;
    private void LateUpdate()
    {
    
        if (idleTime > 0)
        {
            start = false;
            idleTime -= Time.deltaTime;
            timerText.text = UI_Manager.instance.FormatTime(idleTime);
            LessTimeEffect(idleTime);
        }
        else
            start = true;

        if (start)
        {
            matchTime -= Time.deltaTime;
            timerText.text = UI_Manager.instance.FormatTime(matchTime);
            LessTimeEffect(matchTime);
        }
  
        if(allwavesCompleted && ((totalLoot*0.9) > remainingLoot) ||  matchTime <= 0)
        {
            Debug.Log("Complete");
            // Complete;
            UI_Manager.instance.Victory();
            ES3.Save("LevelAt", SceneManager.GetActiveScene().buildIndex + 1);
        }
        else if(allwavesCompleted && ((totalLoot * 0.9) < remainingLoot) && matchTime >= 0)
        {
            Debug.Log("Lost");
            UI_Manager.instance.Lost();
        }
    }
    void UpdateLoot()
    {
        Waypoints[] wp = FindObjectsOfType<Waypoints>();
        float temp = 0;
        for (int i = 0; i < wp.Length; i++)
        {
            for (int j = 0; j < wp[i].waypoints.Length; j++)
            {
                temp += wp[i].waypoints[j].GetComponent<Waypoint>().lootAmount;
            }
        }
        remainingLoot = (totalLoot- temp);
        lootSlider.value = remainingLoot;
    } 

    void LessTimeEffect(float value)
    {
        if (value < 10)
        {
            timerText.color = Color.red;
            if (delay <= 0)
            {
                UI_Manager.instance.BumpAnimation(timerText.rectTransform);
                delay = 0.3f;
            }
            else delay -= Time.deltaTime;
        }
        else
            timerText.color = Color.white;
    }
}
