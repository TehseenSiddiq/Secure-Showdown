using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VictoryScreen : MonoBehaviour
{
    private LevelManager levelManager;
    public TMP_Text lootSafedText,thiefsText;
    public GameObject[] stars;
    private void OnEnable()
    {
        levelManager = LevelManager.instance;
        int remainingLoot = Mathf.RoundToInt(levelManager.remainingLoot);
        int totalLoot = Mathf.RoundToInt(levelManager.totalLoot);
        int thiefCaught = levelManager.thiefCaught;
        int totalThiefs = Mathf.RoundToInt(FindObjectOfType<BotSpawner>().totalThiefs);

        lootSafedText.text = remainingLoot + "/" + totalLoot.ToString();
        thiefsText.text = thiefCaught.ToString();

        int lootPercentage = Mathf.RoundToInt((remainingLoot / (float)totalLoot) * 100);
        int thiefPercentage = Mathf.RoundToInt((thiefCaught / (float)totalThiefs) * 100);
        int starValue = Mathf.RoundToInt((lootPercentage * 0.5f) + (thiefPercentage * 0.5f));

        Game.instance.SetLevelStar(starValue, SceneManager.GetActiveScene().buildIndex - 1);

        for (int i = 0; i < stars.Length; i++)
        {
            stars[i].SetActive(false);
        }

        if (starValue < 30)
        {
            return;
        }
        else if (starValue < 50)
        {
            stars[0].SetActive(true);
        }
        else if (starValue < 70)
        {
            stars[0].SetActive(true);
            stars[1].SetActive(true);
        }
        else
        {
            for (int i = 0; i < stars.Length; i++)
            {
                stars[i].SetActive(true);
            }
        }
    }
}
