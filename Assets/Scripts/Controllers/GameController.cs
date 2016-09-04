using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class GameController : Controller
{
    private GameElement main_camera;

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.addMainCamera();
    }
	
	// Update is called once per frame
	void Update () {
	
	}

    private void addMainCamera()
    {
        GameObject game_object = new GameObject("Main Camera");
        Camera camera = (Camera) game_object.AddComponent(typeof(Camera));
        CameraController controller = (CameraController) game_object.AddComponent(typeof(CameraController));
        game_object.tag = "MainCamera";
        game_object.transform.position = new Vector3(0, 0, -10);
        camera.orthographic = true;
        camera.depth = -1;
        camera.orthographicSize = 5;
        Dictionary<string, Component> components = new Dictionary<string, Component>();
        components.Add("camera", camera);
        this.main_camera = new GameElement(game_object, controller, components);
    }
}
