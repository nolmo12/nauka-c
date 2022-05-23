#include <stdio.h>
#include <stdlib.h>
int sumaElementow(int rozmiar, int tab[rozmiar][100])
{
    int suma=0;
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<100;j++)
        {
            suma=suma+tab[i][j];
        }
    }
    return suma;
}
int main()
{
    int tablica[50][100];
    for(int i=0;i<50;i++)
    {
        for(int j=0;j<100;j++)
        {
            tablica[i][j]=i+j;
        }
    }
    printf("%d", sumaElementow(50, tablica));
    return 0;
}
