using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Drag : MonoBehaviour
{
    public Camera cam;
    Vector3 mouse;
    GameObject camraObject;
    private bool canDrag = false;
    private bool snaped = false;
    public Button setBtn, RotateBtn, cancelBtn;
    public GameObject btnHolder;
    [SerializeField]float canDragDelay = 1.5f;
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
               
                    if(canDragDelay> 0)
                    {
                        canDragDelay -= Time.deltaTime;
                    }
                  
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
        canDragDelay = 1.5f;
        
    }
    private void Update()
    {
        btnHolder.transform.rotation = Quaternion.Euler(0, 0, 0);
        btnHolder.transform.position = Vector3.zero;
        if (canDragDelay <= 0)
        {
            canDrag = true;
        }
        else
        {
            canDrag = false;
        }
        if (canDrag)
        {

            StateManager.instance.GS = GameState.Planning;
        }
        else
        {
            // FindObjectOfType<Camera>().GetComponent<PanZoom>().Follow(transform);
            StateManager.instance.GS = GameState.PlayMode;

        }
        if (snaped)
        {
           // FindObjectOfType<Camera>().GetComponent<PanZoom>().Follow(transform);
            setBtn.gameObject.SetActive(false);
            RotateBtn.gameObject.SetActive(false);
            cancelBtn.gameObject.SetActive(false);
        }
        else
        {
            
            setBtn.gameObject.SetActive(true);
            RotateBtn.gameObject.SetActive(true);
            cancelBtn.gameObject.SetActive(true);
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
                snaped = true;
            }
        }
       // canDrag = false;
    }
    public void Rotate()
    {
        transform.eulerAngles = new Vector3(0, 0, transform.eulerAngles.z + 45); 
    }
    void OnMouseOver()
    {
        //If your mouse hovers over the GameObject with the script attached, output this message
        Debug.Log("Mouse is over GameObject.");
        
    }

    void OnMouseExit()
    {
        //The mouse is no longer hovering over the GameObject so output this message each frame
        Debug.Log("Mouse is no longer on GameObject.");
    }

}

