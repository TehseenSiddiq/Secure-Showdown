using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Placement : MonoBehaviour
{
    public int countOfCameraPlacement;
    public float time;
    public GameObject _camera;
    public GameObject placementObject;
    public Text timeText;
    public GameObject timeIsUp;
    public GameObject container;
    public bool placed = false;
    GameObject go;
    public GameObject AI_Object;

    private void Start()
    {
        timeText.text = time.ToString();
        Debug.Log(time);
    }
    private void OnMouseDown()
    {
        Debug.Log("Mouse Down");

        if(countOfCameraPlacement>0 && !placed)
        {
            placed = true;
            container.SetActive(true);
            Vector3 mousePixelPos = Input.mousePosition;

            // Add depth so it can actually be used to cast a ray.
            mousePixelPos.z = 20f;

            // Transform from pixel to world coordinates
            Vector3 mouseWorldPosition = Camera.main.ScreenToWorldPoint(mousePixelPos);

            // Remove depth
            mouseWorldPosition.z = 0f;

            // Spawn your prefab
            go = Instantiate(_camera, mouseWorldPosition, Quaternion.identity);
            go.transform.localPosition = new Vector3(go.transform.position.x, 1.4f);
        }
    }
    public void DontPlace()
    {
        Destroy(go);
        placed = false;
        container.SetActive(false);
    }
    public void Place()
    {
        placed = false;
        container.SetActive(false);
        countOfCameraPlacement --;
        if(countOfCameraPlacement==0)
        {
            AI_Object.SetActive(true);
            //timeIsUp.SetActive(true);
            timeText.gameObject.SetActive(false);
            StartCoroutine(Disable());
        }
    }
    TimeSpan result;
    string fromTimeString = "";
    private void Update()
    {
        if(time>0)
        {
            time = time -1 * Time.deltaTime;
            
            result = TimeSpan.FromSeconds(Convert.ToInt32(Mathf.Clamp(time, 0, float.MaxValue)));
            fromTimeString = result.ToString("mm':'ss");
            timeText.text = fromTimeString;
        }
        else
        {
            AI_Object.SetActive(true);
            timeIsUp.SetActive(true);
            StartCoroutine(Disable());
        }
    }

    IEnumerator Disable()
    {
        yield return new WaitForSeconds(2);
        timeIsUp.SetActive(false);
        gameObject.SetActive(false);
        container.SetActive(false);
    }
}
