#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0;
    float wynik;
    printf("Podaj liczbe:");
    scanf("%f", &a);
    a=sqrt(a);
    for(int i=0;i<=a;i++)
    {
        wynik=i;
    }
    printf("%.6f", wynik);
    return 0;
}
