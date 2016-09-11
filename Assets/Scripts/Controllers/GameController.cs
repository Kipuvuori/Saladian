using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class GameController : Controller
{
    public GameObject players_ship;
    public GameObject obstacle;

    public static GameObject Camera;
    private GameObject background;
    private GameObject player;
    private GameObject input;
    private List<GameObject> obstacles;
    public static GameObject ObstacleMama;

    public const string CAMERA = "camera";
    public const string SPRITE = "sprite";
    public const string COLLIDER = "collider";

    public float last_obstacle = 0;

    protected new void Awake()
    {
        base.Awake();
        this.obstacles = new List<GameObject>();
        GameController.ObstacleMama = new GameObject("Obstacles");
        this.addElements();
        this.addInputs();
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
       
    }
	
	// Update is called once per frame
	void Update () {
        this.last_obstacle += Time.deltaTime;
        if(this.last_obstacle >= 1)
        {
            this.addObstacle();
            this.last_obstacle = 0;
        }

    }

    private void addElements()
    {
        addMainCamera();
        addBackground();
        addPlayer();
    }

    private void addMainCamera()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Camera", typeof(GameObject));
        GameController.Camera = Instantiate(prefab);
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

    private void addInputs()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Input", typeof(GameObject));
        this.input = Instantiate(prefab);
    }

    private void addObstacle()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Obstacle", typeof(GameObject));
        this.obstacles.Add(Instantiate(prefab));
    }
}
