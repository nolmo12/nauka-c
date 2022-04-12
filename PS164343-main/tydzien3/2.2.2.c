#include <stdio.h>
#include <stdlib.h>
int silnia(int a)
{
    int wynik=1;
    for(int i=1;i<=a;i++)
    {
        wynik*=i;
    }
    return wynik;
}
int main()
{
    unsigned int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    printf("%d", silnia(a));
    return 0;
}
