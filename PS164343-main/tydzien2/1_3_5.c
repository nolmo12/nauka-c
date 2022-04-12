#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wybor=0;
    int a=0, b=0, c=0;
    float pole;
    printf("Wybierz, czy podajesz podstawe i wysokosc, czy 3 boki trojkata.\n1=Wszystkie boki, 0-Podstawe i wysokosc\n");
    scanf("%d", &wybor);
    if(wybor==0)
    {
        printf("Podaj podstawe:\n");
        scanf("%d", &a);
        printf("Podaj wysokosc:\n");
        scanf("%d", &b);
        pole=(a*b)/2;
        printf("%.6f", pole);
    }
    else
    {
        printf("Podaj podstawe:\n");
        scanf("%d", &a);
        printf("Podaj bok:\n");
        scanf("%d", &b);
        printf("Podaj drugi bok:\n");
        scanf("%d", &c);
        pole=(a+b+c)/2;
        pole=sqrt(pole*(pole-a)*(pole-b)*(pole-c));
        printf("%.6f", pole);

    }
    return 0;
}
