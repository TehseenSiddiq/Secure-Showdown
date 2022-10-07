using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UI_Manager : MonoBehaviour
{
    public static UI_Manager instance;

  //  public float energy;
    public Slider energySlider;
    public Sprite Image;
    public GameObject prefab;
    public float totalLoot;

    //Values
    public float currentEnergy;
    public int maxEnergy;


    public TextMeshProUGUI timerText;
    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        maxEnergy = Game.instance.GetLevel() * 30;
        currentEnergy = maxEnergy;
        energySlider.maxValue = maxEnergy;

    }
    private void LateUpdate()
    {
     
       timerText.text = FormatTime(FindObjectOfType<initiator>().timer);
        energySlider.value = currentEnergy;
    }
    public void CreateShop()
    {
        Shop shop = new Shop();
        foreach(ItemSlot itemSlot in shop.itemSlots)
        {
            
        }
    }
   
    public string FormatTime(float time)
    {
       // int Hours = (int)time / 60000;
        int minutes = Mathf.FloorToInt(time / 60);
        int seconds = Mathf.FloorToInt(time % 60);
        return string.Format("{0:00}:{1:00}", minutes, seconds);
    }
}
