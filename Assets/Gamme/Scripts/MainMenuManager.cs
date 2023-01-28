using DG.Tweening;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuManager : MonoBehaviour
{
    public static MainMenuManager instance;

    public RectTransform noCashText;

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if (instance != null && instance != this)
            Destroy(this);
        else
            instance = this;
    }

    public static void LoadScene(int index)
    {
        Debug.LogWarning("Level" + index);
        SceneManager.LoadScene(index);
    }
    public void NoCashAnimation()
    {
        noCashText.DOAnchorPosY(40, 1);
        this.Wait(1.5f, () => {
            noCashText.DOScale(0, 0.2f).SetEase(Ease.Flash);
            this.Wait(1, () => noCashText.anchoredPosition = new Vector3(0, -1000, 0));
            });
    }
}
