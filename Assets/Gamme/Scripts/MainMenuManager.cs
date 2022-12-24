using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuManager : MonoBehaviour
{
    
    public static void LoadScene(int index)
    {
        Debug.LogWarning("Level" + index);
        SceneManager.LoadScene(index);
    }
}
