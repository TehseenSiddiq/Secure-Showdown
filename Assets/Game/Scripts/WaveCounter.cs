using TMPro;
using UnityEngine;

public class WaveCounter : MonoBehaviour
{
    private TMP_Text text;
    private BotSpawner spawner;

    private void Start()
    {
        text = GetComponent<TMP_Text>();
        spawner = FindObjectOfType<BotSpawner>();
        InvokeRepeating("WaveCount", 0.2f, .2f);
    }
    void WaveCount()
    {
        text.text = "Wave: " +spawner.nextWave.ToString();
    }
}
