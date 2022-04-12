#include <stdio.h>
#include <stdlib.h>
void suma(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
void zamianaMax(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=max(tab1[i], tab2[i]);
    }
}
void zamiana(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    int pomocniczTab1[n];
    int pomocniczTab2[n];
    int pomocniczTab3[n];
    for(int i=0;i<n;i++)
    {
        pomocniczTab1[i]=tab1[i];
        pomocniczTab2[i]=tab2[i];
        pomocniczTab3[i]=tab3[i];
    }
    for(int i=0;i<n;i++)
    {
        tab2[i]=pomocniczTab1[i];
        tab3[i]=pomocniczTab2[i];
        tab1[i]=pomocniczTab3[i];
    }
}
int main()
{
    int tab1[10]={23,43, -2, 1, -4, 5,6 ,12, -43, -25};
    int tab2[10]={9, 54, 78, 23, 92, -56, -75, 12, -4, -24};
    int tab3[10]={83, 89, -378, -23, 53, 561, -233, 538, 45, -5};
    suma(10, tab1, tab2, tab3);
    for(int i=0;i<10;i++)
    {
        printf("[%d]=%d\n",i, tab3[i]);
    }
    zamianaMax(10, tab1, tab2, tab3);
    for(int i=0;i<10;i++)
    {
        printf("[%d]=%d\n",i, tab3[i]);
    }
    zamiana(10, tab1,tab2,tab3);
    for(int i=0;i<10;i++)
    {
        printf("[%d]=%d\n",i, tab2[i]);
    }
    return 0;
}
