#include <stdio.h>
#include <stdlib.h>

int suma(int *a, int *b)
{
    return *a+*b;
}
int main()
{
    int x=40, y=30;
    printf("%d", suma(&x, &y));
    return 0;
}
