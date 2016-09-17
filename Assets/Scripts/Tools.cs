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
}
