using TMPro;
using UnityEngine;

public class ThiefCounter : MonoBehaviour
{
    private TMP_Text text;
    private LevelManager levelManager;

    private void Start()
    {
        text = GetComponent<TMP_Text>();
        levelManager = FindObjectOfType<LevelManager>();
        InvokeRepeating("UpdateText", 0.2f,0.2f);
    }
    void UpdateText()
    {
        text.text = levelManager.thiefCaught.ToString();
    }

}
