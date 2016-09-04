using UnityEngine;
using System.Collections.Generic;

public struct GameElement {
    public GameObject game_object;
    public Controller controller;
    public Dictionary<string, Component> components;
    public GameElement(GameObject _game_object, Controller _controller, Dictionary<string, Component> _components)
    {
        this.game_object = _game_object;
        this.controller = _controller;
        this.components = _components;
    }
}
