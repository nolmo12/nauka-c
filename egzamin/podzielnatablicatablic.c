#include <stdio.h>
#include <stdlib.h>

int podzielneIndeksyPrzez3(int **tab, int n, int m)
{
    int iloczyn=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(tab[i][j]%3==0)
            {
                iloczyn*=tab[i][j];
            }
        }
    }
    return iloczyn;
}

int **rezerwacja(int n, int m)
{
    int **tab=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i)=(int*)malloc(sizeof(int)*m);
    }
    return tab;
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
    printf("%d", podzielneIndeksyPrzez3(tab, 4, 4));
    return 0;
}
