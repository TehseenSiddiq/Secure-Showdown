using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

[System.Serializable]
public class ItemSlot
{
    public Sprite sprite;
    public GameObject gameObject;
    public int price;
    public bool isUnlocked = false;
}

public class Shop : MonoBehaviour
{
    public List<ItemSlot> itemSlots = new List<ItemSlot>();
    public Transform Content;
    public GameObject btnPrefab;
    public Sprite lockSprite;
    public GameObject ShopPanel;
    public Vector2 hideShopPos;
    public Vector2 showShopPos;


    public void CameraBuyButton(int index)
    {
        if(UI_Manager.instance.currentEnergy < itemSlots[index].price)
        {
            UI_Manager.instance.currentEnergy -= itemSlots[index].price;
            GameObject a = Instantiate(itemSlots[index].gameObject, Content);
        }
        else
        {
            Debug.Log("No Enough Energy");
        }
    }

    private void Start()
    {
        for(int i = 0;i < itemSlots.Count; i++)
        {
            GameObject a= Instantiate(btnPrefab, Content);
            if(itemSlots[i].isUnlocked)
            a.GetComponent<ButtonProperty>().image.sprite = itemSlots[i].sprite;
            else
            {
                a.GetComponent<ButtonProperty>().image.sprite = lockSprite;
                a.GetComponent<Button>().interactable = true;
            }
            a.GetComponent<ButtonProperty>().text.text = itemSlots[i].price.ToString();
        }
    }
    private void LateUpdate()
    {
        if (ShopPanel.activeSelf)
        {
            StateManager.instance.GS = GameState.Planning;
        }else
            StateManager.instance.GS = GameState.PlayMode;
    }
  
}
