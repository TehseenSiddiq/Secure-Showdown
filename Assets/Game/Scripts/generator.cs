using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class generator : MonoBehaviour
{
    [SerializeField]
    float Energy = 100;

    private void Awake()
    {
       /* ES3.DeleteKey("Energy");
        if (ES3.KeyExists("Energy"))
        {
            Energy = ES3.Load("Energy", Energy);
        }
        else
            ES3.Save("Energy", 100);*/
        GameManager.instance.MaxEnergy = Energy;
    }
}
