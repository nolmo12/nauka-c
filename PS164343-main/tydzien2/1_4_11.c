#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0,d=0, x=0;
    int wynik=0;
    printf("Podaj liczbe:\n");
    scanf("%d", &a);
    printf("Podaj liczbe:\n");
    scanf("%d", &b);
    printf("Podaj liczbe:\n");
    scanf("%d", &c);
    printf("Podaj liczbe:\n");
    scanf("%d", &d);
    for(;;)
    {
        wynik=abs(a)*(x*x)+(b*x)+c;
        if(wynik>d)
        {
            break;
        }
        x++;
    }
    printf("%d", x);
    x=0;
    for(;;)
    {
        x++;
        wynik=5*(x*x)+a*x+b;
        if(wynik<c)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("\n");
    printf("%d", x);
    x=0;
    for(;;)
    {
        x++;
        wynik=5*(x*x)+a*x+b;
        if(wynik<=c)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("\n");
    printf("%d", x);
    return 0;
}
