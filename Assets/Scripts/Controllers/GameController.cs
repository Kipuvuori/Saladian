using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class GameController : Controller
{
    private GameElement main_camera;
    private GameElement background;
    private GameElement player;
    private Dictionary<GameElement, GameElement> ships;
    private UserInput input;
    private List<GameElement> obstacles;
    private GameObject obstacle_mama;

    public const string CAMERA = "camera";
    public const string SPRITE = "sprite";
    public const string COLLIDER = "collider";

    public float last_obstacle = 0;

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.ships = new Dictionary<GameElement, GameElement>();
        this.obstacles = new List<GameElement>();
        this.obstacle_mama = new GameObject("Obstacles");
        this.addElements();
        this.addInputs();
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
        GameObject game_object = new GameObject("Main Camera");
        Camera camera = (Camera) game_object.AddComponent(typeof(Camera));
        CameraController controller = (CameraController)game_object.AddComponent(typeof(CameraController));
        Dictionary<string, Component> components = new Dictionary<string, Component>();
        components.Add(CAMERA, camera);
        this.main_camera = new GameElement(game_object, controller, components);
    }

    private void addBackground()
    {
        GameObject game_object = new GameObject("Background");
        SpriteRenderer sprite = (SpriteRenderer)game_object.AddComponent(typeof(SpriteRenderer));
        BackgroundController controller = (BackgroundController)game_object.AddComponent(typeof(BackgroundController));
        Dictionary<string, Component> components = new Dictionary<string, Component>();
        components.Add(SPRITE, sprite);
        this.background = new GameElement(game_object, controller, components);
    }

    private void addPlayer()
    {
        GameObject ship_game_object = new GameObject("Player's Ship");
        SpriteRenderer ship_sprite = (SpriteRenderer)ship_game_object.AddComponent(typeof(SpriteRenderer));
        PolygonCollider2D collider = (PolygonCollider2D)ship_game_object.AddComponent(typeof(PolygonCollider2D));
        ShipController ship_controller = (ShipController)ship_game_object.AddComponent(typeof(ShipController));
        Dictionary<string, Component> ship_components = new Dictionary<string, Component>();
        ship_components.Add(SPRITE, ship_sprite);
        ship_components.Add(COLLIDER, collider);

        GameObject player_game_object = new GameObject("Player");
        PlayerController player_controller = (PlayerController)player_game_object.AddComponent(typeof(PlayerController));
        Dictionary<string, Component> player_components = new Dictionary<string, Component>();
        this.player = new GameElement(player_game_object, player_controller, player_components);

        ship_game_object.transform.parent = player_game_object.transform;

        this.ships.Add(this.player, new GameElement(ship_game_object, ship_controller, ship_components));
    }

    private void addInputs()
    {
        Dictionary<string, InputController> controllers = new Dictionary<string, InputController>();
        GameObject game_object = new GameObject("Input");

        Type type = typeof(MouseController);
        MouseController mouse_controller = (MouseController)game_object.AddComponent(typeof(MouseController));
        controllers.Add(type.FullName, mouse_controller);

        type = typeof(TouchController);
        TouchController touch_controller = (TouchController) game_object.AddComponent(typeof(TouchController));
        controllers.Add(type.FullName, touch_controller);

        this.input = new UserInput(game_object, controllers);
    }

    private void addObstacle()
    {
        GameObject game_object = new GameObject("Obstacle");
        game_object.transform.parent = this.obstacle_mama.transform;
        SpriteRenderer sprite = (SpriteRenderer)game_object.AddComponent(typeof(SpriteRenderer));
        ObstacleController controller = (ObstacleController)game_object.AddComponent(typeof(ObstacleController));
        Dictionary<string, Component> components = new Dictionary<string, Component>();
        components.Add(SPRITE, sprite);
        GameElement obstacle = new GameElement(game_object, controller, components);
        this.obstacles.Add(obstacle);
    }
}
