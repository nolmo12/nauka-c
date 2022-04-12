#include <stdio.h>
#include <stdlib.h>
void zamiana(unsigned int n, int *tab1, int *tab2, double *tab3)
{
    int licznik=0;
    for(int i=0;i<n*2;i++)
    {
        if(i>(n-1))
        {
            tab3[i]=tab2[licznik];
            licznik++;
        }
        else
            tab3[i]=tab1[i];
    }
}
void zamianaParzysta(unsigned int n, int *tab1, int *tab2, double *tab3)
{
    int licznik=0;
    for(int i=0;i<n*2;i++)
    {
        if(i%2==0)
            tab3[i]=tab2[licznik];
        else
        {
            tab3[i]=tab1[licznik];
            licznik++;
        }
    }
}
int main()
{
    int tab1[10]={23,43, -2, 1, -4, 5,6 ,12, -43, -25};
    int tab2[10]={9, 54, 78, 23, 92, -56, -75, 12, -4, -24};
    double tab3[20]={23.4, 53.53, 1.234, 5.00, 6.43, 9.45, 7.94, 1.57, 2.5, 3.7,1.5, 34.5, 3.75, 23.54, 79.2, 1.9, 43.5, 12.3, 16.7, 23.5};
    zamiana(10, tab1, tab2,tab3);
    for(int i=0;i<20;i++)
    {
        printf("[%d]=%f\n", i, tab3[i]);
    }
    zamianaParzysta(10, tab1, tab2,tab3);
    for(int i=0;i<20;i++)
    {
        printf("last[%d]=%f\n", i, tab3[i]);
    }
    return 0;
}
