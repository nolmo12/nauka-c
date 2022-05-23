#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
void przepisz(char *napis, char *druginapis)
{
    for(int i=0;i<strlen(napis);i++)
    {
        druginapis[i]=napis[i];
    }
}
void przepiszw(wchar_t *napis, wchar_t *druginapis)
{
    wcscpy(druginapis, napis);
}
int main()
{
    char *napis="napis";
    char *druginapis;
    przepisz(napis, druginapis);
    printf("%s\n", druginapis);
    wchar_t *napisw=L"napis";
    wchar_t *napisw2[10];
    przepiszw(napisw, napisw2);
    printf("%ls", napisw2);
    return 0;
}
