using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SceneController : Controller
{
    private GameObject input;
    public static GameObject Camera;

    protected new void Awake()
    {
        base.Awake();

    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
    }

    public static void Restart()
    {
        string scene = GetSceneName();
        if (scene == "Main") GameController.Restart();
        else if (scene == "Menu") MenuController.Restart();
    }
    public static void Quit()
    {
        string scene = GetSceneName();
        if (scene == "Main") GameController.Quit();
        else if (scene == "Menu") MenuController.Quit();
    }

    public static string GetSceneName()
    {
        return SceneManager.GetActiveScene().name;
    }
    protected void addInputs()
    {
        GameObject prefab = (GameObject)Resources.Load("Prefabs/Input", typeof(GameObject));
        this.input = Instantiate(prefab);
    }
}
