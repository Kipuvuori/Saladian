using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ScoreController : MonoBehaviour {

    public Text score;
    private const string restUrl = "www.hetekivi.com/Saladian/index.php";

	// Use this for initialization
	void Start () {
        this.score.text = getData();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    string getData()
    {
        WWW www = new WWW(restUrl);
        return www.text;
    }

    static void sendScore(int score, string name)
    {

    }
}
