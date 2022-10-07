using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum GameState { PlayMode, ShopMode, Lost,Win,Planning}

public class StateManager : MonoBehaviour
{
    public static StateManager instance;

    public GameState GS = GameState.Planning;
    public int h;
    private void Awake()
    {
        instance = this;
    }
}
