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
    [SerializeField]
    float canDragDelay = 1.5f;
    public float enegy;
    public float maxEnergy;
    public Image slider;

    [SerializeField]
    int fixedIndex = 0;

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
                    {
                        slider.gameObject.SetActive(true);
                        canDragDelay -= Time.deltaTime;
                        GetComponent<FieldOfView>().isWorking = false;
                    }

        if (canDrag)
            this.gameObject.transform.position = new Vector3(Camera.main.ScreenToWorldPoint(Input.mousePosition).x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y, 0);
    }
    private void OnMouseUp()
    {
        canDragDelay = 0.5f;
        slider.gameObject.SetActive(false);
    }
    private void Update()
    {
        if (canDrag)
            snaped = false;

        btnHolder.transform.rotation = Quaternion.identity;

        // Set the position of the btnHolder to the camera position
        btnHolder.transform.position = new Vector3(cam.transform.position.x, cam.transform.position.y, 0);

        canDrag = canDragDelay <= 0 ? true : false;

        slider.fillAmount = 1 - (canDragDelay / 0.5f);
        StateManager.instance.GS = canDrag ? GameState.Planning : GameState.PlayMode;

        btnHolder.SetActive(!snaped);

        foreach (Transform pos in FindAnyObjectByType<LineController>().points)
        {
            if (Vector2.Distance(gameObject.transform.position, pos.position) < 2)
            {
                setBtn.interactable = true;
                break;
            }
            else
                setBtn.interactable = false;
        }

        // Convert the camera's position to screen space
        Vector3 screenPosition = cam.WorldToScreenPoint(cam.transform.position);
        // Convert the screen position to canvas local position
        Vector2 localPosition;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas, screenPosition, cam, out localPosition);
        // Update the canvas anchored position
        canvas.anchoredPosition = localPosition;
    }

    public void Set()
    {
        foreach (Transform pos in FindAnyObjectByType<LineController>().points)
        {
           // Debug.Log(Vector2.Distance(gameObject.transform.position, pos.position));
            if (Vector2.Distance(gameObject.transform.position, pos.position) < 2)
            {
                
                GameManager.instance.SetEnergy(GetComponent<FieldOfView>().energy);
                GetComponent<FieldOfView>().isWorking = true;
                transform.position = pos.position;
                snaped = true;
            }
        }
       // canDrag = false;
    }
    public void Rotate()
    {
        if(GetComponent<Rotation>() != null)
        {
            GetComponent<Rotation>().rotationOffset = transform.eulerAngles.z + 45;
        }
       else
            transform.eulerAngles = new Vector3(0, 0, transform.eulerAngles.z + 45);
        //GetComponent<Rotation>().SetInitPosition();
    }
    public void Delete() 
    {
        GameManager.instance.SetEnergy(-GetComponent<FieldOfView>().energy);
        GameManager.instance.cameras[fixedIndex].quntity++;
        Destroy(gameObject); 
    }


}

