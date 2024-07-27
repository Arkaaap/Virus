#include <windows.h>

DWORDLONG APIENTRY WINDOW_proc(HINSTANCE hwnd, UINT MESSAGE, WPARAM PARAM1, LPARAM PARAM2) {
    switch (MESSAGE) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 22));
            EndPaint(hwnd, &ps);
        }
        return 0;
        
    }
    return DefWindowProc(hwnd, MESSAGE, PARAM1, PARAM2);
}

int CALLBACK WinMain(HINSTANCE window_INSTANCE, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "WINDOW";
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WINDOW_proc;
    wc.hInstance = window_INSTANCE;
    wc.lpszClassName = CLASS_NAME;
    wc.lpfnWndProc;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0, CLASS_NAME, "00000////00000000000////000/><00000000////000000X90xf19-00-000////000016X0000000////00xHf000",
        WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL, NULL, window_INSTANCE, NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)!=0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}



