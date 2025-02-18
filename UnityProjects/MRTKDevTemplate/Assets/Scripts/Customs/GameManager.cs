using MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    #region PANELS
    public List<GameObject> menuPanels;

    public void OnChangePanel(GameObject clickedPanel)
    {
        // Check if the clicked panel is valid and exists in the list
        if (clickedPanel != null && menuPanels.Contains(clickedPanel))
        {
            // Deactivate all panels
            foreach (var panel in menuPanels)
            {
                if (panel != null)
                {
                    panel.SetActive(false);
                }
            }

            // Activate the clicked panel
            clickedPanel.SetActive(true);
        }
        else
        {
            Debug.LogWarning("Clicked panel is not valid or not found in the menuPanels list.");
        }
    }
    #endregion


    #region AI ASSISTANCE

    [SerializeField] private MRTKTMPInputField inputField;
    [SerializeField] private TMP_Text inputMsgText;
    [SerializeField] private GameObject msgTextBubble;
    [SerializeField] private GameObject msgTextConversation;

    [SerializeField] private RectTransform contentRT;

    public void OnButtonSendPress()
    {
        // Check if input empty
        if (inputMsgText != null && !string.IsNullOrEmpty(inputMsgText.text))
        {
            // Instantiate a msg bubble and fills its text value
            GameObject newMsgBubble = Instantiate(msgTextBubble, msgTextConversation.transform);
            TMP_Text bubbleText = newMsgBubble.GetComponentInChildren<TMP_Text>();
            RectTransform rectMsgBubble = newMsgBubble.transform.GetChild(1).GetComponent<RectTransform>();


            if (bubbleText != null)
            {
                bubbleText.text = inputMsgText.text;
                bubbleText.ForceMeshUpdate(true);
            }
            else
            {
                Debug.Log("No TMP_Text component found in the msgTextBubble prefab.");
            }

            // Clear the input text
            inputField.text = string.Empty;
            inputMsgText.text = string.Empty;

            // Adjust multilines message bubble
            if (rectMsgBubble != null)
            {
                float newHeight = 18 + 6.5f * (bubbleText.textInfo.lineCount - 1);
                rectMsgBubble.sizeDelta = new Vector2(rectMsgBubble.sizeDelta.x, newHeight);
                //Debug.Log(bubbleText.textInfo.lineCount);
                //Debug.Log("Height of the RectTransform has been changed to: " + newHeight);

            }

            LayoutRebuilder.ForceRebuildLayoutImmediate(newMsgBubble.GetComponent<RectTransform>());
            LayoutRebuilder.ForceRebuildLayoutImmediate(contentRT);

        }
        else
        {
            Debug.Log("Input text is empty or null.");
        }
    }

    public void OnFrequentInquiriesPress(string inquiries)
    {
        // Check if input empty
        if (inquiries != null && !string.IsNullOrEmpty(inquiries))
        {
            // Instantiate a msg bubble and fills its text value
            GameObject newMsgBubble = Instantiate(msgTextBubble, msgTextConversation.transform);
            TMP_Text bubbleText = newMsgBubble.GetComponentInChildren<TMP_Text>();

            if (bubbleText != null)
            {
                bubbleText.text = inquiries;
            }
            else
            {
                Debug.Log("No TMP_Text component found in the msgTextBubble prefab.");
            }
        }
        else
        {
            Debug.Log("Input text is empty or null.");
        }
    }
    #endregion
}
