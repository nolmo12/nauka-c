#include <stdio.h>
#include <stdlib.h>
void zeruj(unsigned int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=0;
    }
}
void przypisanieIndeksu(unsigned int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=i;
    }
}
void podwojenie(unsigned int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=tab[i]*2;
    }
}
void absTab(unsigned int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i]=abs(tab[i]);
    }
}
int abs(int a)
{
    if(a<0)
        return a*-1;
    else
        return a;
}
int main()
{
    int tab[10]={23, -43, -52, 1, 2, -3, -43, 5, 12, 54};
    absTab(10, tab);
    printf("%d\n", tab[1]);
    zeruj(10, &tab);
    printf("%d\n",tab[0]);
    przypisanieIndeksu(10, &tab);
    printf("%d\n",tab[2]);
    podwojenie(10, &tab);
    printf("%d\n", tab[3]);
    return 0;
}
