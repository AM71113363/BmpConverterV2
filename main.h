static char szClassName[ ] = "ImageConverter";

HINSTANCE ins;
HWND hWnd;
//just a flag to prevent invalid operations
UCHAR IsOK;
UCHAR ShowCoords;
// hotSpot coords
USHORT HotSpotX;
USHORT HotSpotY;
//the transparent color to remove from palette (BLACK)
UINT ColorToRemove;
//the transparent color to remove from palette (WHITE)
UINT IColorToRemove;

//the transparent color index,transparent black
UCHAR TransparentBit;
//the transparent color index,transparent white
UCHAR ITransparentBit;

HBITMAP hNewBm;
HWND hBitmap;  //image to draw
HWND hTransparent; //transparent color to use
HWND cTransparent; //checkBox to use it or not
HWND hITransparent; //Inverted transparent color to use
HWND cITransparent; //checkBox to use it or not
HWND hDrawColor; //color used to draw

UCHAR pDrawColor[3]; //GetPixel

HCURSOR ColorCur; //cursor for draw
HCURSOR TargetCur; //cursor for hotspot

//--------------- functions -------------------------------------
void ShowImageToBitmap(UCHAR *buff);
//set the draw color
void SetDrawColor(HWND hw,UCHAR red,UCHAR green,UCHAR blue);

//set transparent color
UINT SetTransparentColor(HWND hw,UCHAR red,UCHAR green,UCHAR blue);

UCHAR ReadDataFile(UCHAR *);

UCHAR *GetPixelEntry();

void SaveImage(UCHAR **ImageBytes,USHORT xx,USHORT yy,UCHAR *name,USHORT type);
void ImageToBmp(UCHAR *name);

UCHAR SetHashMap(UINT key,UCHAR value,UCHAR overwrite);
UCHAR GetHashMap(UINT key);
void DeleteHashMap();

