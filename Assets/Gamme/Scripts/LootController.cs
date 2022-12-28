using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LootController : MonoBehaviour
{
 
    public int maxLoot;
    public int looted;

    public float maxStress;
    private float stress;
    private float constant = 10;

    public Image stressSlider;
    public GameObject stressObj;
    public Image lootSlider;
    public GameObject lootBar;


 
    private void LateUpdate()
    {
        if (stress > 0)
        {
            stressObj.SetActive(true);
        }
        else
            stressObj.SetActive(false);
    }

    public void loot(Waypoint target)
    {
        if(looted < maxLoot && target.lootAmount > 0)
        {
            looted++;
            target.lootAmount--;
            // lootSlider.maxValue = maxLoot;
            float amount = (float)looted / (float)maxLoot;
            lootSlider.fillAmount = amount;
        }
    }

    public void StressManage(float multipler)
    {
        if(stress <= maxStress)
        {
            Debug.Log("Stress Increasing.");
            stress += (Time.deltaTime*constant* multipler);
            float amount = stress / maxStress;
            stressSlider.fillAmount = amount;
        }
        else
        {
            Debug.Log("Surrendered");
        }
    }
}
