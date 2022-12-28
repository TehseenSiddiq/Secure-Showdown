using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game : MonoBehaviour
{
    public static Game instance { get; private set; }

    private int cash = 10000;
    private int level = 1;

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if (instance != null && instance != this)
        {
            Destroy(this);
        }
        else
        {
            instance = this;
        }
    }
    private void Start()
    {
        LoadGame();
    }
    #region Setter & Getters
    public  void SetCash(int cash)
    {
        this.cash = cash;
    }
    public void SetLevel(int level)
    {
        this.level = level;
    }
    public int GetCash()
    {
        return this.cash;
    }
    public int GetLevel()
    {
        return this.level;
    }
    #endregion

    public void SaveGame()
    {
        ES3.Save("Level", GetLevel());
        ES3.Save("Cash", GetCash());
    }
    public void LoadGame()
    {
        cash = ES3.Load("Cash",GetCash());
        level = ES3.Load("Level", GetLevel());
    }
}
