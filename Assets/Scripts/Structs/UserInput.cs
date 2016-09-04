using UnityEngine;
using System.Collections.Generic;

public struct UserInput {
    public GameObject game_object;
    public Dictionary<string, InputController> controllers;
    public UserInput(GameObject _game_object, Dictionary<string, InputController> _controllers)
    {
        this.game_object = _game_object;
        this.controllers = _controllers;
    }
}
