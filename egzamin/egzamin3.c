#include <stdio.h>
#include <stdlib.h>
struct element{
int i;
struct element * next};

struct element * znajdz(struct element *Lista)
{
    Lista=Lista->next;
    int *wsk=malloc(sizeof(struct element));
    int ileparzystych=0;
    wsk=Lista;
    while(Lista!=NULL)
    {
        if(Lista->i%2==0)
        {
            wsk=Lista;
            ileparzystych++;
        }
        Lista=Lista->next;
    }
    if(ileparzystych==0)
    {
        return NULL;
    }
    return wsk;
}
int main()
{
    struct element* l1=malloc(sizeof(struct element));
    l1->next=malloc(sizeof(struct element));
    l1->next->i=50;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->i=70;
    l1->next->next->next=malloc(sizeof(struct element));
    l1->next->next->next->i=-1;
    l1->next->next->next->next=NULL;
    printf("%p\n",znajdz(l1));

    return 0;
}
