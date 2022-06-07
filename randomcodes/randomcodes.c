#include <stdio.h>
#include <stdlib.h>

void odwrocenie(int n, int **tab)
{
    int pomoc=0;
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            for(int j=n-1;j>=n/2;j--)
            {
                pomoc=tab[i][licznik];
                tab[i][licznik]=tab[i][j];
                tab[i][j]=pomoc;
                licznik++;
            }
            licznik=0;
        }
    }
}
int ** rezerwacja(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i)=(int*) malloc(sizeof(int)*m);
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
    odwrocenie(4, tab);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Indeks:[%d][%d]-Wartosc po odwroceniu:%d\n", i, j, tab[i][j]);
        }
    }
    return 0;
}
