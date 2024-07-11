#include <stdio.h>
#include <windows.h>
int fun()
{
     for (int i=0;i<=4;i++){
        MessageBox(NULL,"Cool","IN_A_FOR_LOOP",MB_COMPOSITE);
    }
}
int WINAPI WinMain(HINSTANCE hInst , HINSTANCE hPrevInst , LPSTR args , int ncmdshow)
{
    MessageBox(NULL,"HELLOW","MY FIRST GUI",MB_OK);
    MessageBox(NULL, "NO WAY ", "MY GOODNESS",MB_APPLMODAL);
    HWND hide;
    hide = fun();
    
    return 0 ;
}
