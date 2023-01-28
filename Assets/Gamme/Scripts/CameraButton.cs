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
    [SerializeField]
    private TMP_Text countText;
    public int index = 0;

    public void SetButton(Sprite image,string text,int index)
    {
        this.image.sprite = image;
        this.text.text = text;
        this.index = index;
    }
    private void LateUpdate()
    {
        countText.text = GarageManager.instance.cameras[index].quntity.ToString();
    }
    public void AddListener()
    {
        this.GetComponent<Button>().onClick.AddListener(()=> GarageManager.instance.SetStats(index));
    }
  
}
