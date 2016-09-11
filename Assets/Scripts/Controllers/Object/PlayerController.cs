using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : ObjectController {

    private ShipController ship;
    public PlayerData data;
    protected new void Awake()
    {
        base.Awake();
        this.data = new PlayerData();
        this.name = PlayerData.name;
        GameObject ship_prefab = (GameObject)Resources.Load("Prefabs/Ship", typeof(GameObject));
        GameObject ship_game_object = Instantiate(ship_prefab);
        ship_game_object.SetActive(true);
        ship_game_object.transform.parent = this.transform;
        this.ship = ship_game_object.GetComponent<ShipController>();
        if (this.ship == null) Debug.LogError("No ShipController for the PlayerController. Check the GameObject for missing Script!");
        this.ship.sprite_renderer.color = Color.red;
        this.ship.toMiddleOfScreen();
        this.ship.data.health = 4; // Players ship can take 4 hits
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
    }

	// Update is called once per frame
	void Update () {
        //test_movement();
    }

    void test_movement()
    {
        int direction = Random.Range(0, 360);
        this.ship.move(direction, 0.1f);
    }

    public void positionChanged(Vector3 new_position)
    {
        new_position.z = 0;
        this.ship.move(new_position);
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        Debug.Log(col.gameObject.name);
        if (col.gameObject.name == "Obstacle")
        {
            Destroy(col.gameObject);
            Destroy(this.gameObject);
            Scene loadedLevel = SceneManager.GetActiveScene();
            SceneManager.LoadScene(loadedLevel.buildIndex);
        }
    }

    public void shipDestroyed()
    {
        Scene loadedLevel = SceneManager.GetActiveScene();
        SceneManager.LoadScene(loadedLevel.buildIndex);
    }
}
