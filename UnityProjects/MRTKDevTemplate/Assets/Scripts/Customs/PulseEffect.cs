using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PulseEffect : MonoBehaviour
{
    [SerializeField] private float minScale = 1.0f;
    [SerializeField] private float maxScale = 1.2f;
    [SerializeField] private float minAlpha = 0.6f;
    [SerializeField] private float maxAlpha = 1.0f;
    [SerializeField] private float pulseDuration = 1.0f;

    private RectTransform rectTransform;
    private Coroutine pulseCoroutine;

    // Components for alpha control
    private TextMeshProUGUI tmpText;
    private Graphic graphic;

    private void Awake()
    {
        rectTransform = GetComponent<RectTransform>();
        tmpText = GetComponent<TextMeshProUGUI>();

        // If no TextMeshPro, try to get a standard UI component
        if (tmpText == null)
        {
            graphic = GetComponent<Graphic>();

            if (graphic == null)
            {
                Debug.LogWarning("No TextMeshProUGUI or Graphic component found. Alpha fading will not work.");
            }
        }
    }

    private void OnEnable()
    {
        StartPulsing();
    }

    private void OnDisable()
    {
        StopPulsing();
    }

    public void StartPulsing()
    {
        if (pulseCoroutine != null)
        {
            StopCoroutine(pulseCoroutine);
        }

        // Reset to initial values
        rectTransform.localScale = new Vector3(minScale, minScale, 1f);
        SetAlpha(minAlpha);

        pulseCoroutine = StartCoroutine(PulseCoroutine());
    }

    public void StopPulsing()
    {
        if (pulseCoroutine != null)
        {
            StopCoroutine(pulseCoroutine);
            pulseCoroutine = null;

            rectTransform.localScale = new Vector3(minScale, minScale, 1f);
            SetAlpha(minAlpha);
        }
    }

    private void SetAlpha(float alpha)
    {
        if (tmpText != null)
        {
            // Modify the vertex color
            Color color = tmpText.color;
            color.a = alpha;
            tmpText.color = color;
        }
        else if (graphic != null)
        {
            Color color = graphic.color;
            color.a = alpha;
            graphic.color = color;
        }
    }

    private IEnumerator PulseCoroutine()
    {
        while (true)
        {
            // Increase scale and alpha
            float elapsedTime = 0f;
            while (elapsedTime < pulseDuration / 2)
            {
                float progress = elapsedTime / (pulseDuration / 2);
                float scale = Mathf.Lerp(minScale, maxScale, progress);
                float alpha = Mathf.Lerp(minAlpha, maxAlpha, progress);

                rectTransform.localScale = new Vector3(scale, scale, 1f);
                SetAlpha(alpha);

                elapsedTime += Time.deltaTime;
                yield return null;
            }

            // Decrease scale and alpha
            elapsedTime = 0f;
            while (elapsedTime < pulseDuration / 2)
            {
                float progress = elapsedTime / (pulseDuration / 2);
                float scale = Mathf.Lerp(maxScale, minScale, progress);
                float alpha = Mathf.Lerp(maxAlpha, minAlpha, progress);

                rectTransform.localScale = new Vector3(scale, scale, 1f);
                SetAlpha(alpha);

                elapsedTime += Time.deltaTime;
                yield return null;
            }
        }
    }
}
