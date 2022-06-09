#include <stdio.h>
#include <stdlib.h>
struct element
{
    int x;
    struct element * next;
};
double sredniaListy(struct element *Lista)
{
    double suma=0;
    double licznik=0;
    while(Lista!=NULL)
    {
        suma+=Lista->x;
        licznik++;
        Lista=Lista->next;
    }
    return suma/licznik;
}
int czyTakieSame(struct element *Lista, struct element *Lista2)
{
    if(sredniaListy(Lista)!=sredniaListy(Lista2))
    {
        return 0;
    }
    return 1;
}

int main()
{
    struct element *l1=malloc(sizeof(struct element));
    l1->x=4;
    l1->next=malloc(sizeof(struct element));
    l1->next->x=4;
    l1->next->next=NULL;
    struct element *l2=malloc(sizeof(struct element));
    l2->x=3;
    l2->next=malloc(sizeof(struct element));
    l2->next->x=4;
    l2->next->next=malloc(sizeof(struct element));
    l2->next->next->x=5;
    l2->next->next->next=NULL;
    printf("%d", czyTakieSame(l1, l2));
    return 0;
}
