using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuController : SceneController {
	
	public Image background_image;
	public GameObject start_game_go;
	private UIButton start_game_button;

	public GameObject quit_game_go;
	private UIButton quit_game_button;

    public GameObject leaderboard_go;
    private UIButton leaderboard_button;

    protected new void Awake(){
		base.Awake();
        this.addMainCamera();
        this.addInputs();
    }

    // Use this for initialization
    protected new void Start () {
		base.Start ();
		Sprite sprite = Resources.Load<Sprite>("Sprites/explosion");
		//this.background_image.sprite = sprite;
		//this.background_image.color = Color.red;
		this.start_game_button = new UIButton(this.start_game_go,"Start game", this.start_game);
		this.quit_game_button = new UIButton(this.quit_game_go, "Quit game", MenuController.Quit);
        this.leaderboard_button = new UIButton(this.leaderboard_go, "Leaderboard", this.open_leaderboard);
    }

    // Update is called once per frame
    protected new void Update () {
		base.Update ();
	}

	private void start_game(){
		SceneManager.LoadScene ("Main");
	}

    private void open_leaderboard()
    {
        SceneManager.LoadScene("Leaderboard");
    }

    public new static void Quit()
	{
		Application.Quit();
		Debug.Log ("quit");
	}
    private void addMainCamera()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/MenuCamera", typeof(GameObject));
        GameController.Camera = Instantiate(prefab);
    }

}
