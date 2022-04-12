#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, wynik=0;
    printf("Podaj liczbe:\n");
    scanf("%d", &a);
    printf("Podaj liczbe:\n");
    scanf("%d", &b);
    printf("\n");
    for(int i=0;i<=b;i++)
    {
        wynik=a*i;
        printf("%d",wynik);
        printf("\n");
    }
    return 0;
}
