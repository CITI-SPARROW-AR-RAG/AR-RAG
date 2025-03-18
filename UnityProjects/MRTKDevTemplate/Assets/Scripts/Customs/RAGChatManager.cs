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
    [Header("Backend Settings")]
    [SerializeField] private string backendUrl = "http://140.118.101.181:8000/query";

    private static readonly HttpClient client = new HttpClient();

    public async Task<String> SendQuery(string question)
    {
        string formattedQuestion = question;
        var requestData = new { question = formattedQuestion };
        string jsonData = JsonConvert.SerializeObject(requestData);
        var content = new StringContent(jsonData, Encoding.UTF8, "application/json");

        try
        {
            HttpResponseMessage response = await client.PostAsync(backendUrl, content);
            string responseString = await response.Content.ReadAsStringAsync();

            if (response.IsSuccessStatusCode)
            {
                var queryResponse = JsonConvert.DeserializeObject<QueryResponse>(responseString);
                return "Assistant: " + queryResponse.answer;
            }
            else
            {
                Debug.LogError($"Error: {response.StatusCode}");
                return "Error: Failed to get response.";
            }
        }
        catch (HttpRequestException e)
        {
            Debug.LogError($"Request error: {e.Message}");
            return "Error: Network issue.";
        }
        
    }

    private class QueryResponse
    {
        public string answer;
        public string[] sources;
    }
}
