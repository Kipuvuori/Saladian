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
}
