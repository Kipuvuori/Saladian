using UnityEngine;
using System.Collections;

public class MovementController : ObjectController
{
    private const int full_cirle = 360;
    public Camera MainCamera;
    public bool keep_inside_camera;
    private SpriteRenderer sprite;
    private float diff_x;
    private float diff_y;
    private CameraController camera_controller;

    protected new void Awake()
    {
        base.Awake();
        this.keep_inside_camera = false;
        this.MainCamera = GameController.Camera.GetComponent<Camera>();
        this.camera_controller = GameController.Camera.GetComponent<CameraController>();
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
        this.sprite = this.GetComponent<SpriteRenderer>();
        if(this.sprite != null)
        {
            this.diff_x = this.sprite.bounds.size.x / 2;
            this.diff_y = this.sprite.bounds.size.y / 2;
        }
        
    }
	
	// Update is called once per frame
	protected new void Update () {
        base.Update();
        this.keepInsideCamera();
    }

    void keepInsideCamera()
    {
        if (this.sprite != null && this.keep_inside_camera && this.camera_controller != null)
        {
            this.transform.position = this.getConfinedPosition(this.transform.position);
        }
       
    }

    Vector3 getConfinedPosition(Vector3 position)
    {
        if(this.MainCamera != null)
        {
            Vector3 pos = this.MainCamera.WorldToViewportPoint(position);
            if (this.sprite != null)
            {
                float sprite_x = this.diff_x / this.MainCamera.orthographicSize;
                float sprite_y = this.diff_y / this.MainCamera.orthographicSize;
                pos.x = Mathf.Clamp(pos.x, sprite_x, 1 - sprite_x);
                pos.y = Mathf.Clamp(pos.y, sprite_y, 1 - sprite_y);

            }
            else
            {
                pos.x = Mathf.Clamp01(pos.x);
                pos.y = Mathf.Clamp01(pos.y);
            }
            position = this.MainCamera.ViewportToWorldPoint(pos);
        }
        return position;
    }

    public Vector3 currentPosition()
    {
        return transform.position;
    }

    public Quaternion currentRotation()
    {
        return transform.rotation;
    }

    public Vector3 move(int direction, float distance = 1.0f, bool confine_to_camera = true)
    {
        Vector3 current_position = this.currentPosition();
        if (distance < 0) direction -= full_cirle / 2; // If distance is negative we go to opposite direction.
        else if (distance == 0) return current_position; // If distance is zero we stay put.
        distance = Mathf.Abs(distance); // Distance is always positive

        // Setting directional degrees to 0 - 360
        while (direction < 0) direction += full_cirle;
        while (direction > full_cirle) direction -= full_cirle;
        //transform.Rotate(direction, Space.World);
        Vector3 current_rotation = new Vector3(0, 0, direction);
        this.transform.localEulerAngles = current_rotation;

        current_position = current_position + transform.right * distance;
        return move(current_position, confine_to_camera);
    }

    public Vector3 move(Vector3 position, bool confine_to_camera = true)
    {
        if(confine_to_camera)
        {
            position = this.getConfinedPosition(position);
        }
        this.transform.position = position;
        return position;
    }

    public void toMiddleOfScreen()
    {
        float near_clip_plane = this.MainCamera.nearClipPlane;
        Vector3 screen_point = new Vector3(Screen.width / 2, Screen.height / 2, near_clip_plane);
        Vector3 camera_position = this.MainCamera.ScreenToWorldPoint(screen_point);
        camera_position.z = this.transform.position.z;
        transform.position = camera_position;
    }
}
