using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class UI_Manager : MonoBehaviour
{
    public static UI_Manager instance { get; private set; }
    public Ease ease = Ease.InBounce;

    public GameObject victoryScreen;
    public GameObject lostScreen;

    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(this);
        }
        else
        {
            instance = this;
        }
    }

    public void CreateShop()
    {
        Shop shop = new Shop();
        foreach(ItemSlot itemSlot in shop.itemSlots)
        {
            
        }
    }
    public string FormatTime(float time)
    {
       // int Hours = (int)time / 60000;
        int minutes = Mathf.FloorToInt(time / 60);
        int seconds = Mathf.FloorToInt(time % 60);
        return string.Format("{0:00}:{1:00}", minutes, seconds);
    }
    bool big = false;
    public void BumpAnimation(RectTransform transform)
    {
        if(big)
        {
            big = false;
            transform.DOScale(1.05f, 0.2f).SetEase(ease);

        }
        else
        {
            big = true;
            transform.DOScale(0.95f, 0.2f).SetEase(ease);
        }
           
    }

    public void Victory()
    {
        victoryScreen.SetActive(true);
       // Time.timeScale = 0;
    }
    public void Lost()
    {
        lostScreen.SetActive(true);
       // Time.timeScale = 0;
    }
    public void LoadNextLevel()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
    public void Restart()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void GoHome()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(0);
    }
}
