using TMPro;
using UnityEngine;

public class CoinCounter : MonoBehaviour
{
    public TMP_Text text;

    private void Start()
    {
        InvokeRepeating("Repeat", 1, 0.5f);
    }

    void Repeat()
    {
        text.text = Game.instance.GetCash().ToString();
    }
}
