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
        int axis = Random.Range(0, 2);
        int side = Random.Range(0, 2);
        float place = Random.Range(0f, 1f);
        int direction_min = 0;
        int direction_max = 361;
        if(axis == 0)
        {
            direction_min = 0;
            direction_max = 181;
        }
        else
        {
            direction_min = 90;
            direction_max = 271;
        }
        if(side + axis == 1)
        {
            direction_min += 180;
            direction_max += 180;
        }

        this.data.direction = Random.Range(direction_min, direction_max);

        float x = (axis == 1) ? (float) side : place;
        float y = (axis == 0) ? (float) side : place;
        Vector3 position = this.MainCamera.ViewportToWorldPoint(new Vector3(x, y, 0f));
        position.z = 1;
        this.transform.position = position;
        this.data.speed = Random.Range(Obstacle.SPEED_MIN, Obstacle.SPEED_MAX);
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