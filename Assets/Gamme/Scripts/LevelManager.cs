using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
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
    public float totalLoot;
    public TextMeshProUGUI timerText;

    //Values
    [Header("Values")]
    public float currentEnergy;
    public int maxEnergy;


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
