using UnityEngine;
using System.Collections;

public class MovementController : ObjectController
{
    private const int full_cirle = 360;

    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public Vector3 currentLocations()
    {
        return transform.position;
    }

    public Quaternion currentRotation()
    {
        return transform.rotation;
    }

    public Vector3 move(int direction, float distance = 1.0f)
    {
        
        if (distance < 0) direction -= full_cirle / 2; // If distance is negative we go to opposite direction.
        else if (distance == 0) return this.currentLocations(); // If distance is zero we stay put.
        distance = Mathf.Abs(distance); // Distance is always positive

        // Setting directional degrees to 0 - 360
        while (direction < 0) direction += full_cirle;
        while (direction > full_cirle) direction -= full_cirle;
        //transform.Rotate(direction, Space.World);
        Vector3 current_rotation = new Vector3(0, 0, direction);
        this.transform.localEulerAngles = current_rotation;
        this.transform.position += transform.right * distance;
        return this.currentLocations();
    }

    public void toMiddleOfScreen()
    {
        Camera camera = CameraController.MainCamera;
        float near_clip_plane = camera.nearClipPlane;
        Vector3 screen_point = new Vector3(Screen.width / 2, Screen.height / 2, near_clip_plane);
        Vector3 camera_position = camera.ScreenToWorldPoint(screen_point);
        camera_position.z = this.transform.position.z;
        transform.position = camera_position;
    }
}
