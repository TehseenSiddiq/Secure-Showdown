using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CameraUIObject : MonoBehaviour
{
    public CameraProperties CameraProperties;

    public TMP_Text nameText;
    public TMP_Text priceText;
    public Image image;
    private int index;

    public void SetObject(string name,int price,Sprite image,int index)
    {
        nameText.text = name;
        priceText.text = price.ToString();
        this.image.sprite = image;
        this.index = index;
    }
    public void AddListener()
    {
        this.GetComponent<Button>().onClick.AddListener(() => FindObjectOfType<StoreManager>().SetStats(index));
    }
}
