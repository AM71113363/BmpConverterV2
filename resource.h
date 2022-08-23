#define AM_CHANGECURSOR            4000
#define ID_SET_TRANSPARENT_COLOR   4001
#define ID_SET_ITRANSPARENT_COLOR  4002
#define ID_NEW_IMAGE               4003
#define ID_SAVE_IMAGE_BITMAP       4004
#define ID_SAVE_IMAGE_ICON         4005
#define ID_SAVE_IMAGE_CURSOR       4006
//#define ID_SET_TRASPARENT_WHITE    4007
//#define ID_SET_TRASPARENT_BLACK    4008
#define ID_MODE_DRAW               4009
#define ID_MODE_HOTSPOT            4010
#define ID_MODE_SHOWCOORDS         4011

#define BmpColorSize 1024*3
#define HOTSPOT   2
#define YES       1
#define NO        0

#define IMAGEXY   256
#define CHANGEIT(_x_,_y_) CheckMenuItem(GetMenu(hWnd),_x_,_y_|MF_BYCOMMAND)
#define GETIT(_x_) GetMenuState(GetMenu(hWnd),_x_,MF_BYCOMMAND)
#define CHANGECURSOR(_c_) SNDMSG(hBitmap,AM_CHANGECURSOR,0,(LPARAM)_c_);

//SNDMSG(hBitmap,WM_SETCURSOR,0,(LPARAM)_c_); 
#define ISCHECKED(_h_)           SNDMSG(_h_,BM_GETCHECK,0,0)==BST_CHECKED


