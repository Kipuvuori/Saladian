﻿using UnityEngine;
using System.Collections;

public class KeyboardController : InputController {

    protected new void Awake()
    {
        base.Awake();
    }

    // Use this for initialization
    protected new void Start () {
    }

    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
        if (Input.GetKeyDown(KeyCode.Escape)) { this.quit(); }
    }
}
