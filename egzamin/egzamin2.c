#include <stdio.h>
#include <stdlib.h>
int **rezerwacja(int n,int m)
{
    int **tab=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i)=(int*)malloc(sizeof(int)*m);
    }
    return tab;
}
double *dynamicznaTablica(unsigned const int n)
{
    double *tab=malloc(sizeof(double)*n);
    for(int i=0;i<n;i++)
    {
        tab[i]=0;
    }
    return &tab[0];
}
void zamianaWierszy(int **tab, int n, int m)
{
    if(n<2)
    {
    int *tabpomoc=dynamicznaTablica(n);
    for(int i=0;i<n;i++)
    {
        tabpomoc[i]=tab[0][i];
    }
    for(int i=0;i<n;i++)
    {
        tab[0][i]=tab[1][i];
    }
    for(int i=0;i<n;i++)
    {
        tab[1][i]=tabpomoc[i];
    }
    }

}
int main()
{
    int **tab=rezerwacja(4, 4);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            tab[i][j]=rand()%10+1;
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Indeks:[%d][%d]-Wartosc:%d\n", i, j, tab[i][j]);
        }
    }
    zamianaWierszy(tab, 4, 4);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Indeks:[%d][%d]-Wartosc:%d\n", i, j, tab[i][j]);
        }
    }
    return 0;
}
