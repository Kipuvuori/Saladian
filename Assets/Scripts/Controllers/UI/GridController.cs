using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class GridController : UIController {

    public int columns = 1;
    private bool text_resize_needed = true;
    private bool best_fit_on = false;
    public float PADDING_WIDTH;
    public float PADDING_HEIGHT;
    protected new void Awake()
    {
        base.Awake();
    }

    // Use this for initialization
    protected new void Start()
    {
        base.Start();
        this.resize();
    }
    
    // Update is called once per frame
    protected new void Update()
    {
        base.Update();
        if(text_resize_needed)
        {
            //this.resizeTexts();
        }
       
    }

    public void resize()
    {
        int child_count = this.transform.childCount;
        float f_rows = child_count / this.columns;
        int rows = (int)Math.Ceiling(f_rows);
        float width = this.gameObject.GetComponent<RectTransform>().rect.width * (1 - PADDING_WIDTH);
        float height = this.gameObject.GetComponent<RectTransform>().rect.height * (1 - PADDING_HEIGHT);
        Vector2 newSize = new Vector2(width / this.columns, height / rows);
        this.gameObject.GetComponent<GridLayoutGroup>().cellSize = newSize;
        text_resize_needed = true;
    }

    public void resizeTexts()
    {
        Text[] texts = this.transform.GetComponentsInChildren<Text>();
        if (texts.Length > 0)
        {
            if (best_fit_on)
            {
                int font_size = Tools.getSmallestFontSize(texts);
                font_size = (font_size < 20) ? 20 : font_size;
                Tools.setToFontSize(texts, font_size);
                text_resize_needed = false;
                this.best_fit_on = false;
            }
            else 
            {
                Tools.turnBestFitOn(texts);
                this.best_fit_on = true;
            }
        }
        else text_resize_needed = false;
    }

    public override void onResolutionChanged()
    {
        this.resize();
    }

}
