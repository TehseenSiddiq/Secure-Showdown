using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pointNodes : MonoBehaviour
{
    [SerializeField]
    LineDraw ld;
    private void OnEnable()
    {
        ld = FindObjectOfType<LineDraw>();
        ld.points.Add(this.gameObject.transform);
        //FindObjectOfType<LineController>().SetUp(ld.points);
    }
    private void OnDestroy()
    {
        ld = FindObjectOfType<LineDraw>();
        if(this.gameObject.transform != null)
           ld.points.Remove(this.gameObject.transform);
      //  FindObjectOfType<LineController>().SetUp(ld.points);
    }
}
