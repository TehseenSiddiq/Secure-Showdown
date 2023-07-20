using UnityEngine.SceneManagement;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance { get; private set; }

    public StoreManager StoreManager { get; private set; }
    public MainMenuManager MainMenuManager { get; private set; }
    public CameraProperties[] mainCameras;
    public CameraProperties[] cameras;
    public Sprite[] cameraImages;
    public GameObject[] cameraPrefabs;

    public float idleTime = 30;
    public float MaxEnergy = 0;
    public float energy { get;private set;}
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if (instance != null && instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            instance = this;
        }
       
        energy = MaxEnergy;
       
    }

    public void SetEnergy(float next)
    {
        energy -= next;
        UI_Manager.instance.UpdateEnergySlider(energy, MaxEnergy);       
    }
}
