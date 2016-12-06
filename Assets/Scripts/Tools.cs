using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public static class Tools {

	public static bool BestFitBalance(Text text1, Text text2)
    {
        if (text1 != null && text2 != null)
        {
            int text1_max = text1.resizeTextMaxSize;
            int text2_max = text2.resizeTextMaxSize;

            int max = (text1_max > text2_max) ? text1_max : text2_max;

            if (text1_max != text2_max)
            {
                text1.resizeTextMaxSize = max;
                text2.resizeTextMaxSize = max;
                return false;
            }

            int text1_font = text1.cachedTextGenerator.fontSizeUsedForBestFit;
            int text2_font = text2.cachedTextGenerator.fontSizeUsedForBestFit;

            if (text1_font > 0 && text2_font > 0)
            {
                if (text1_font < text2_font)
                {
                    int zoom = (int)(((float)text1_font / (float)text2_font) * (float)max);
                    text2.resizeTextMaxSize = zoom;
                }
                else
                {
                    int zoom = (int)(((float)text2_font / (float)text1_font) * (float)max);
                    text1.resizeTextMaxSize = zoom;
                }
                return true;
            }
        }
        else Debug.LogError("No text set!");
        return false;
    }

    public static int getSmallestFontSize(Text[] texts)
    {
        int smallest_font_size = 300;
        foreach (Text text in texts)
        {
            int font_size = text.cachedTextGenerator.fontSizeUsedForBestFit;
            if (font_size < smallest_font_size) smallest_font_size = font_size;
        }
        return smallest_font_size;
    }

    public static void setToFontSize(Text[] texts, int font_size)
    {
        foreach (Text text in texts)
        {
            text.resizeTextForBestFit = false;
            text.fontSize = font_size;
        }
    }

    public static void turnBestFitOn(Text[] texts)
    {
        foreach (Text text in texts)
        {
            text.resizeTextForBestFit = true;
        }
    }

    static public bool BoundsIsEncapsulated(Bounds Encapsulator, Bounds Encapsulating)
    {
        return Encapsulator.Contains(Encapsulating.min) && Encapsulator.Contains(Encapsulating.max);
    }

    static public string FormatName(string name, int max_length)
    {
        int lenght = name.Length;
        if (lenght > max_length)
        {
            name = name.Substring(0, max_length - 3) + "...";
        }
        return name;
    }

    static public Vector2 TurnAroundPoint(Vector2 center, Vector2 point, float degrees)
    {
        float angle_rad = degrees * Mathf.Deg2Rad;
        Vector2 normalized = point - center;
        float x_turned = normalized.x * Mathf.Cos(angle_rad) - normalized.y * Mathf.Sin(angle_rad);
        float y_turned = normalized.x * Mathf.Sin(angle_rad) + normalized.y * Mathf.Cos(angle_rad);
        return new Vector2(x_turned, y_turned) + center;
    }

    static public Vector2 FrontOfSprite(Sprite sprite, Vector2 position, Quaternion rotation)
    {
        Vector2 ship_center = new Vector2(position.x, position.y);
        float y = ship_center.y + (sprite.rect.size.y);
        Vector2 point = new Vector2(ship_center.x, y);
        float degrees = rotation.eulerAngles.z;
        return Tools.TurnAroundPoint(position, point, degrees);
    }

    static public Vector3 RandomPlaceOnBorderViewPort()
    {
        int axis = Random.Range(0, 2);
        int side = Random.Range(0, 2);
        float place = Random.Range(0f, 1f);
        float x = (axis == 1) ? (float)side : place;
        float y = (axis == 0) ? (float)side : place;
        return new Vector3(x, y, 0f);
    }
}
