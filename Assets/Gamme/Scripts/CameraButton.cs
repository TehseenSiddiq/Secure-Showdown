using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CameraButton : MonoBehaviour
{
    [SerializeField]
    private Image image;
    [SerializeField]
    private TMP_Text text;
    int index = 0;

    public void SetButton(Sprite image,string text,int index)
    {
        this.image.sprite = image;
        this.text.text = text;
        this.index = index;
    }
    public void AddListener()
    {
        this.GetComponent<Button>().onClick.AddListener(()=> FindObjectOfType<StoreManager>().SetStats(index));
    }
  
}
