using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LeaderboardController : SceneController {

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
        this.return_button = new UIButton(this.return_go, "Return", LeaderboardController.Quit);
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
    }

    public new static void Quit()
    {
        SceneManager.LoadScene("Menu");
    }

    private void addMainCamera()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/MenuCamera", typeof(GameObject));
        GameController.Camera = Instantiate(prefab);
    }
}
