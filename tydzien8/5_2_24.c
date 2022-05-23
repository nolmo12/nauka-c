#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void kopiuj(char *napis1, char *napis2)
{
    int i=0;
    for(i;i<strlen(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]='\0';
}
int main()
{
    char napis1[]="SIEEEMA";
    char napis2[100];
    printf("%s\n", napis1);
    kopiuj(&napis1, &napis2);
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    return 0;
}
