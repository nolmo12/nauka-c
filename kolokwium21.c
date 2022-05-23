#include <stdio.h>
#include <stdlib.h>
//zadanie 2
int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

void zamiana(char *napis)
{
    int dlg=dlugosc(napis);
    for(int i=0;i<dlg;i++)
    {
        if(napis[i]>='A'&&napis[i]<='Z')
        {
            napis[i]='@';
        }
    }
    for(int i=0;i<dlg;i++)
    {
        if(napis[i]=='@')
        {
            for(int j=i; j<dlg; j++)
            {
                napis[j] = napis[j+1];
            }
            dlg--;
            i--;
        }
    }
}
//zadanie 3
void odwroc(unsigned int n, unsigned int m, int tab[][m])
{
    int pomoc = 0;
    int licznik = 0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
           for(int j=m-1;j>=m/2;j--)
           {
               pomoc=tab[i][licznik];
               tab[i][licznik] = tab[i][j];
               tab[i][j] = pomoc;
               licznik++;
           }
        }
    }
}
//zadanie 4
double fun(int **tab, int tab2[10][10])
{
    double wynik;
    int a=tab[0][1];
    wynik=tab2[3][4]+a;
    return wynik;
}
//zadanie 5
struct element
{
    int a;
    struct element *next;
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
int czySrednieTakieSame(struct element* Lista1, struct element* Lista2)
{
    if(srednia(Lista1)==srednia(Lista2))
        return 1;
    else
        return 0;
}
int main()
{
    char napis[]="xsdfDFFssdaDSWEFfdsf";
    zamiana(napis);
    printf("%s\n", napis);
    int tab[3][4]={{2,1,-3,-2},{3,4,-6,8},{-3,7,11,23}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Indeks:[%d][%d]-wartosc:[%d]\n",i,j,tab[i][j]);
        }
    }
    odwroc(3, 4, tab);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Indeks:[%d][%d]-wartosc:[%d]\n",i,j,tab[i][j]);
        }
    }
    struct element* l1=malloc(sizeof(struct element));
    l1->a=5;
    l1->next=malloc(sizeof(struct element));
    l1->next->a =-4;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->a=9;
    l1->next->next->next=NULL;
    struct element* l2=malloc(sizeof(struct element));
    l2->a=5;
    l2->next=malloc(sizeof(struct element));
    l2->next->a =-4;
    l2->next->next=malloc(sizeof(struct element));
    l2->next->next->a=3;
    l2->next->next->next=NULL;
    printf("%d", czySrednieTakieSame(l1, l2));
    return 0;
}
