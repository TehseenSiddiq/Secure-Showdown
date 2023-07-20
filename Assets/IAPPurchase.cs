using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAPPurchase : MonoBehaviour
{
    public void BuyCoins(Product product)
    {
        Debug.Log("Amount: " + (Game.instance.GetCash()+  (Mathf.RoundToInt((float)product.definition.payout.quantity))));
        Game.instance.SetCash(Game.instance.GetCash() + Mathf.RoundToInt((float)product.definition.payout.quantity));
    }
}
