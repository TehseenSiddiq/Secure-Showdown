using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class initiator : MonoBehaviour
{
    public float timer = 60;

    private void Start()
    {
        StateManager.instance.GS = GameState.ShopMode;

    }
    private void Update()
    {
        if(timer > 0 && StateManager.instance.GS == GameState.ShopMode)
        {
            timer -= Time.deltaTime;
        }
        else if (timer < 0 && StateManager.instance.GS == GameState.ShopMode)
        {
            //StateManager.instance.GS = GameState.PlayMode;
            timer = 150f;
            
        }
        else if (timer > 0 && StateManager.instance.GS == GameState.PlayMode)
        {
            //StateManager.instance.GS = GameState.PlayMode;
           // timer = 150f;
            timer -= Time.deltaTime;
        }
        else if (timer < 0 && StateManager.instance.GS == GameState.PlayMode)
        {
            
          //  timer = 150f;
        }
    }
}
