#include <stdio.h>
#include <windows.h>
void fun()
{
int i;
     for (; ;i++){
        MessageBox(NULL,"Virus","Caution!!",MB_OK);
    }
}


int WINAPI WinMain(HINSTANCE hInst , HINSTANCE hPrevInst , LPSTR args , int ncmdshow)
{
    MessageBox(NULL,"HELLOW","MY FIRST GUI",MB_OK);
    MessageBox(NULL, "NO WAY ", "MY GOODNESS",MB_YESNO);
    fun();

    return 0 ;
}