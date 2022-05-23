#include <stdio.h>
#include <stdlib.h>
struct punktn
{
    int n;
    int *tab;
};
void przepisz(struct punktn tab1[],struct punktn tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i].n=tab1[i].n;
        tab2[i].tab= malloc(tab2[i].n *sizeof(int));
        for(int j=0;j<tab1[i].n;j++)
        {
            tab2[i].tab[j]=tab1[i].tab[j];
        }
    }
}
void wyswietlPunkt(struct punktn arg)
{
    for(int i=0;i<arg.n;i++)
    {
        printf("%d ",arg.tab[i]);
    }
    printf("\n");
}
void wyswietlTablcePunktow(struct punktn tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        wyswietlPunkt(tab[i]);
    }
}
int main()
{
    struct punktn p1;
    p1.n=2;
    p1.tab=malloc(p1.n * sizeof(int));
    p1.tab[0]=6;
    p1.tab[1]=-2;
    struct punktn p2;
    p2.n=3;
    p2.tab=malloc(p2.n * sizeof(int));
    p2.tab[0]=9;
    p2.tab[1]=8;
    p2.tab[2]=-11;
    struct punktn tab[2]={p1,p2};
    wyswietlTablcePunktow(tab,2);
    struct punktn tab2[2];
    przepisz(tab,tab2,2);
    wyswietlTablcePunktow(tab2,2);
    return 0;
}
