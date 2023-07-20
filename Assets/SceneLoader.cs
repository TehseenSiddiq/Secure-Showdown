using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public static SceneLoader Instance { get; private set; }

    public GameManager gameManager;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
            return;
        }

    }
    private void Start()
    {
        if (ES3.KeyExists("Cameras"))
        {
            Debug.Log("Loading Cameras...");
            gameManager.cameras = ES3.Load("Cameras", gameManager.mainCameras);
        }

        else
        {
            Debug.Log("No Camera Data Found!");
            gameManager.cameras = gameManager.mainCameras;
            ES3.Save("Cameras", gameManager.mainCameras);
        }
    }

    public void LoadScene(int sceneIndex)
    {
        gameManager.cameras = ES3.Load("Cameras", gameManager.mainCameras);

        // Load the new scene
        SceneManager.LoadScene(sceneIndex);
    }

    public void ResetData()
    {
        //    ES3.DeleteFile("SaveFile.es3");
        //   ES3.DeleteKey("Cameras");
        ES3.Save("Cameras", gameManager.mainCameras);
        // Update List With new Cameras
        gameManager.cameras = gameManager.mainCameras;
       // gameManager.cameras = ES3.Load("Cameras", gameManager.mainCameras);
        //  StartCoroutine(LoadCamerasAfterDelay());
    }

    private IEnumerator LoadCamerasAfterDelay()
    {
        // Wait for a short delay to allow the deletion to take effect.
        yield return new WaitForSeconds(0.3f); // Adjust the delay as needed.

        // Save the updated data into the cameras variable.
      
    }
}
