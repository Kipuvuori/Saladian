using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public struct UIButton
{
    public GameObject gameObject;
    public Text text;
    public Button button;
    public UIButton(GameObject _gameObject, Text _text, Button _button, string _text_string = "", UnityAction _action = null)
    {
        this.gameObject = _gameObject;
        this.text = _text;
        this.button = _button;
        this.Text = _text_string;
    }

    public UIButton(GameObject _gameObject, string _text_string = "", UnityAction _action = null)
    {
        this.gameObject = _gameObject;
        if(this.gameObject != null)
        {
            this.text = this.gameObject.GetComponentInChildren<Text>();
            this.button = this.gameObject.GetComponent<Button>();
            this.Text = _text_string;
            this.Action = _action;
        }
        else
        {
            this.text = null;
            this.button = null;
        }
       
    }

    public string Text
    {
        get
        {
            if (this.text != null) return this.text.text;
            else return null;
        }
        set
        {
            if (this.text != null) this.text.text = value;
        }
    }

    public UnityAction Action
    {
        set
        {
            if (this.button != null)
            {
                this.button.onClick.RemoveAllListeners();
                if(value != null)
                    this.button.onClick.AddListener(value);
            }
        }
    }

    public bool Interactable
    {
        get
        {
            if (this.button != null) return this.button.interactable;
            else return false;
        }
        set
        {
            if (this.button != null)
            {
                this.button.interactable = value;
            }
        }
    }
}
