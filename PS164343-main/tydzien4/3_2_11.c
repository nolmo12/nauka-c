#include <stdio.h>
#include <stdlib.h>

int *rezerwacja(int unsigned n)
{
    return malloc(n*sizeof(int));
}
int main()
{
    printf("%#010x", rezerwacja(5));
    return 0;
}
