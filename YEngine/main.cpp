#include <windows.h>
#include <string>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char* msg = "Hello, Win32!";
    std::wstring wideMsg = std::wstring(msg, msg + strlen(msg));

    MessageBoxW(NULL, wideMsg.c_str(), L"Title", MB_OK);
    return 0;
}