#include <stdio.h>
#include <stdlib.h>

double iloczynSkalarny(int n, double wektor1[], double wektor2[])
{
    double pomoc = 0;
    double wynik=0;
    for (int i = 0; i < n; i++)
    {
        pomoc = wektor1[i] * wektor2[i];
        wynik += pomoc;
    }
    return wynik;
}

int main()
{
    double wektor1[2] = { 1,2};
    double wektor2[2] = { 3,-5 };
    printf("%f", iloczynSkalarny(2, wektor1, wektor2));
    return 0;
}
