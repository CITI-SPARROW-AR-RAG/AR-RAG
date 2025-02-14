using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;
using System;
using System.Text;
using UnityEngine.Networking;
using Newtonsoft.Json;
using MixedReality.Toolkit.UX;

[Serializable]
public class QueryRequest
{
    public string question;
}

[Serializable]
public class QueryResponse
{
    public string answer;
    public string[] sources;
}

public class RAGChatManager : MonoBehaviour
{
    [Header("UI References")]
    [SerializeField] private TMP_Text userInputField;
    [SerializeField] private TMP_Text chatOutputText;
    //[SerializeField] private Button sendButton;
    //[SerializeField] private TMP_Text sourcesText; // Optional: to display sources

    [Header("Backend Settings")]
    [SerializeField] private string backendUrl = "http://140.118.101.186:8000";

    //private void Start()
    //{
    //    sendButton.onClick.AddListener(OnSendMessage);
    //}

    public void OnSendMessage()
    {
        if (string.IsNullOrEmpty(userInputField.text))
        {
            Debug.Log("kosong");
            return;
        }
        string userMessage = userInputField.text;
        AppendMessage("User: " + userMessage);

        userInputField.text = "";
        StartCoroutine(SendQuery(userMessage));
        Debug.Log(userInputField.text);
    }

    private void AppendMessage(string message)
    {
        chatOutputText.text += message + "\n\n";
        Debug.Log(message);
    }

    //private void DisplaySources(string[] sources)
    //{
    //    if (sourcesText != null && sources != null)
    //    {
    //        sourcesText.text = "Sources:\n";
    //        foreach (var source in sources)
    //        {
    //            sourcesText.text += "- " + source.Substring(0, Mathf.Min(100, source.Length)) + "...\n";
    //        }
    //    }
    //}

    private IEnumerator SendQuery(string question)
    {
        var requestData = new QueryRequest { question = question };
        string jsonData = JsonConvert.SerializeObject(requestData);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);

        using (UnityWebRequest request = new UnityWebRequest($"{backendUrl}/query", "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                var response = JsonConvert.DeserializeObject<QueryResponse>(request.downloadHandler.text);
                AppendMessage("Assistant: " + response.answer);
                //DisplaySources(response.sources);
            }
            else
            {
                Debug.LogError($"Error: {request.error}");
                AppendMessage("Error: Failed to get response from the RAG system.");
            }
        }
    }
}
