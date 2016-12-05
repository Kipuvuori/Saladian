using UnityEngine;
using UnityEngine.SceneManagement;

public class EnemyController : ObjectController
{

    private GameObject health_panel;
    public ShipController ship;
    public EnemyData data;
    private bool running = false;
    private PlayerController player_to_hunt;
    float ai_run_cycle = 0.0f;
    float ai_tick = 0.1f;
    float ai_shoot_cycle = 0.0f;
    float ai_shoot_between = 0.1f;
    protected new void Awake()
    {
        base.Awake();
        this.data = new EnemyData();
        this.name = EnemyData.name;
        GameObject ship_prefab = (GameObject)Resources.Load("Prefabs/Ship", typeof(GameObject));
        GameObject ship_game_object = Instantiate(ship_prefab);
        ship_game_object.SetActive(true);
        ship_game_object.transform.parent = this.transform;
        this.ship = ship_game_object.GetComponent<ShipController>();
        if (this.ship == null) Debug.LogError("No ShipController for the EnemyController. Check the GameObject for missing Script!");
        else
        {
            this.ship.sprite_renderer.color = Color.green;
            this.ship.toMiddleOfScreen();
            this.ship.data.health = 1; // Enenmy ship can take 1 hits
            this.ship.keep_inside_camera = false;
            this.ship.toCameraPoint(0.5f, 1.0f);
            this.ship.GetComponent<Rigidbody2D>().isKinematic = true;
        }
        running = true;
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
        if (this.running)
        {
            this.runAi(Time.deltaTime);
            if (this.ai_shoot_cycle >= this.ai_shoot_between)
            {
                this.shoot();
                this.ai_shoot_cycle = 0.0f;
            }
        }
    }

    void runAi(float deltaTime)
    {
        this.ai_run_cycle += deltaTime;
        if (this.ai_run_cycle < ai_tick) return;
        this.ai_run_cycle = 0.0f;
        this.aiMove(deltaTime);
        this.aiShoot(deltaTime);
    }

    void aiMove(float deltaTime)
    {
        if (this.player_to_hunt == null || this.player_to_hunt.ship == null)
        {
            this.setPlayerToHunt();
            return;
        }
        Vector2 player_position = this.player_to_hunt.ship.transform.position;
        Vector2 my_position = this.ship.transform.position;

        Vector2 movement = Vector2.MoveTowards(my_position, player_position, this.data.speed*CameraController.scale);

        this.ship.move(movement, false, true);
    }

    void aiShoot(float deltaTime)
    {
        this.ai_shoot_cycle += deltaTime;
        if(this.ai_shoot_cycle >= this.ai_shoot_between)
        {
            this.shoot();
            this.ai_shoot_cycle = 0.0f;
        }
    }

    void setPlayerToHunt()
    {
        this.player_to_hunt = FindObjectOfType<PlayerController>();
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
        if(this.ship.data.health <= 0) running = false;
    }

    public void shipDestroyed()
    {
        this.destroy();
    }

    public void shoot()
    {
        this.ship.shoot();
    }
}
