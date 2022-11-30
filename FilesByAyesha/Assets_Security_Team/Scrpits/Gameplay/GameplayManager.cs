using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameplayManager : MonoBehaviour
{
    public static GameplayManager instance;
    public GameObject CameraPlacement;
    public GameObject placeObjectText;
    public GameObject loseText;
    public GameObject winText;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
            Destroy(gameObject);
       
    }
    private void Start()
    {
        placeObjectText.SetActive(true);
        CameraPlacement.SetActive(false);
        StartCoroutine(PlaceObject());
    }
    IEnumerator PlaceObject()
    {
        yield return new WaitForSeconds(3f);
        placeObjectText.SetActive(false);
        CameraPlacement.SetActive(true);

    }

    public void Lose()
    {
        loseText.SetActive(true);
        StartCoroutine(GotoLevelsScreen());
    }
    public void Won()
    {
        winText.SetActive(true);
        StartCoroutine(GotoLevelsScreen());
    }
    IEnumerator GotoLevelsScreen()
    {
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene("Levels");
    }
}
