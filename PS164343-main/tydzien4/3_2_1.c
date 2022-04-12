#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    if(*a>*b)
        return *b;
    else
        return *a;
}
int main()
{
    int x=40, y=30;
    printf("%d", mniejsza(&x, &y));
    return 0;
}
