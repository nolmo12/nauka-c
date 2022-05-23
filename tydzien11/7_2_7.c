#include <stdio.h>
#include <stdlib.h>
struct Zespolone
{
    double im;
    double re;
};
struct Zespolone dodawanie(struct Zespolone a, struct Zespolone b)
{
    struct Zespolone wynik;
    wynik.im=a.im+b.im;
    wynik.re=a.re+b.re;
    return wynik;
};
int main()
{
    struct Zespolone a;
    a.im=3;
    a.re=5;
    struct Zespolone b;
    b.im=2;
    b.re=6;
    struct Zespolone suma=dodawanie(a, b);
    printf("Czesc rzeczysta:[%f], Czesc Urojona:[%f]",suma.re, suma.im);
    return 0;
}
