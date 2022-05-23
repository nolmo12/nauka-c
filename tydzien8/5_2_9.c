#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void kopiujn(char *napis1, char *napis2, int n, int m)
{
    if(m>strlen(napis1))
    {
        int i=n;
        for(i;i<=strlen(napis1);i++)
        {
            napis2[i]=napis1[i];
        }
    }
    else
    {
        int i=n;
        for(i;i<=m;i++)
        {
            napis2[i]=napis1[i];
        }
    }
}
int main()
{
    char napis1[]="SIEMA";
    char napis2[]="CZESC";
    printf("%s\n", napis1);
    kopiujn(&napis1, &napis2, 2, 10);
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    return 0;
}
