using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TiledBackground : MonoBehaviour {

    public int textureSize = 64;

	// Use this for initialization
	void Start () {
        var newWidth = Mathf.Ceil(Screen.width / (textureSize * CameraController.scale));
        var newHeight = Mathf.Ceil(Screen.height / (textureSize * CameraController.scale));

        transform.localScale = new Vector3(newWidth*textureSize,newHeight * textureSize, 1);

        GetComponent<Renderer>().material.mainTextureScale = new Vector3(newWidth, newHeight, 1);
    }

}
