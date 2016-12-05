using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : ObjectController {

    private GameObject health_panel;
    public ShipController ship;
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
        else
        {
            this.ship.toMiddleOfScreen();
            this.ship.data.health = 4000; // Players ship can take 4 hits
            this.ship.keep_inside_camera = true;
            this.ship.GetComponent<Rigidbody2D>().isKinematic = true;
        }
        
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
        if (health_panel == null) this.setHealthPanel();
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
        //test_movement();
        if (health_panel == null) this.setHealthPanel();
    }

    void setHealthPanel()
    {
        this.health_panel = GameObject.Find("HealthPanel");
        this.setHealth();
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

    public void shipTookDamage(int amount)
    {
        this.takeHealth(amount);
    }

    public bool setHealth()
    {
        if (health_panel == null)
        {
            Debug.Log("No health panel set!");
            return false;
        }
        int child_count = this.health_panel.transform.childCount;
        this.takeHealth(child_count);

        int health = this.ship.data.health;
        if (health <= 0) return true;

        for (int i = 0; i < health; i++)
        {
            this.addHealth();
        }
        return true;
    }

    public void addHealth()
    {
        if (health_panel == null)
        {
            Debug.Log("No health panel set!");
            return;
        }
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Hearth", typeof(GameObject));
        GameObject list_text = Instantiate(prefab);
        list_text.transform.SetParent(this.health_panel.transform);
    }

    public bool takeHealth(int amount)
    {
        if (health_panel == null)
        {
            Debug.Log("No health panel set!");
            return false;
        }
        while(amount > 0 && this.health_panel.transform.childCount > 0)
        {
            Destroy(this.health_panel.transform.GetChild(0).gameObject);
            --amount;
        }
        return true;
    }

    public void shipDestroyed()
    {
        GameController.GameOver();
    }

    public void shoot()
    {
        this.ship.shoot();
    }
}
