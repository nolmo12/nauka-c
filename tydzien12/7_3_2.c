#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworz()
{
    return NULL;
};
void wyczysc(struct element *Lista)
{
    struct element * wsk=Lista;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
}

int main()
{
    struct element* example = utworz();
    wyczysc(example);
    return 0;
}
