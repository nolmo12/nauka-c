#include <stdio.h>
#include <stdlib.h>
void odwrocenie(int n, int* tab)
{
    int pomoc = 0;
    int licznik = 0;
    for (int i = n - 1; i >= n / 2; i--)
    {
        pomoc = tab[licznik];
        tab[licznik] = tab[i];
        tab[i] = pomoc;
        licznik++;
    }
}
void przesunieciewLewo(int n, int* tab)
{
    int pomoc = tab[0];
    for (int i = 0; i < n - 1; i++)
    {
        tab[i] = tab[i + 1];
    }
    tab[n - 1] = pomoc;
}
void przesunieciewPrawo(int n, int* tab)
{
    int pomoc = tab[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        tab[i + 1] = tab[i];
    }
    tab[0] = pomoc;
}
void sortowanieRosnaco(unsigned int n, int* tab)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (tab[j] < tab[j - 1])
            {
                int bufor;
                bufor = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = bufor;
            }
        }
    }
}
void sortowanieMalejaco(unsigned int n, int* tab)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (tab[j] > tab[j - 1])
            {
                int bufor;
                bufor = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = bufor;
            }
        }
    }
}
int main()
{
    int tab[10] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    odwrocenie(10, tab);
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    przesunieciewLewo(10, tab);
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    przesunieciewPrawo(10, tab);
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    sortowanieMalejaco(10, tab);
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    sortowanieRosnaco(10, tab);
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    return 0;
}
