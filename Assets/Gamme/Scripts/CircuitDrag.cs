using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CircuitDrag : MonoBehaviour
{
    private bool canDrag = true;
    private bool draged = false;
    public Button NextBtn, PerviousBtn;
    public GameObject btnHolder;
    public List<Transform> transforms;
    private int index;


    public void OnEnable()
    {
        GameObject[] gameObjects = GameObject.FindGameObjectsWithTag("CircuitPoints");
        foreach (GameObject gameObject in gameObjects)
        {
            transforms.Add(gameObject.transform);
        }
    }
    public void NextNod()
    {
        if (index < transforms.Count - 1)
            index++;
        else
            index = 0;
        this.gameObject.transform.position = transforms[index].position;
      //  FindObjectOfType<Camera>().GetComponent<PanZoom>().Follow(transform);
    }
    public void PerviousPNod()
    {
        if (index > 0)
            index--;
        else
            index = transforms.Count - 1;
        this.gameObject.transform.position = transforms[index].position;
     //   FindObjectOfType<Camera>().GetComponent<PanZoom>().Settarget(transform);
     //   this.Wait(1, () => FindObjectOfType<Camera>().GetComponent<PanZoom>().shouldFollow =false);
    }
    private void LateUpdate()
    {
        if(btnHolder.activeSelf)
            FindObjectOfType<Camera>().GetComponent<PanZoom>().Follow(transform);

      
    }
    public void Set()
    {
        btnHolder.SetActive(false);
    }
    public void Cancel()
    {
        Destroy(gameObject);
    }
}
