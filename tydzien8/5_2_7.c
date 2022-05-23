#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void kopiujn(char *napis1, char *napis2, int dlugosc)
{
    if(dlugosc>strlen(napis1))
    {
        int i=0;
        for(i;i<strlen(napis1);i++)
        {
            if(napis1[i]!='\0')
            {
            napis2[i]=napis1[i];
            }
        }
        napis2[i]='\0';
    }
    else
    {
        int i=0;
        for(i;i<dlugosc;i++)
        {
            napis2[i]=napis1[i];
        }
        napis2[i]='\0';
    }
    /*if(dlugosc>strlen(napis1))
    {
        strncpy(napis2, napis1, strlen(napis2));
    }
    else
    {
        strncpy(napis2, napis1, dlugosc);
        napis2[dlugosc]='\0';
    }*/
}

int main()
{
    char napis1[]="SIEMA";
    char napis2[]="SIESAMSAXFMASM";
    printf("%s\n", napis1);
    kopiujn(&napis1, &napis2, 2);
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    return 0;
}
