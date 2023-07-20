using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class LostScreen : MonoBehaviour
{
    private LevelManager levelManager;
    public TMP_Text lootSafedText, thiefsText;
    private void OnEnable()
    {
        levelManager = LevelManager.instance;
        lootSafedText.text = levelManager.remainingLoot + "/" + levelManager.totalLoot.ToString();
        thiefsText.text = levelManager.thiefCaught.ToString();
    }
}
