using UnityEngine;

public class ObstacleController : MovementController
{
    private SpriteRenderer sprite_renderer;
    private Camera MainCamera;
    private Obstacle data;

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.data = new Obstacle();
        this.MainCamera = CameraController.MainCamera;
        Vector3 position = this.MainCamera.ViewportToWorldPoint(this.data.start_viewport);
        position.z = 1;
        this.transform.position = position;
        this.sprite_renderer = GetComponent<SpriteRenderer>();
        this.sprite_renderer.sprite = Resources.Load<Sprite>("Sprites/Obstacle");
    }

    // Update is called once per frame
    void Update()
    {
        this.data.last_move_time += Time.deltaTime;
        if(this.data.last_move_time >= this.data.speed)
        {
            this.move(this.data.direction, Obstacle.DISTANCE, false);
            this.isOutside();
            this.data.last_move_time = 0;
        }
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
}