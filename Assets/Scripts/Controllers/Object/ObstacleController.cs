using UnityEngine;

public class ObstacleController : MovementController
{
    private SpriteRenderer sprite_renderer;
    private ObstacleData data;
    private Rigidbody2D rigid_body;

    protected new void Awake()
    {
        base.Awake();
        this.transform.parent = GameController.ObstacleMama.transform;

        this.data = new ObstacleData();
        Vector3 position = this.MainCamera.ViewportToWorldPoint(this.data.start_viewport);
        position.z = 0;
        this.name = ObstacleData.name;


        this.transform.position = position;
        this.sprite_renderer = GetComponent<SpriteRenderer>();
        this.sprite_renderer.sprite = Resources.Load<Sprite>("Sprites/Obstacle");

        this.transform.localEulerAngles = this.data.rotation;

        this.rigid_body = this.GetComponent<Rigidbody2D>();
        this.rigid_body.AddForce(this.transform.right * this.data.speed);
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
        this.data.last_move_time += Time.deltaTime;
        if(this.data.last_move_time >= this.data.speed)
        {
            //this.move(this.data.direction, Obstacle.DISTANCE, false);
            
            this.data.last_move_time = 0;
        }
        this.isOutside();
    }


    void isOutside()
    {
        /*Vector3 position = this.MainCamera.WorldToViewportPoint(this.transform.position);
        
        float x = position.x;
        float y = position.x;
        if (x + ObstacleData.OUTSIDE_BUFFER < 0 || x - ObstacleData.OUTSIDE_BUFFER > 1 || y + ObstacleData.OUTSIDE_BUFFER < 0 || y - ObstacleData.OUTSIDE_BUFFER > 1) Destroy(this);*/
    }

    public void OnBecameInvisible()
    {
        Destroy(gameObject);
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        this.takeDamage();
    }

    void takeDamage(int amount = 1)
    {
        this.data.health -= amount;
        if (this.data.health <= 0)
        {
            this.destroy();
        }
    }

}