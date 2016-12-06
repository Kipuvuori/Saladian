using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameController : SceneController
{
    public GameObject players_ship;
    public GameObject obstacle;

    private GameObject background;
    private GameObject player;
    private List<GameObject> obstacles;
    public static GameObject ObstacleMama;

    private ScoreController score_controller;

    public const string CAMERA = "camera";
    public const string SPRITE = "sprite";
    public const string COLLIDER = "collider";

    public float last_obstacle = 0;
    private List<GameObject> enemies;
	public GameObject healthPanel;
    private const int SCORE_ENEMY_DIVIDER = 10;
    private int enemy_waves = 1;

    protected new void Awake()
    {
        base.Awake();
        this.obstacles = new List<GameObject>();
        this.enemies = new List<GameObject>();
        GameController.ObstacleMama = new GameObject("Obstacles");
        this.score_controller = this.transform.GetComponent<ScoreController>();
        this.addElements();
        this.addInputs();
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.resolution = this.camera_controller.resolution;
		this.onResolutionChanged ();
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
        this.last_obstacle += Time.deltaTime;
        if(this.last_obstacle >= 1)
        {
            this.addObstacle();
            this.last_obstacle = 0;
        }

        if (!this.resolution.Equals(this.camera_controller.resolution))
        {
            this.onResolutionChanged();
            this.resolution = this.camera_controller.resolution;
        }

        double enemies_score = enemy_waves * SCORE_ENEMY_DIVIDER;
        if (ScoreController.current_score > enemies_score)
        {
            int number_of_enemies = Mathf.FloorToInt(ScoreController.current_score / SCORE_ENEMY_DIVIDER);
            Debug.Log(number_of_enemies);
            for(int foo = 1; foo <= number_of_enemies; ++foo) this.addEnemy();
            ++this.enemy_waves;
        }
    }

    private void addElements()
    {
        addMainCamera();
        //addBackground();
        addPlayer();
    }

    private void addMainCamera()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Camera", typeof(GameObject));
        GameController.Camera = Instantiate(prefab);
        this.camera_controller = GameController.Camera.GetComponent<CameraController>();
    }

    private void addBackground()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Background", typeof(GameObject));
        this.background = Instantiate(prefab);
    }

    private void addPlayer()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Player", typeof(GameObject));
        this.player = Instantiate(prefab);
    }

    private void addObstacle()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Obstacle", typeof(GameObject));
        this.obstacles.Add(Instantiate(prefab));
    }

    private void addEnemy()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Enemy", typeof(GameObject));
        this.enemies.Add(Instantiate(prefab));
    }

    public static bool GameOver()
    {
        GameObject game = GameObject.Find("Game");
        if (game == null) return false;
        GameController game_controller = game.GetComponent<GameController>();
        if (game_controller == null) return false;
        game_controller.gameOver();
        return true;
    }

    public void gameOver()
    {
        this.onGameOver();
    }

    private void onGameOver()
    {
        this.score_controller.gameOver();
    }

    public new static void Restart()
    {
        SceneManager.LoadScene("Main");
    }

    public new static void Quit()
    {
		SceneManager.LoadScene("Menu");
    }

    public override void onResolutionChanged()
    {
        this.score_controller.onResolutionChanged();
		if(this.camera_controller != null) this.camera_controller.onResolutionChanged ();
		foreach (GameObject ob in this.obstacles) {
			if(ob != null && ob.gameObject != null) ob.GetComponent<ObstacleController>().onResolutionChanged ();
		}
		this.healthPanel.GetComponent<GridController>().onResolutionChanged();
        //this.background.GetComponent<BackgroundController>().onResolutionChanged();
    }
}
