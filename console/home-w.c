#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

uint16_t str1[] = L"\033[2J\033[0;0H";
uint16_t str2[] = L"hello world\u03bb";
uint16_t str3[] = L"hello worldλ";

int main(int argc, char *argv[])
{
    _setmode(_fileno(stdout), _O_WTEXT);
    wprintf(L"%s", str1);
    wprintf(L"%s %zu %zu\n", str2, sizeof str2, wcslen(str2));
    wprintf(L"%s %zu %zu\n", str3, sizeof str3, wcslen(str3));
}
