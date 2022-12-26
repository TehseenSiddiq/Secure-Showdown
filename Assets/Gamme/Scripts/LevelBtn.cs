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
    public Button btn;

    private void OnEnable()
    {
        InvokeRepeating("StarNO",0.3f,0.3f);
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

    public void SetStars(int index)
    {
        foreach (GameObject star in stars)
            star.SetActive(false);
        for(int i = 0;i < index; i++)
        {
            stars[i].SetActive(true);
        }
    }
}
