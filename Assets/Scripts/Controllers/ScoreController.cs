using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using System;

public class ScoreController : MonoBehaviour {

    public Text list;
    public Text score;
    public Button send_score;
    private const string restUrl = "http://vanillasky.ddns.me:5555";
    public float current_score = 0.0f;
    public const int max_list_size = 3;
    private string data = "";


	// Use this for initialization
	void Start () {
        Debug.Log("Starting");
        StartCoroutine("getData");
        Debug.Log("Called");
        send_score.onClick.AddListener(() => sendScore());

    }
	
	// Update is called once per frame
	void Update () {
        current_score += Time.deltaTime;
        this.score.text = this.currentScore().ToString();

    }

    int currentScore()
    {
        return ((int)Math.Floor(current_score));
    }



    IEnumerator getData()
    {
        WWW www = new WWW(restUrl);   // UTF-8 encoded json file on the server
        yield return www;
        if (string.IsNullOrEmpty(www.error))
        {
            this.updateScoreList(this.Processjson(www.text));
        }
        else Debug.Log(www.error);
    }

    private void updateScoreList(List<Score> scores)
    {
        string list = "";
        this.list.text = list;
        for (int i = 0; i < ScoreController.max_list_size && i < scores.Count; ++i)
        {
            list += i+1 + ". " + scores[i].score + ": " + scores[i].name + ", ";
        }
        list = list.TrimEnd(' ');
        list = list.TrimEnd(',');
        this.list.text = list;
    }

    void sendScore(int score, string name)
    {
        this.data = "/create?name="+ WWW.EscapeURL(name) + 
            "&score="+ WWW.EscapeURL(score.ToString()) + "";
        StartCoroutine("sendData");
    }

    IEnumerator sendData()
    {
        string url = restUrl + this.data;
        Debug.Log(url);
        WWW www = new WWW(url);
        yield return www;
        if (string.IsNullOrEmpty(www.error))
        {
            Debug.Log("sendData - OK");
        }
        else Debug.Log(www.error);
    }

    void sendScore()
    {
        string name = "Santeri Hetekivi";
        int score = this.currentScore();
        this.sendScore(score, name);
    }

    private List<Score> Processjson(string jsonString)
    {
        jsonString =jsonString.TrimStart('[');
        jsonString = jsonString.TrimEnd(']');
        string[] jsons = jsonString.Split('}');
        List<Score> scores = new List<Score>();
        string str = "";
        foreach (string json in jsons)
        {
            str = json.TrimStart(',') + "}";
            if (str.Length > 5)
            {
                scores.Add(JsonUtility.FromJson<Score>(str));
                if (scores.Count >= ScoreController.max_list_size) break;
            }
        }
        return scores;
    }
}
