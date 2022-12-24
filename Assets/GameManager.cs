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
        StoreManager = FindObjectOfType<StoreManager>();
        cameras = StoreManager.cameras;
    }
}
