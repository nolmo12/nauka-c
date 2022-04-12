#include <stdio.h>
#include <stdlib.h>
int podzielnosc(int n, int m, int k)
{
    if(m%k==0 && m%n==0)
    {
        return 2;
    }
    else if(m%k==0 || m%n==0)
    {
        return 1;
    }
    return 0;
}
float f1(float x)
{
    return x;
}
float potega(int, int);
float f2(float x)
{
    if(x>5)
    {
        return potega(x,3);
    }
    return x;
}
float potega(int a, int b)
{
    float wynik=a;
    for(int i=1;i<b;i++)
    {
        wynik*=a;
    }
    return wynik;
}
int szescian(float x, float (*f1)(float), float (*f2)(float))
{
    for(int i=0;i<x;i++)
    {
        if(f1(x)==potega(f2(x),3))
            return 1;
    }
    return -1;
}
int rekurencja(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    if(n%2==0)
        return rekurencja(n-2)+n;
    else
        return rekurencja(n-2)*n;
}
void zamianaTablic(int n, int *tab1, int *tab2)
{
    sortowanieMalejaco(4, tab2);
    for(int i=0;i<n;i++)
    {
        tab1[i]=tab2[i];
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
    int tab1[4]={1,4,3,6};
    int tab2[4]={6,4,8,3};
    printf("%d\n", podzielnosc(3,10,6));
    printf("%d\n", szescian(3,f1,f2));
    printf("%d\n", szescian(1,f1,f2));
    printf("%d\n", rekurencja(3));
    printf("%d\n", rekurencja(4));
    zamianaTablic(4, &tab1, &tab2);
    for(int i=0;i<4;i++)
    {
        printf("%d\n", tab1[i]);
    }

    return 0;
}
