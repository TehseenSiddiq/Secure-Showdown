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

    // GUI
    [Header("GUI")]
    public Slider energySlider;
    public Sprite Image;
    public GameObject prefab;
    public Slider lootSlider;
    public float totalLoot;
    public float remainingLoot;
    public TextMeshProUGUI timerText;

    // Values
    [Header("Values")]
    public float currentEnergy;
    public int maxEnergy;
    public int thiefCaught = 0;

    [HideInInspector]
    public bool allwavesCompleted = false;
    private float delay = 0.3f;
    private Waypoints[] waypoints;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        idleTime = GameManager.instance.idleTime;
        waypoints = FindObjectsOfType<Waypoints>();
        CalculateTotalLoot();
        lootSlider.maxValue = totalLoot;
        InvokeRepeating("UpdateLoot", 0.3f, 0.3f);
    }
    private bool isCodeExecuted = false;
    private void Update()
    {
        if (idleTime > 0)
        {
            start = false;
            idleTime -= Time.deltaTime;
            UpdateTimerText(idleTime);
            LessTimeEffect(idleTime);
        }
        else
        {
            start = true;
            matchTime -= Time.deltaTime;
            UpdateTimerText(matchTime);
            LessTimeEffect(matchTime);
        }

        if (!isCodeExecuted && allwavesCompleted && ((totalLoot * 0.8f) > remainingLoot || matchTime <= 0))
        {
            Debug.Log("Complete");
            // Complete;
            UI_Manager.instance.Victory();
            ES3.Save("LevelAt", SceneManager.GetActiveScene().buildIndex + 1);

            isCodeExecuted = true; // Set the flag to true to prevent further execution.
        }
        else if (!isCodeExecuted && allwavesCompleted && ((totalLoot * 0.8f) < remainingLoot) && matchTime >= 0)
        {
            Debug.Log("Lost");
            UI_Manager.instance.Lost();

            isCodeExecuted = true; // Set the flag to true to prevent further execution.
        }
    }

    private void CalculateTotalLoot()
    {
        for (int i = 0; i < waypoints.Length; i++)
        {
            for (int j = 0; j < waypoints[i].waypoints.Length; j++)
            {
                totalLoot += waypoints[i].waypoints[j].GetComponent<Waypoint>().lootAmount;
            }
        }
    }

    private void UpdateLoot()
    {
        float temp = 0;
        for (int i = 0; i < waypoints.Length; i++)
        {
            for (int j = 0; j < waypoints[i].waypoints.Length; j++)
            {
                temp += waypoints[i].waypoints[j].GetComponent<Waypoint>().lootAmount;
            }
        }
        remainingLoot = totalLoot - temp;
        lootSlider.value = remainingLoot;
    }

    private void LessTimeEffect(float value)
    {
        if (value < 10)
        {
            timerText.color = Color.red;
            if (delay <= 0)
            {
                UI_Manager.instance.BumpAnimation(timerText.rectTransform);
                delay = 0.3f;
            }
            else
            {
                delay -= Time.deltaTime;
            }
        }
        else
        {
            timerText.color = Color.white;
        }
    }

    private void UpdateTimerText(float time)
    {
        timerText.text = UI_Manager.instance.FormatTime(time);
    }
}
