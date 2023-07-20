using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game : MonoBehaviour
{
    public static Game instance { get; private set; }

    private int cash = 10000;
    private int level = 1;
    private float[] starPresentage = new float[50];
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
    public void SetLevelStar(float data,int index)
    {
        starPresentage[index] = data;
    }
    public float GetLevelStar(int index)
    {
        return starPresentage[index];
    }
    #endregion
    private void OnApplicationQuit()
    {
        SaveGame();
    }
    public void SaveGame()
    {
        ES3.Save("Level", GetLevel());
        ES3.Save("Cash", GetCash());
        ES3.Save("LevelStar", starPresentage);
    }
    public void LoadGame()
    {
        cash = ES3.Load("Cash",GetCash());
        level = ES3.Load("Level", GetLevel());
        starPresentage = ES3.Load("LevelStar", starPresentage);
    }
}
