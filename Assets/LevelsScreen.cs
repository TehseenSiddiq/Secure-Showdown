using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelsScreen : MonoBehaviour
{
    public GameObject[] levelsScreen;
    public LevelBtn[] levelBtns;
    private int i = 0;
    public Button leftButton;
    public Button rightButton;

    private void Start()
    {
        int levelAt = ES3.Load("LevelAt", 2);

        for (int i = 0; i < levelBtns.Length; i++)
        {
            levelBtns[i].levelText.text = (i + 1).ToString();
            levelBtns[i].SetListener(i+1);
            if (i + 2 > levelAt)
                levelBtns[i].SetLevel(true);
        }

        foreach (GameObject levelScreen in levelsScreen)
            levelScreen.SetActive(false);

        levelsScreen[i].SetActive(true);
    }

    public void ChangeLevel(int index)
    {
        foreach (GameObject levelScreen in levelsScreen)
            levelScreen.SetActive(false);

        i += index;
        levelsScreen[i].SetActive(true);
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
