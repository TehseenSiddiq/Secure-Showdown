using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LootController : MonoBehaviour
{
 
    public int maxLoot;
    public int looted;

    public Image lootSlider;
    public GameObject lootBar;

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
}
