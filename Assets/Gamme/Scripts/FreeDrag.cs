using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FreeDrag : MonoBehaviour
{
    public Camera cam;
    private WireTraps wireTraps;

    public RectTransform canvas;
    public bool canDrag = false;
    private bool snaped = false;
    public Button setBtn, backBtn, cancelBtn;
    public GameObject btnHolder;
    [HideInInspector]
    public float canDragDelay = 1.5f;
    public float maxDragDelay = 0.5f;
    public Transform[] points;
    [HideInInspector]
    public int act = 0;
    [SerializeField]
    private int fixedIndex;

    private void OnEnable()
    {
        cam = FindObjectOfType<Camera>();
        wireTraps = GetComponent<WireTraps>();
        setBtn.onClick.AddListener(Set);
        canDragDelay = maxDragDelay;
    }

   
    private void OnMouseUp()
    {
        canDragDelay = maxDragDelay;

    }
    private void Update()
    {
        btnHolder.transform.rotation = Quaternion.Euler(0, 0, 0);
        btnHolder.transform.position = Vector3.zero;

        canDrag = canDragDelay <= 0 ? true : false;
        StateManager.instance.GS = canDrag ?GameState.Planning: GameState.PlayMode;

        setBtn.interactable = (wireTraps.isSetable) ? true : false;
     
        if (act == 0)
            backBtn.interactable = false;
        else
            backBtn.interactable = true;
        if(canvas.gameObject.activeSelf)
            canvas.anchoredPosition = points[act].position;
    }
    public void Set()
    {
        if (act != 1)
            act = 1;
        else
        {
            btnHolder.SetActive(false);
            canDragDelay = 1.5f;
            act = 0;
            GameManager.instance.SetEnergy(wireTraps.energy);
            wireTraps.isWorking = true;
        }
    }
    public void Back()
    {
            act = 0;
    }
    public void Cancel()
    {
        GameManager.instance.SetEnergy(-GetComponent<WireTraps>().energy);
        GameManager.instance.cameras[fixedIndex].quntity++;
        Destroy(gameObject,.3f); 
    }
    public void Rotate()=>  transform.eulerAngles = new Vector3(0, 0, transform.eulerAngles.z + 45);

}
