#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a=0;
    int wynik=1;
    printf("Podaj liczbe:\n");
    scanf("%d", &a);
    for(int i=1;i<=a;i++)
    {
        wynik*=i;
    }
    printf("%d", wynik);
    return 0;
}
