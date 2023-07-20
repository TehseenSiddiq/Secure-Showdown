using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GameState { PlayMode, ShopMode,Planning}

public class StateManager : MonoBehaviour
{
    public static StateManager instance;


    public bool drag = false;

    public GameState GS = GameState.PlayMode;
    public int h;
    private void Awake()
    {
        instance = this;
    }
    private void LateUpdate()
    {
    
    }
}
