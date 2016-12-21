using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

class REST
{
    private const string restUrl = "http://vanillasky.ddns.me:444";
    public const int LIMIT = 3;

    static public IEnumerator getScores(int limit = -1, UnityAction<List<Score>> action = null)
    {
        limit = (limit >= 0) ? limit : REST.LIMIT;
        WWW www = new WWW(restUrl + "/limit/" + limit.ToString());   // UTF-8 encoded json file on the server
        yield return www;
        if (string.IsNullOrEmpty(www.error))
        {
            if (action != null) action.Invoke(REST.Processjson(www.text));
        }
        else Debug.Log(www.error);
    }

    static public IEnumerator sendScore(int score, string name, UnityAction<bool> action = null)
    {
        string url = restUrl + "/create?name=" + WWW.EscapeURL(name) +
            "&score=" + WWW.EscapeURL(score.ToString()) + "";
        Debug.Log(url);
        WWW www = new WWW(url);
        yield return www;
        bool success = string.IsNullOrEmpty(www.error);
        if (success) Debug.Log("sendData - OK");
        else Debug.Log(www.error);
         if (action != null) action(success);
    }


    static public List<Score> Processjson(string jsonString)
    {
        jsonString = jsonString.TrimStart('[');
        jsonString = jsonString.TrimEnd(']');
        string[] jsons = jsonString.Split('}');
        List<Score> scores = new List<Score>();
        string str = "";
        foreach (string json in jsons)
        {
            str = json.TrimStart(',') + "}";
            if (str.Length > 5)
            {
                scores.Add(JsonUtility.FromJson<Score>(str));
            }
        }
        return scores;
    }
}
