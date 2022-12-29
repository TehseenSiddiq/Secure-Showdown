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
    public RectTransform canvas;
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
            if (Input.GetMouseButton(0))
                if (hit.transform.tag == "Player")// if it is a shape
                    if(canDragDelay> 0)
                        canDragDelay -= Time.deltaTime;

        if (canDrag)
            this.gameObject.transform.position = new Vector3(Camera.main.ScreenToWorldPoint(Input.mousePosition).x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y, 0);

    }
    private void OnMouseUp()
    {
        canDragDelay = 1.5f;
        
    }
    private void Update()
    {
        if (canDrag)
            snaped = false;
        btnHolder.transform.rotation = Quaternion.Euler(0, 0, 0);
        btnHolder.transform.position = Vector3.zero;

        canDrag = canDragDelay <= 0 ? true : false;
        StateManager.instance.GS = canDrag ? GameState.Planning : GameState.PlayMode;

         btnHolder.SetActive(!snaped);

        foreach (Transform pos in SnapManager.instance.points)
        {
            if (Vector2.Distance(gameObject.transform.position, pos.position) < 2)
            {
                setBtn.interactable = true;
                break;
            }
            else
                setBtn.interactable = false;

        }
        if (canvas.gameObject.activeSelf)
            canvas.anchoredPosition = transform.position;
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
        transform.eulerAngles = new Vector3(0, 0, GetComponent<Rotation>().initPos + 45);
        GetComponent<Rotation>().SetInitPosition();
    }


}

