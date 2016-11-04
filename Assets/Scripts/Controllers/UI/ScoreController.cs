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
    public Text game_over_title;
    public Text game_over_list;
    private UIButton restart_button;
    private UIButton quit_button;
    private UIButton send_button;

    public GameObject restart_go;
    public GameObject quit_go;
    public GameObject send_go;
    public InputField username;

    public float current_score;
    private bool running;
    private UnityAction restart_action;
    private UnityAction quit_action;
    private bool scale_text = false;

    const int MAX_NAME_LENGTH = 20;


    // Use this for initialization
    new void Start () {
        base.Start();
        this.current_score = 0.0f;
        this.running = true;
        this.initializeGameOverPanel();
        StartCoroutine(REST.getScores(REST.LIMIT, this.updateScoreList));
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
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
        this.quit_button = new UIButton(this.quit_go, "Quit to menu", this.quit);
        this.send_button = new UIButton(this.send_go, "Submit score", this.saveScore);
        this.game_over_title.text = "Game Over";
        this.setGameOverPanel(false);
    }

    private void setTopList(List<Score> scores)
    {
        string list = "";
        this.game_over_list.text = list;
        bool ownScoreAdded = false;
        int no = 1;
        for (int i = 0; i < scores.Count; ++i)
        {
            if (!ownScoreAdded && scores[i].score < this.currentScore())
            {
                list += no + ". " + this.currentScore() + ": YOU\n";
                ownScoreAdded = true;
                ++no;
            }
            list += no + ". " + scores[i].score + ": " + this.formatName(scores[i].name) + "\n";
            ++no;
        }
        if (!ownScoreAdded)
        {
            list += "XX. " + this.currentScore() + ": YOU\n";
            ++no;
        }
        list = list.TrimEnd('\n');
        this.game_over_list.text = list;
    }

    private string formatName(string name)
    {
        int lenght = name.Length;
        if(lenght > ScoreController.MAX_NAME_LENGTH)
        {
            name = name.Substring(0, ScoreController.MAX_NAME_LENGTH - 3) + "...";
        }
        return name;
    }

    private void setGameOverPanel(bool status)
    {
        if (this.game_over_panel != null)
        {
            this.game_over_panel.SetActive(status);
            this.scale_text = status;
            StartCoroutine(REST.getScores(10, this.setTopList));
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


   

    private void updateScoreList(List<Score> scores)
    {
        string list = "";
        this.list.text = list;
        for (int i = 0; i < scores.Count; ++i)
        {
            list += i + 1 + ". " + scores[i].score + ": " + this.formatName(scores[i].name) + ", ";
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
        StartCoroutine(REST.sendScore(score, name, this.handleSend));
    }

    void sendScore()
    {
        string name = "Santeri Hetekivi";
        int score = this.currentScore();
        REST.sendScore(score, name, this.handleSend);
    }

    void handleSend(bool success)
    {
        this.send_button.Interactable = !success;
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
