#include <stdio.h>
#include <stdlib.h>
union Liczba
{
    int a;
    float b;
};
struct Dane
{
    int tp;
    union Liczba zaw;
};
struct Dane wczytaj()
{
    struct Dane temp;
    printf("Podaj 0 jest calk lub 1 jesli wym\n");
    scanf("%d",&temp.tp);
    if(temp.tp==0)
    {
        printf("podaj liczbe calk\n");
        scanf("%d",&temp.zaw.a);
    }
    else
    {
        printf("podaj liczbe wym\n");
        scanf("%f",&temp.zaw.b);
    }
    return temp;
};
wyswietl(struct Dane zm)
{
    if(zm.tp ==0)
    {
        printf("calk:%d\n",zm.zaw.a);
    }
    else
    {
        printf("wym:%f\n",zm.zaw.b);
    }
}
int main()
{
    union Liczba zm;
    zm.a=2;
    printf("%d\n", zm.a);
    printf("%f\n", zm.b);
    struct Dane wynik = wczytaj();
    wyswietl(wynik);
    return 0;
}
