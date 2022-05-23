#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
int dlugosc(char *napis)
{
    return strlen(napis);
}
int dlugoscw(wchar_t *napis)
{
    return wcslen(napis);
}
int main()
{
    char napis1[]="napis";
    wchar_t *napis2=L"napis";
    printf("%d\n", dlugosc(napis1));
    printf("%d", dlugoscw(napis2));
    return 0;
}
