#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        *(tab+i)=(int*) malloc(sizeof(int)*m);
    }
    return tab;
}

int main()
{
    int ** a= foo(3,4);
    printf("%p\n",a);
    return 0;
}
