#include <stdio.h>
#include <stdlib.h>
int *kopiaTablicy(unsigned int n, int *tab1)
{
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]==0)
        {
            licznik++;
        }
    }
    int *tab2=malloc(sizeof(int)*licznik);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]!=0)
        {
            *(tab2+j)=tab1[i];
            j++;
        }
    }
    return tab2;
}
int ileNieZero(unsigned int n, int *tab1)
{
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]==0)
        {
            licznik++;
        }
    }
    return licznik;
}
int main()
{
    int tab[8]={3,4,0,2,5,4,0,3};
    printf("%p\n",&tab[0]);
    int *wsk=kopiaTablicy(8, tab);
    int zera=ileNieZero(8, tab);
    for(int i=0;i<8-zera;i++)
    {

        printf("[%d]=%d\n",i,wsk[i]);
    }
    return 0;
}
