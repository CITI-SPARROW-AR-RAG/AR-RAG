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
using System.Threading.Tasks;
using System.Net.Http;
using UnityEditor.PackageManager;

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
    [SerializeField] private MRTKTMPInputField MRTKInputField;

    [Header("Backend Settings")]
    [SerializeField] private string backendUrl = "http://140.118.101.181:8000/query";

    private static readonly HttpClient client = new HttpClient();

    public async void OnSendMessage()
    {
        if (string.IsNullOrEmpty(userInputField.text))
        {
            Debug.Log("kosong");
            return;
        }
        string userMessage = userInputField.text;

        await SendQuery(userMessage);
        Debug.Log(userMessage);
        //userInputField.text = "";

        //MRTKInputField.text = string.Empty;
        //userInputField.text = string.Empty;
    }

    private async Task SendQuery(string question)
    {
        var requestData = new { question = question };
        string jsonData = JsonConvert.SerializeObject(requestData);
        var content = new StringContent(jsonData, Encoding.UTF8, "application/json");

        try
        {
            HttpResponseMessage response = await client.PostAsync(backendUrl, content);
            string responseString = await response.Content.ReadAsStringAsync();

            if (response.IsSuccessStatusCode)
            {
                var queryResponse = JsonConvert.DeserializeObject<QueryResponse>(responseString);
                chatOutputText.text = "Assistant: " + queryResponse.answer;
            }
            else
            {
                Debug.LogError($"Error: {response.StatusCode}");
                chatOutputText.text = "Error: Failed to get response.";
            }
        }
        catch (HttpRequestException e)
        {
            Debug.LogError($"Request error: {e.Message}");
            chatOutputText.text = "Error: Network issue.";
        }
        
    }

    private class QueryResponse
    {
        public string answer;
        public string[] sources;
    }
}
