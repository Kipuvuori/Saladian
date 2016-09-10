using UnityEngine;

public class BackgroundController : UIController
{
    private Camera MainCamera;
    private SpriteRenderer sprite_renderer;
    private const int z = 100;
    public BackgroundData data;
    protected new void Awake()
    {
        base.Awake();
        this.sprite_renderer = GetComponent<SpriteRenderer>();
        this.MainCamera = GameController.Camera.GetComponent<Camera>();
        this.data = new BackgroundData();
        this.name = BackgroundData.name;
        this.Init();
    }

    // Use this for initialization
    protected new void Start () {
        base.Start();
        
	}

    private void Init()
    {
        this.sprite_renderer.sprite = Resources.Load<Sprite>("Sprites/Square");
        this.sprite_renderer.color = Color.black; // Setting bacground sprite color to black
        this.Resize();
        this.Reposition();
    }
	
	// Update is called once per frame
	void Update () {
        //Reposition();
	}

    /*
     * Function Resize
     * for resizing sprite to fit camera.           
    */
    private void Resize()
    {
        float camera_height = (float)this.MainCamera.pixelHeight;
        float camera_width = (float)this.MainCamera.pixelWidth;

        float sprite_height = (float)this.sprite_renderer.sprite.bounds.size.x;
        float sprite_width = (float)this.sprite_renderer.sprite.bounds.size.y;

        float difference_height = camera_height / sprite_height;
        float difference_width = camera_width / sprite_width;

        Vector3 scale = new Vector3(difference_height, difference_width);

        transform.localScale = scale;
    }

    /*
     * Function Reposition
     * for repositioning sprite to middle of the camera.           
    */
    private void Reposition()
    {
        float near_clip_plane = this.MainCamera.nearClipPlane;
        Vector3 screen_point = new Vector3(Screen.width/2, Screen.height/2, near_clip_plane);
        Vector3 camera_position = this.MainCamera.ScreenToWorldPoint(screen_point);
        camera_position.z = z;
        transform.position = camera_position;
    }
}
