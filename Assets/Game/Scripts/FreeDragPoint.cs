using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreeDragPoint : MonoBehaviour
{
    public FreeDrag freeDrag;
    Vector3 mouse;
    private void OnMouseDrag()
    {
        mouse = Input.mousePosition;
        Ray ray = freeDrag.cam.ScreenPointToRay(mouse);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 100))
            if (Input.GetMouseButton(0))
                if (hit.transform.tag == "Player")// if it is a shape
                    if (freeDrag.canDragDelay > 0)
                    {
                        freeDrag.canDragDelay -= Time.deltaTime;
                        freeDrag.slider.transform.parent.gameObject.SetActive(true);
                    }
                        

        if (freeDrag.canDrag)
        {
            freeDrag.points[freeDrag.act].position = new Vector3(Camera.main.ScreenToWorldPoint(Input.mousePosition).x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y, 0);
            freeDrag.btnHolder.SetActive(true);
            freeDrag.GetComponent<WireTraps>().isWorking = false;
        }

    }
}
