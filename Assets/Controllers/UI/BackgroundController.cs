using UnityEngine;
using System.Collections;

public class BackgroundController : MonoBehaviour {
    private Camera camera;
    private SpriteRenderer sprite_renderer;
	// Use this for initialization
	void Start () {
        this.sprite_renderer = GetComponent<SpriteRenderer>();
        this.camera = GameController.camera;
        this.Init();
	}

    private void Init()
    {
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
    void Resize()
    {
        float camera_height = (float)this.camera.pixelHeight;
        float camera_width = (float)this.camera.pixelWidth;

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
    void Reposition()
    {
        float near_clip_plane = this.camera.nearClipPlane;
        Vector3 screen_point = new Vector3(Screen.width/2, Screen.height/2, near_clip_plane);
        Vector3 camera_position = this.camera.ScreenToWorldPoint(screen_point);
        camera_position.z = -1;
        transform.position = camera_position;
    }
}
