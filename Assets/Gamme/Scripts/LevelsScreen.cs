using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class LevelsScreen : MonoBehaviour
{
    public GameObject[] levelsScreen;
    public LevelBtn[] levelBtns;
    private int i = 0;
    public Button leftButton;
    public Button rightButton;
    public Ease ease = Ease.InElastic;

    private void Start()
    {
    
        int levelAt = ES3.Load("LevelAt", 1);
        Debug.Log("Level: " + levelAt);

        for (int i = 0; i < levelBtns.Length; i++)
        {
            levelBtns[i].levelText.text = (i + 1).ToString();
            levelBtns[i].SetListener(i+1);
            levelBtns[i].index = i;
            if (i + 1 > levelAt)
                levelBtns[i].SetLevel(true);
        }

        foreach (GameObject levelScreen in levelsScreen)
            levelScreen.SetActive(false);

        levelsScreen[i].SetActive(true);
    }

    public void ChangeLevel(int index)
    {
        levelsScreen[i].GetComponent<RectTransform>().DOAnchorPosX(-3000, 0.15f).SetEase(ease);
        this.Wait(0.05f, () => {
            foreach (GameObject levelScreen in levelsScreen)
                levelScreen.SetActive(false);
            i += index;
            levelsScreen[i].SetActive(true);
        });
        
       
    }
    private void LateUpdate()
    {
        if (i <= 0)
            leftButton.interactable = false;
        else
            leftButton.interactable = true;
        if (i >= levelsScreen.Length - 1)
            rightButton.interactable = false;
        else
            rightButton.interactable = true;
    }



}
