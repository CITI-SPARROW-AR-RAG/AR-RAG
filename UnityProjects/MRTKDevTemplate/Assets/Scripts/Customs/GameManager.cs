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

    [SerializeField] private TMP_Text inputMsgText;
    [SerializeField] private MRTKTMPInputField MRTKInputField;

    [SerializeField] private GameObject msgTextBubble;
    [SerializeField] private GameObject msgTextConversation;

    public void OnButtonSendPress()
    {
        // Check if input empty
        if (inputMsgText != null && !string.IsNullOrEmpty(inputMsgText.text))
        {
            // Instantiate a msg bubble and fills its text value
            GameObject newMsgBubble = Instantiate(msgTextBubble, msgTextConversation.transform);
            TMP_Text bubbleText = newMsgBubble.GetComponentInChildren<TMP_Text>();
            RectTransform messageRT = newMsgBubble.transform.GetChild(1).GetComponent<RectTransform>();


            if (bubbleText != null)
            {
                bubbleText.text = inputMsgText.text;
                bubbleText.ForceMeshUpdate(true);

                // Updata the layout system
                LayoutRebuilder.ForceRebuildLayoutImmediate(msgTextConversation.GetComponent<RectTransform>());
                LayoutRebuilder.ForceRebuildLayoutImmediate(newMsgBubble.GetComponent<RectTransform>());
                LayoutRebuilder.ForceRebuildLayoutImmediate(bubbleText.gameObject.GetComponent<RectTransform>());

                // Resize the msg bubble
                messageRT.sizeDelta = new Vector2(messageRT.sizeDelta.x, bubbleText.gameObject.GetComponent<RectTransform>().sizeDelta.y);
                Debug.Log(bubbleText.gameObject.GetComponent<RectTransform>().sizeDelta.y + " and " + bubbleText.gameObject.name);
            }
            else
            {
                Debug.Log("No TMP_Text component found in the msgTextBubble prefab.");
            }

            // Updata the whole layout system again
            LayoutRebuilder.ForceRebuildLayoutImmediate(msgTextConversation.GetComponent<RectTransform>());

            // Clear the input text
            MRTKInputField.text = string.Empty;
            inputMsgText.text = string.Empty;

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
