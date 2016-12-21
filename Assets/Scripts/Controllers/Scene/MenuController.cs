using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuController : SceneController {
	
	public Image background_image;
	public GameObject start_game_go;
	private UIButton start_game_button;

    public GameObject settings_go;
    private UIButton settings_button;

    public GameObject leaderboard_go;
    private UIButton leaderboard_button;

    public GameObject quit_game_go;
    private UIButton quit_game_button;


    public GameObject menuPanel;

    protected new void Awake(){
		base.Awake();
        this.addMainCamera();
        this.addInputs();
    }

    // Use this for initialization
    protected new void Start () {
		base.Start ();
		this.resolution = this.camera_controller.resolution;
		Sprite sprite = Resources.Load<Sprite>("Sprites/explosion");
        //this.background_image.sprite = sprite;
        //this.background_image.color = Color.red;
        string crown = '\u2654'.ToString();
        string leaderboard_text = crown + " Leaderboard " + crown;
        this.start_game_button = new UIButton(this.start_game_go,"Start game", this.start_game);
        this.leaderboard_button = new UIButton(this.leaderboard_go, leaderboard_text, this.open_leaderboard);
        this.settings_button = new UIButton(this.settings_go, "Settings", this.open_settings);
        this.quit_game_button = new UIButton(this.quit_game_go, "Quit game", MenuController.Quit);
    }

    // Update is called once per frame
    protected new void Update () {
		base.Update ();
		if (!this.resolution.Equals(this.camera_controller.resolution))
		{
			this.onResolutionChanged();
			this.resolution = this.camera_controller.resolution;
		}
	}

	private void start_game(){
		SceneManager.LoadScene ("Main");
	}

    private void open_leaderboard()
    {
        SceneManager.LoadScene("Leaderboard");
    }

    private void open_settings()
    {
        SceneManager.LoadScene("Settings");
    }

    public new static void Quit()
	{
		Application.Quit();
		Debug.Log ("quit");
	}
    private void addMainCamera()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/MenuCamera", typeof(GameObject));
        MenuController.Camera = Instantiate(prefab);
		this.camera_controller = MenuController.Camera.GetComponent<CameraController>();

    }

	public override void onResolutionChanged()
	{	
		if (this.menuPanel != null) {
			this.menuPanel.GetComponent<GridController>().onResolutionChanged();
		}
		if(this.camera_controller != null) this.camera_controller.onResolutionChanged ();

	}

}
