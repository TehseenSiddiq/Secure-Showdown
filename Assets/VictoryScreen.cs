using TMPro;
using UnityEngine;

public class VictoryScreen : MonoBehaviour
{
    private LevelManager levelManager;
    public TMP_Text lootSafedText,thiefsText;
    public GameObject[] stars;
    private void OnEnable()
    {
        levelManager = LevelManager.instance;
        lootSafedText.text = levelManager.remainingLoot +"/"+ levelManager.totalLoot.ToString();
        thiefsText.text = levelManager.thiefCaught.ToString();
        int temp = Mathf.RoundToInt(((levelManager.remainingLoot / levelManager.totalLoot) * 50) + ((levelManager.thiefCaught / FindObjectOfType<BotSpawner>().totalThiefs) * 50));

        foreach (var star in stars)
        {
            star.SetActive(false);
        }

        if(temp < 30)
                stars[0].SetActive(true);
        else if(temp > 30 && temp < 70)
        {
            stars[1].SetActive(true);
            stars[0].SetActive(true);
        }
        else
        {
            stars[0].SetActive(true);
            stars[1].SetActive(true);
            stars[2].SetActive(true);
        }
 
             

       
    }
}
