#include <stdio.h>
#include <stdlib.h>
int potega(unsigned int a, unsigned int b)
{
    if(a==0)
    {
        return a;
    }
    int wynik=1;
    for(int i=0;i<b;i++)
    {
        wynik*=a;
    }
    return wynik;
}
int main()
{
    unsigned int a, b;
    printf("Podaj pierwsza liczbe:");
    scanf("%d", &a);
    printf("Podaj druga liczbe:");
    scanf("%d", &b);
    printf("%d", potega(a,b));
    return 0;
}
