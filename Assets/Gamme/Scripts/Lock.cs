using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Lock : MonoBehaviour
{
    public Camera cam;
    public RectTransform canvas;

    public float delay = 5;

    Vector3 mouse;
    GameObject camraObject;
    private bool canDrag = false;
    private bool snaped = false;
    public Button setBtn, cancelBtn;
    public GameObject btnHolder;
    float canDragDelay = 0.3f;
    [SerializeField]private List<Transform> doors;
    [SerializeField]
    private int fixedIndex;
    public float energy;
    private void Start()
    {
        Door[] doorsScript = FindObjectsOfType<Door>();
        foreach (Door door in doorsScript)
        {
            doors.Add(door.transform);
        }    
    }
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
        if (Physics.Raycast(ray, out hit, 100))
            if (Input.GetMouseButton(0))
                if (hit.transform.tag == "Player")// if it is a shape
                    if (canDragDelay > 0)
                    {
                        canDragDelay -= Time.deltaTime;
                        canDrag = true;
                    }
                   
        if (canDrag)
            this.gameObject.transform.position = new Vector3(Camera.main.ScreenToWorldPoint(Input.mousePosition).x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y, 0);

    }
    private void OnMouseUp()
    {
        canDragDelay = .3f;
    }
    private void Update()
    {
        if (canDrag)
            snaped = false;
        if(canDrag)
          btnHolder.transform.rotation = Quaternion.Euler(0, 0, 0);

        canDrag = canDragDelay <= 0 ? true : false;
        StateManager.instance.GS = canDrag ? GameState.Planning : GameState.PlayMode;

        btnHolder.SetActive(!snaped);

        foreach (Transform pos in doors)
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
        foreach (Transform pos in doors)
           if (Vector2.Distance(gameObject.transform.position, pos.position) < 2)
           {
               transform.position = pos.position;
               pos.GetComponent<Door>().waypoint.isLocked = true;
               pos.GetComponent<Door>().waypoint.lockDelay =  delay;
               snaped = true;
               GameManager.instance.SetEnergy(GetComponent<Lock>().energy);
           }
    }
    public void Cancel()
    {
        GameManager.instance.SetEnergy(-GetComponent<Lock>().energy);
        GameManager.instance.cameras[fixedIndex].quntity++;
        Destroy(gameObject);
    }
    public void Rotate() => transform.eulerAngles = new Vector3(0, 0, transform.eulerAngles.z + 45);
}
