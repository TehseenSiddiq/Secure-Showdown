using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LootController : MonoBehaviour
{
    public int maxLoot;
    [HideInInspector]
    public int looted;

    public float maxStress;
    private float stress;
    private float constant = 10;

    public Image stressSlider;
    public GameObject stressObj;
    public Image lootSlider;
    public GameObject lootBar;
    public Animator anim;
    public List<Waypoint> lootObject;
    public List<int> waypointsAmount;
    private bool isSurrendered = false;

    private void Awake()
    {
        
    }

    private void LateUpdate()
    {
        if (stress > 0)
        {
            stressObj.SetActive(true);
        }
        else
        {
            stressObj.SetActive(false);
        }
    }

    public void Loot(Waypoint target)
    {
        if (looted < maxLoot && target.lootAmount > 0)
        {
            // Check if the target waypoint is already in the lootObject list
            if (lootObject.Contains(target))
            {
                // Update the loot amount from the existing waypoint
                int index = lootObject.IndexOf(target);
              
                waypointsAmount[index]++;
            }
            else
            {
                // Add the target waypoint to the lootObject list
                lootObject.Add(target);
                int index = lootObject.IndexOf(target);
                waypointsAmount.Add(0);
                waypointsAmount[index]++;
            }

            target.lootAmount--;
            looted++;

            float amount = (float)looted / (float)maxLoot;
            lootSlider.fillAmount = amount;
        }
    }

    public void StressManage(float multiplier)
    {
        if (stress <= maxStress)
        {
            stress += (Time.deltaTime * constant * multiplier);
            float amount = stress / maxStress;
            stressSlider.fillAmount = amount;
        }
        else if (!isSurrendered) // Check the flag variable
        {
            isSurrendered = true; // Set the flag to true to indicate surrendering

            GetComponent<CharacterMovement>().canWalk = false;
            LevelManager levelManager = FindObjectOfType<LevelManager>();
            foreach(Waypoint lootedObject in lootObject)
            {
                int index = lootObject.IndexOf(lootedObject);
                lootedObject.lootAmount += waypointsAmount[index];
                levelManager.remainingLoot += lootedObject.lootAmount;
            }

            anim.SetBool("Surrender", true);
        }
    }
}
