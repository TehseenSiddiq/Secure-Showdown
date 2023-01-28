using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class LevelBtn : MonoBehaviour
{
    public TMP_Text levelText;
    public GameObject block;
    public GameObject[] stars;
    public GameObject starBox;
    private Button btn;
    public int index;

    private void OnEnable()
    {
        InvokeRepeating("StarNO",0.3f,0.3f);
        InvokeRepeating("SetStars",0.3f,0.3f);

        btn =GetComponent<Button>();
    }
    void StarNO() => starBox.SetActive(!block.activeSelf);
    public void SetLevel(bool state = false)
    {
        block.SetActive(state);
        btn.interactable = !state;
    }
    public void SetListener(int index)
    {
        btn.onClick.AddListener(() => MainMenuManager.LoadScene(index));
    }
    void Check()
    {
       
    }
    public void SetStars()
    {
        foreach (GameObject star in stars)
            star.SetActive(false);
        if (Game.instance.GetLevelStar(index) <= 30)
            return;
        else if (Game.instance.GetLevelStar(index) > 30 && Game.instance.GetLevelStar(index) <= 50)
            stars[0].SetActive(true);
        else if (Game.instance.GetLevelStar(index) > 50 && Game.instance.GetLevelStar(index) < 70)
        {
            stars[1].SetActive(true);
            stars[0].SetActive(true);
        }    
        else if (Game.instance.GetLevelStar(index) >= 70)
        {

            stars[1].SetActive(true);
            stars[0].SetActive(true);
            stars[2].SetActive(true);
        }

    }
}
