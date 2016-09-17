public struct CameraResolution
{
    public int width;
    public int height;
    public CameraResolution(int _width, int _height)
    {
        this.width = _width;
        this.height = _height;
    }

    public CameraResolution(UnityEngine.Camera camera)
    {
        this.width = camera.pixelWidth;
        this.height = camera.pixelHeight;
    }
}
