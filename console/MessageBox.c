#define UNICODE
#include <windows.h>
#include <stdio.h>
#include <fcntl.h>
#pragma comment(lib,"user32")

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPCWSTR lpCmdLine,
                   int nShowCmd)
{
    wprintf(L"%s\n", lpCmdLine);
    MessageBox(NULL,
               TEXT("Hello World\u03bb"),
               TEXT("bell0tutorial\U0001f984"), 
               MB_ICONEXCLAMATION | MB_OK);
    return 0;
}

int main(int argc, char *argv[])
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    wprintf(L"embed unicode λ\n");
    wprintf(L"escape unicode \u03bb\n");
    return WinMain(GetModuleHandle(NULL), NULL, GetCommandLine(), SW_SHOW);
}
