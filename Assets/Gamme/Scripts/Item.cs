using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Item : MonoBehaviour // IPointerUpHandler, IPointerDownHandler , IDragHandler 
{
    // public ItemType itemType;
    public bool useChildImage;

    [HideInInspector]
    public Button button;
    public Image childImage;

    public GameObject objectInCanvas;
    public GameObject objectInWorld;
    public GameObject drag;

    private Canvas canvas;

    private ObjectContainer previousObjectContainer;
    private ObjectContainer currentObjectContainer;

    // Start is called before the first frame update
    void Start()
    {
        button = GetComponent<Button>();
        canvas = FindObjectOfType<Canvas>();
    }
}

  /*  public void OnClick()
    {
        Shop shop = FindObjectOfType<Shop>();

    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (drag != null)
        {
            RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);

            if (hit.collider != null)
            {
                if (hit.collider.CompareTag("Respawn"))
                {
                    if (previousObjectContainer != null)
                    {
                        previousObjectContainer.spriteRenderer.color = Color.blue;
                    }

                    ObjectContainer oc = hit.collider.GetComponent<ObjectContainer>();

                    if (oc.isFull == true) { Destroy(drag); return; }

                    Shop shop = FindObjectOfType<Shop>();
                  //  bool b = shop.Purchase(itemType);

                    if (b == true)
                    {
                        GameObject go = Instantiate(objectInWorld, oc.transform.position, oc.transform.rotation);

                        previousObjectContainer = oc;
                        oc.isFull = true;
                    }
                }
            }
        }

        Destroy(drag);
    }

    public void OnPointerDown(PointerEventData eventData)
    {   
        drag = Instantiate(objectInCanvas, canvas.transform);
        drag.transform.position = Input.mousePosition;
    }

    public void OnDrag(PointerEventData eventData)
    {
        drag.transform.position = Input.mousePosition;
    }
}

public enum ItemType 
{
    Camera,
    WhiteCamera,
    RedCamera
}*/
