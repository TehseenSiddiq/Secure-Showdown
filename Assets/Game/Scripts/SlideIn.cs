using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SlideIn : MonoBehaviour
{
    public Ease ease = Ease.InElastic;
    public float Time = 0.5f;
    private void OnEnable()
    {
        GetComponent<RectTransform>().DOAnchorPosX(0, Time).SetEase(ease);
    }
    private void OnDisable()
    {
        GetComponent<RectTransform>().DOAnchorPosX(3000, Time).SetEase(ease);
    }
}
