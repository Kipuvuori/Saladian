using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

public class SettingsController : SceneController {

    public GameObject return_go;
    private UIButton return_button;

    public GameObject list;

    protected new void Awake()
    {
        base.Awake();
        this.addMainCamera();
        this.addInputs();
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.resolution = this.camera_controller.resolution;
        this.return_button = new UIButton(this.return_go, "Return", LeaderboardController.Quit);
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
        if (!this.resolution.Equals(this.camera_controller.resolution))
        {
            this.onResolutionChanged();
            this.resolution = this.camera_controller.resolution;
        }

    }

    public new static void Quit()
    {
        SceneManager.LoadScene("Menu");
    }

    private void addMainCamera()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/MenuCamera", typeof(GameObject));
        LeaderboardController.Camera = Instantiate(prefab);
        this.camera_controller = LeaderboardController.Camera.GetComponent<CameraController>();
    }

    public override void onResolutionChanged()
    {
        this.list.GetComponent<GridController>().onResolutionChanged();
		if(this.camera_controller != null) this.camera_controller.onResolutionChanged ();

    }
}
