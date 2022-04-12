#include <stdio.h>
#include <stdlib.h>

int *rezerwacja()
{
    return malloc(sizeof(int));
}
int main()
{
    printf("%#010x", rezerwacja());
    return 0;
}
