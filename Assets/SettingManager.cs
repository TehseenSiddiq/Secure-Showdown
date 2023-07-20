using UnityEngine;
using UnityEngine.UI;

public class SettingManager : MonoBehaviour
{
    public GameObject Sounds;
    public static string SoundsKey = "EnableSounds";
    void Start()
    {
        Sounds.GetComponent<Toggle>().onValueChanged.AddListener((value) =>
        {
            PlayerPrefs.SetInt(SoundsKey, value ? 0 : 1);
            if (value)
            {
                AudioListener.volume = 1;
            }
            else
            {
                AudioListener.volume = 0;
            }
        }
      );
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
