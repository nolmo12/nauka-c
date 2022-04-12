#include <stdio.h>
#include <stdlib.h>
void *kopiaTablicy(unsigned int n, double *tab)
{
    double *tabCopy=malloc(sizeof(double)*n);
    for(int i=0;i<n;i++)
    {
        tabCopy[i]=tab[i];
    }
    return tabCopy;
}
int main()
{
    double tab[5];
    printf("%p\n",&tab);
    printf("%p",kopiaTablicy(5, &tab));
    return 0;
}
