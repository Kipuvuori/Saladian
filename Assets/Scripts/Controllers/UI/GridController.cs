using UnityEngine;
using UnityEngine.UI;
using System;

public class GridController : UIController {

    public GridLayoutGroup grid_layout;
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

    public bool resize()
    {
		Debug.Log ("resising");
        int child_count = this.transform.childCount;
        if (child_count <= 0) return true;
        if (grid_layout == null) return false;

        int count = grid_layout.constraintCount;
        int columns = 0;
        int rows = 0;
        if (grid_layout.constraint == GridLayoutGroup.Constraint.FixedColumnCount)
        {
            columns = count;
            float f_rows = child_count / columns;
            rows = (int)Math.Ceiling(f_rows);
        }
        else if (grid_layout.constraint == GridLayoutGroup.Constraint.FixedRowCount)
        {
            rows = count;
            float f_columns = child_count / rows;
            columns = (int)Math.Ceiling(f_columns);
        }

        if(columns <= 0 || rows <= 0)
        {
            Debug.LogError("No row/column constraint given to Grid");
            return false;
        }

        float width = this.gameObject.GetComponent<RectTransform>().rect.width * (1 - PADDING_WIDTH);
        float height = this.gameObject.GetComponent<RectTransform>().rect.height * (1 - PADDING_HEIGHT);
        Vector2 newSize = new Vector2(width / columns, height / rows);
        this.gameObject.GetComponent<GridLayoutGroup>().cellSize = newSize;
        text_resize_needed = true;
        //this.resizeSprites();
        this.resizeImages();
        return true;
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

    public void resizeSprites()
    {
        SpriteRenderer[] sprites = this.transform.GetComponentsInChildren<SpriteRenderer>();
        if (sprites.Length > 0)
        {
            float x = this.gameObject.GetComponent<GridLayoutGroup>().cellSize.x;
            float y = this.gameObject.GetComponent<GridLayoutGroup>().cellSize.y;
            foreach (SpriteRenderer sprite_renderer in sprites)
            {
                float width = sprite_renderer.sprite.bounds.size.x;
                float height = sprite_renderer.sprite.bounds.size.y;

                Vector2 scale = new Vector2( x / width, y / height);
                sprite_renderer.transform.localScale = scale;

            }

        }
    }

    public void resizeImages()
    {
        Image[] images = this.transform.GetComponentsInChildren<Image>();
        if (images.Length > 0)
        {
            Vector3 scale = new Vector3(1f, 1f, 1f);

            foreach (Image image in images)
            {
                image.transform.localScale = scale;

            }

        }
    }

    public override void onResolutionChanged()
    {
        this.resize();
    }

}
