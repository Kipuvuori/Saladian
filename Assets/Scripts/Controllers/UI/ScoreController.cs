using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
using UnityEngine.Events;

public class ScoreController : UIController {

    public Text list;
    public Text score;
    public GameObject game_over_panel;
    private UIButton restart_button;
    private UIButton quit_button;
    private UIButton send_button;

    public GameObject restart_go;
    public GameObject quit_go;
    public GameObject send_go;
    public InputField username;

    private const string restUrl = "http://vanillasky.ddns.me:5555";
    public float current_score;
    private const int LIMIT = 3;
    private bool running;
    private UnityAction restart_action;
    private UnityAction quit_action;
    private bool scale_text = false;


    // Use this for initialization
    new void Start () {
        base.Start();
        this.current_score = 0.0f;
        this.running = true;
        this.initializeGameOverPanel();
        StartCoroutine("getData");
    }
	
	// Update is called once per frame
	void Update () {
        if (this.running) this.updateScore();
        if (this.scale_text)
        {
            this.scaleText();
        }
    }

    private void scaleText()
    {
        if (Tools.BestFitBalance(this.restart_button.text, this.quit_button.text))
        {
            this.scale_text = false;
        }
    }

    private void initializeGameOverPanel()
    {
        this.restart_button = new UIButton(this.restart_go, "Restart", this.restart);
        this.quit_button = new UIButton(this.quit_go, "Quit", this.quit);
        this.send_button = new UIButton(this.send_go, "Send", this.saveScore);
        this.setGameOverPanel(false);
    }

    private void setGameOverPanel(bool status)
    {
        if (this.game_over_panel != null)
        {
            this.game_over_panel.SetActive(status);
            this.scale_text = status;
        }
        else Debug.LogError("Game over panel not set!");
    }

    void stop()
    {
        this.running = false;
    }
    void start()
    {
        this.running = true;
    }

    int currentScore()
    {
        return ((int)Math.Floor(current_score));
    }

    void updateScore()
    {
        current_score += Time.deltaTime;
        this.score.text = this.currentScore().ToString();
    }


    IEnumerator getData()
    {
        WWW www = new WWW(restUrl+ "/limit/" + LIMIT.ToString());   // UTF-8 encoded json file on the server
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
        for (int i = 0; i < ScoreController.LIMIT && i < scores.Count; ++i)
        {
            list += i+1 + ". " + scores[i].score + ": " + scores[i].name + ", ";
        }
        list = list.TrimEnd(' ');
        list = list.TrimEnd(',');
        this.list.text = list;
    }

    public void saveScore()
    {
        int score = this.currentScore();
        string name = this.username.text;
        this.send_button.Interactable = false;
        this.saveScore(score, name);
    }

    void saveScore(int score, string name)
    {
        StartCoroutine(this.sendScore(score, name));
    }

    IEnumerator sendScore(int score, string name)
    {
        string url = restUrl + "/create?name=" + WWW.EscapeURL(name) +
            "&score=" + WWW.EscapeURL(score.ToString()) + "";
        Debug.Log(url);
        WWW www = new WWW(url);
        yield return www;
        if (string.IsNullOrEmpty(www.error))
        {
            Debug.Log("sendData - OK");
            this.send_button.Interactable = false;
        }
        else
        {
            Debug.Log(www.error);
            this.send_button.Interactable = true;
        }
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
                if (scores.Count >= ScoreController.LIMIT) break;
            }
        }
        return scores;
    }

    public void gameOver()
    {
        this.onGameOver();
    }

    private void onGameOver()
    {
        this.stop();
        this.showGameOver();
    }

    private void showGameOver()
    {
        this.setGameOverPanel(true);
    }

    public void restart()
    {
        this.onRestart();
    }

    private void onRestart()
    {
        this.setGameOverPanel(false);
        GameController.Restart();
    }

    public void quit()
    {
        this.onQuit();
    }

    private void onQuit()
    {
        this.setGameOverPanel(false);
        GameController.Quit();
    }

    public override void onResolutionChanged()
    {
        this.scale_text = true;
    }

}
