using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatedTexture : MonoBehaviour {

    public Vector2 speed = Vector2.zero;
    public Vector2 MaxSpeed = Vector2.zero;


    private Vector2 offset = Vector2.zero;
    private Material material;

	// Use this for initialization
	void Start () {
        material = GetComponent<Renderer>().material;

        offset = material.GetTextureOffset("_MainTex");
	}
	
	// Update is called once per frame
	void Update () {
        var nextSpeed = ScoreController.current_score / 100f;
        if (speed.y < nextSpeed && nextSpeed < MaxSpeed.y) {
            speed.y = nextSpeed;
        }
        offset += speed * Time.deltaTime;

        material.SetTextureOffset("_MainTex", offset);
	}
}
