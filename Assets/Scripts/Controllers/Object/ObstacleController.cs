using UnityEngine;

public class ObstacleController : MovementController
{
    private SpriteRenderer sprite_renderer;
    private Obstacle data;
    private Rigidbody2D rigid_body;

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.data = new Obstacle();
        Vector3 position = this.MainCamera.ViewportToWorldPoint(this.data.start_viewport);
        position.z = 0;
        this.gameObject.name = Obstacle.name;
        

        this.transform.position = position;
        this.sprite_renderer = GetComponent<SpriteRenderer>();
        this.sprite_renderer.sprite = Resources.Load<Sprite>("Sprites/Obstacle");

        this.transform.localEulerAngles = this.data.rotation;

        this.rigid_body = this.GetComponent<Rigidbody2D>();
        this.rigid_body.AddForce(this.transform.right * this.data.speed);
    }

    // Update is called once per frame
    void Update()
    {
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
        Vector3 position = this.MainCamera.WorldToViewportPoint(this.transform.position);
        
        float x = position.x;
        float y = position.x;
        if (x + Obstacle.OUTSIDE_BUFFER < 0 || x - Obstacle.OUTSIDE_BUFFER > 1 || y + Obstacle.OUTSIDE_BUFFER < 0 || y - Obstacle.OUTSIDE_BUFFER > 1) Destroy(this);
    }

    public void OnBecameInvisible()
    {
        Destroy(gameObject);
    }

    void OnCollisionEnter2D(Collision2D col)
    {
        Debug.Log(col.gameObject.name);
    }

}