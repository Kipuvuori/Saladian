using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

public class LeaderboardController : SceneController {

    public GameObject return_go;
    private UIButton return_button;

    public GameObject list;

    protected new void Awake()
    {
        base.Awake();
        this.addMainCamera();
        this.addInputs();
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.resolution = this.camera_controller.resolution;
        this.return_button = new UIButton(this.return_go, "Return", LeaderboardController.Quit);
        StartCoroutine(REST.getScores(10, this.setTopList));
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
        if (!this.resolution.Equals(this.camera_controller.resolution))
        {
            this.onResolutionChanged();
            this.resolution = this.camera_controller.resolution;
        }

    }

    public new static void Quit()
    {
        SceneManager.LoadScene("Menu");
    }

    private void addMainCamera()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/MenuCamera", typeof(GameObject));
        LeaderboardController.Camera = Instantiate(prefab);
        this.camera_controller = LeaderboardController.Camera.GetComponent<CameraController>();
    }

    private void setTopList(List<Score> scores)
    {
        int no = 1;
        this.addTextToList("#");
        this.addTextToList("Score");
        this.addTextToList("Name");

        for (int i = 0; i < scores.Count; ++i)
        {
            this.addTextToList(no.ToString());
            this.addTextToList(scores[i].score.ToString());
            this.addTextToList(Tools.FormatName(scores[i].name, ScoreController.MAX_NAME_LENGTH));
            ++no;
        }
        this.list.GetComponent<GridController>().resize();
    }

    private void addTextToList(string text)
    {
        
        GameObject prefab = (GameObject)Resources.Load("Prefabs/LeaderboarText", typeof(GameObject));
        GameObject list_text = Instantiate(prefab);
        list_text.transform.SetParent(this.list.transform);
        Text leaderboard_text = list_text.GetComponent<Text>();
        leaderboard_text.text = text;
    }

    public override void onResolutionChanged()
    {
        this.list.GetComponent<GridController>().onResolutionChanged();
    }
}
