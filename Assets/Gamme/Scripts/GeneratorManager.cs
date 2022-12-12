using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeneratorManager : MonoBehaviour
{
    public bool isPurchased = false;
    public float totalEnergy = 0;

    public int wirePolls = 4;
    public void BuyGenerator()
    {
        if (!isPurchased && Game.instance.GetCash() >= 10000)
        {
            isPurchased = true;
            totalEnergy = 1000;
            Game.instance.SetCash(Game.instance.GetCash() - 1000);
        }
    }
    public void wirePoll()
    {
        if(Game.instance.GetCash() > 100)
        {
            wirePolls++;
            Game.instance.SetCash(Game.instance.GetCash() - 100);
        }
    }
}
