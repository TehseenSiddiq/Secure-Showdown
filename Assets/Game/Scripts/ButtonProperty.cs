using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ButtonProperty : MonoBehaviour
{
    public Image image;
    public TextMeshProUGUI text;
    public TMP_Text countText;
    public int index;
    private InGameStore IGS;

    private void Start()
    {
        IGS = FindObjectOfType<InGameStore>();
        InvokeRepeating("TextUpdate", 0.5f, 0.5f);
    }
    public void SetButton(Sprite sprite,string name,int count,int index)
    {
        image.sprite = sprite;
        text.text = name;
        countText.text = count.ToString();
        this.index = index;
    }

    void TextUpdate()
    {
       countText.text = GameManager.instance.cameras[index].quntity.ToString();
    }
}
