#include <stdio.h>
#include <stdlib.h>
void *zwolnieniepamieci(double *tab)
{
    memset(tab,0,sizeof(&tab));
}
int main()
{
    double *tab=malloc(sizeof(double)*6);
    printf("%p\n",&tab[0]);
    zwolnieniepamieci(&tab);
    printf("%p",&tab[0]);
    return 0;
}
