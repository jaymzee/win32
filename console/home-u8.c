#include <stdio.h>
#include <string.h>

const char *str1 = "\033[2J\033[0;0H";
const char *str2 = "hello world\u03bb";
const char *str3 = "hello worldλ";

int main(int argc, char *argv[])
{
    printf("%s", str1);
    printf("%s %zu %zu\n", str2, sizeof str2, strlen(str2));
    printf("%s %zu %zu\n", str3, sizeof str3, strlen(str3));
}
