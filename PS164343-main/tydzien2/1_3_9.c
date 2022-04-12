#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0.0, b=0.0, wynik=0.0;
    char wybor;
    printf("Podaj dwie liczby: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Wybierz znak dzialana\n");
    printf("+ - Dodawanie\n");
    printf("- - Odejmowanie\n");
    printf("/ - Dzielenie\n");
    printf("* - Mnozenie\n");
    scanf(" %c", &wybor);
    switch(wybor)
    {
        case '+':
            printf("%.6f", a+b);
        break;
        case '-':
            printf("%.6f", a-b);
        break;
        case '/':
            printf("%.6f", a/b);
        break;
        case '*':
            printf("%.6f", a*b);
        break;
        default:
            printf("Podaj poprawny znak\n");
        break;
    }
    return 0;
}
