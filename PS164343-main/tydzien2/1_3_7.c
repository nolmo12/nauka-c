#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0.0, b=0.0, c=0.0, delta=0.0, x1=0.0, x2=0.0;
    printf("Podaj wartosc a:\n");
    scanf("%f", &a);
    printf("Podaj wartosc b:\n");
    scanf("%f", &b);
    printf("Podaj wartosc c:\n");
    scanf("%f", &c);
    if(a!=0)
    {
    delta=(b*b)-(4*a*c);
    }
    else if(a==0)
    {
        printf("To nie jest rownanie kwadratowe");
        return 0;
    }
    if(delta==0)
    {
        x1=(b*-1)/2*a;
        printf("%.6f", x1);
    }
    else if(delta<0)
    {
        printf("Funkcja nie ma rozwiazan rzeczywistych\n");
    }
    else
    {
        x1=((b*-1)-delta)/2*a;
        printf("%.6f", x1);
        x2=((b*-1))+delta/2*a;
        printf("%.6f", x2);
    }
    return 0;
}
