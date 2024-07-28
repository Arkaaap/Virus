#include <windows.h>
#include <stdio.h>

LRESULT CALLBACK Windowprocedure (HWND hWnd,UINT32 message,WPARAM wp, LPARAM lp)
{   
        switch (message)
        {
            case WM_ACTIVATE | WM_APP| WM_APP|WM_ACTIVATEAPP|WM_APPCOMMAND :
            PostQuitMessage(0);
            break;

            default :
            return DefWindowProc(hWnd,message,wp,lp);
        }
        // return 0 ;



    }
int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE previnstance , PSTR cmdline , int icmdshow)
{
    WNDCLASSW wc = {0};
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+22);
    wc.hCursor = LoadCursor (NULL,IDC_HELP);
    wc.hInstance = hInst;
    wc.lpszClassName = L"MY_WINDOW";
    wc.lpfnWndProc = Windowprocedure;
    if (!RegisterClassW(&wc)){
        return -1;
    }

    HWND hwnd = CreateWindowW(
        L"00000", L"FIRST_WINDOW", 
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, 
        100, 100, 500, 500, 
        NULL, NULL, NULL, NULL
    );

  HWND hwnd1 = CreateWindowW(
        L"MY_WINDOW", L"FIRST_WINDOW", 
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, 
        100, 100, 500, 500, 
        NULL, NULL, NULL, NULL
    );   




      HWND hwnd2 = CreateWindowW(
        L"MY_WINDOW", L"FIRST_WINDOW", 
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, 
        100, 100, 500, 500, 
        NULL, NULL, NULL, NULL
    );  





      HWND hwnd3 = CreateWindowW(
        L"MY_WINDOW", L"FIRST_WINDOW", 
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, 
        100, 100, 500, 500, 
        NULL, NULL, NULL, NULL
    );  



      HWND hwnd4 = CreateWindowW(
        L"MY_WINDOW", L"FIRST_WINDOW", 
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, 
        100, 100, 500, 500, 
        NULL, NULL, NULL, NULL
    );  





      HWND hwnd5 = CreateWindowW(
        L"MY_WINDOW", L"FIRST_WINDOW", 
        WS_OVERLAPPEDWINDOW | WS_VISIBLE, 
        100, 100, 500, 500, 
        NULL, NULL, NULL, NULL
    );  


    // if (hwnd == NULL){
    //     return -1;
    // } 
    MSG  msg  = {0};
    while (GetMessageW(&msg,NULL,0,0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }


    return 0 ;
}






// #include <windows.h>
// #include <stdio.h>

// LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT message, WPARAM wp, LPARAM lp) {   
//     switch (message) {
//         case WM_DESTROY:
//             PostQuitMessage(0);
//             break;
//         default:
//             return DefWindowProc(hWnd, message, wp, lp);
//     }
//     return 0;
// }

// int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, PSTR cmdLine, int iCmdShow) {
//     WNDCLASSW wc = {0};
//     wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
//     wc.hCursor = LoadCursor(NULL, IDC_ARROW);
//     wc.hInstance = hInst;
//     wc.lpszClassName = L"MY_WINDOW";
//     wc.lpfnWndProc = WindowProcedure;

//     if (!RegisterClassW(&wc)) {
//         return -1;
//     }

//     HWND hWnd = CreateWindowW(
//         wc.lpszClassName, L"FIRST_WINDOW", 
//         WS_OVERLAPPEDWINDOW | WS_VISIBLE, 
//         100, 100, 500, 500, 
//         NULL, NULL, hInst, NULL
//     );

//     if (hWnd == NULL) {
//         return -1;
//     }

//     MSG msg = {0};
//     while (GetMessageW(&msg, NULL, 0, 0)) {
//         TranslateMessage(&msg);
//         DispatchMessage(&msg);
//     }

//     return 0;
// }




