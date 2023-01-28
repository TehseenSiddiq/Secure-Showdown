using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance { get; private set; }

    public StoreManager StoreManager { get; private set; }
    public MainMenuManager MainMenuManager { get; private set; }
    public CameraProperties[] cameras;


    public float idleTime = 30;
    public float MaxEnergy = 0;
    public float energy { get;private set;}
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
        energy = MaxEnergy;
        //ES3.DeleteKey("Cameras");     
        if (ES3.KeyExists("Cameras"))
        {
            cameras = ES3.Load("Cameras", cameras);
        }
        else
            ES3.Save("Cameras", cameras);
    }
    public void SetEnergy(float next)
    {
        energy -= next;
        UI_Manager.instance.UpdateEnergySlider(energy, MaxEnergy);       
    }
    private void OnApplicationQuit()
    { 
        ES3.Save("Cameras", GameManager.instance.cameras);
    }
}
