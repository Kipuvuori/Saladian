using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using UnityEngine.UI;

public class SceneController : Controller
{
    private GameObject input;
    public static GameObject Camera;
    protected CameraController camera_controller;
    protected CameraResolution resolution;

    protected new void Awake()
    {
        base.Awake();

    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
    }

    public static void Restart()
    {
        string scene = GetSceneName();
        if (scene == "Main") GameController.Restart();
        else if (scene == "Menu") MenuController.Restart();
        else if (scene == "Leaderboard") LeaderboardController.Restart();
    }
    public static void Quit()
    {
        string scene = GetSceneName();
        if (scene == "Main") GameController.Quit();
        else if (scene == "Menu") MenuController.Quit();
        else if (scene == "Leaderboard") LeaderboardController.Quit();
    }

    public static string GetSceneName()
    {
        return SceneManager.GetActiveScene().name;
    }
    protected void addInputs()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Input", typeof(GameObject));
        this.input = Instantiate(prefab);
    }

    private void setTopList(List<Score> scores)
    {
        int no = 1;
        for (int i = 0; i < scores.Count; ++i)
        {
            addTextToList(no.ToString());
            addTextToList(scores[i].score.ToString());
            addTextToList(scores[i].name.ToString());
            ++no;
        }
    }

    private void addTextToList(string text)
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/ListObject", typeof(GameObject));
        GameObject listObject = Instantiate(prefab);
        listObject.transform.parent = this.gameObject.transform;
        Text listText = listObject.GetComponent<Text>();
        listText.text = text;
    }
}
