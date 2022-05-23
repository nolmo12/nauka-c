#include <stdio.h>
#include <stdlib.h>
int sumaElementow(int tab[][100][100])
{
    int suma=0;
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            for(int k=0;k<100;k++)
            suma=suma+tab[i][j][k];
        }
    }
    return suma;
}
int main()
{
    int tablica[100][100][100];
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            for(int k=0;k<100;k++)
            {
                tablica[i][j][k]=i+j+k;
            }
        }
        
    }
    printf("%d\n", tablica[10][15][13]);
    printf("%d", sumaElementow(tablica));
    return 0;
}
