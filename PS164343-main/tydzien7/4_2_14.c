#include <stdio.h>
#include <stdlib.h>
double *dynamicznaTablica(unsigned const int n)
{
    double *tab=malloc(sizeof(double)*n);
    for(int i=0;i<n;i++)
    {
        tab[i]=0;
    }
    return &tab[0];
}
int main()
{
    printf("%p",dynamicznaTablica(5));
    return 0;
}
