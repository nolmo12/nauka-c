#include <stdio.h>
#include <stdlib.h>
void sortowanieNierosnace(int *a, int *b,int *c)
{
    int tab[3]={*a,*b,*c};
    int pomocnicza;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3-i;j++)
        {
            if(tab[j]<tab[j+1])
            {
                pomocnicza=tab[j+1];
                tab[j+1]=tab[j];
                tab[j]=pomocnicza;
            }
        }
    }
    *a=tab[0];
    *b=tab[1];
    *c=tab[2];
}
int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sortowanieNierosnace(&a,&b,&c);
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
