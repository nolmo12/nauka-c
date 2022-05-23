#include <stdio.h>
#include <stdlib.h>
//zadanie 1
int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
char znak(char *napis, int n)
{
    if(n>dlugosc)
        return '\0';
    return napis[n];
}
//zadanie 3
int foo(int n, int m,int tab[n][m])
{
    return &tab[n][m];
}
//zadanie 4
enum Telefon{Apple, Lg, Samsung, Xiaomi, Asus, Sony};
//zadanie 5
struct element
{
    int x;
    struct element * next;
};
double srednia(struct element* Lista)
{
    double suma=0;
    double licznik=0;
    while(Lista!=NULL)
    {
        suma+=Lista->x;
        Lista=Lista->next;
        licznik++;
    }
    return suma/licznik;
}
int czyTakieSameSrednie(struct element *Lista, struct element * Lista2)
{
    if(srednia(Lista)==srednia(Lista2))
        return 1;
    return 0;
}
int main()
{
    //zad2
    char napis[]="czesc";
    //zad5
    struct element* l1=malloc(sizeof(struct element));
    l1->x=4;
    l1->next=malloc(sizeof(struct element));
    l1->next->x =4;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->x=4;
    l1->next->next->next=NULL;
    struct element* l2=malloc(sizeof(struct element));
    l2->x=4;
    l2->next=malloc(sizeof(struct element));
    l2->next->x=5;
    l2->next->next=malloc(sizeof(struct element));
    l2->next->next->x=4;
    l2->next->next->next=NULL;
    printf("%d\n", czyTakieSameSrednie(l1, l2));
    //zad4
    enum Telefon phone;
    enum Telefon phone1;
    enum Telefon phone2;
    enum Telefon phone3;
    enum Telefon phone4;
    enum Telefon phone5;
    phone=Apple;
    phone2=Lg;
    phone3=Samsung;
    phone4=Sony;
    phone5=Asus;
    int tab2[6]={phone, phone1, phone2, phone3, phone4, phone5};
    for(int i=Apple;i<Sony;i++)
    {
        if(i==Lg)
        {
            printf("%d\n", phone4);
        }
    }
    //zad3
    int tab[2][2]={{1,2},{1,2}};
    printf("Wartosc:%d, adres:%p",tab[1][1],foo(tab,2,2));
    return 0;
}
