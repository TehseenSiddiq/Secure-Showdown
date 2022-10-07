using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Drag : MonoBehaviour
{
    public Camera cam;
    Vector3 mouse;
    GameObject camraObject;
    public bool canDrag = false;
    public Button setBtn, RotateBtn, cancelBtn;

    private void OnEnable()
    {
        cam = FindObjectOfType<Camera>();
        setBtn.onClick.AddListener(Set);
    }

    private void OnMouseDrag()
    {
        
        mouse = Input.mousePosition;
        Ray ray = cam.ScreenPointToRay(mouse);
        RaycastHit hit;
        if(Physics.Raycast(ray, out hit, 100))
        {
            if (Input.GetMouseButton(0))
            {
                if (hit.transform.tag == "Player")// if it is a shape
                {
                  
                    canDrag = true;
                    StateManager.instance.GS = GameState.Planning;
                    // shape = hit.transform.gameObject;
                    // shape.transform.position = Input.mousePosition;// move it to the mouse position
                }
               
            }
        }
        if (canDrag)
        {
            this.gameObject.transform.position = new Vector3(Camera.main.ScreenToWorldPoint(Input.mousePosition).x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y, 0);

        }


    }
    private void OnMouseUp()
    {
        StateManager.instance.GS = GameState.PlayMode;
    }
    private void Update()
    {
        if (canDrag)
        {
            setBtn.gameObject.SetActive(true);
            RotateBtn.gameObject.SetActive(true);
            cancelBtn.gameObject.SetActive(true);
        }
        else
        {
            setBtn.gameObject.SetActive(false);
            RotateBtn.gameObject.SetActive(false);
            cancelBtn.gameObject.SetActive(false);
        }
        foreach (Transform pos in SnapManager.instance.points)
        {
          //  Debug.Log(Vector2.Distance(gameObject.transform.position, pos.position));
            if (Vector2.Distance(gameObject.transform.position, pos.position) < 2)
            {
                setBtn.interactable = true;
                break;
            }
            else
            {
                setBtn.interactable = false;
            }
        }
    }
    public void Set()
    {
        foreach (Transform pos in SnapManager.instance.points)
        {
           // Debug.Log(Vector2.Distance(gameObject.transform.position, pos.position));
            if (Vector2.Distance(gameObject.transform.position, pos.position) < 2)
            {
                transform.position = pos.position;
            }
        }
        canDrag = false;
    }
    
}

