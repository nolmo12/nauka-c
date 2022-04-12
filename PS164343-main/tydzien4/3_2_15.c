#include <stdio.h>
#include <stdlib.h>

void zamiana(int const *a, int *const b)
{

    *b=*a;
}
int main()
{
    int a=40, b=50;
    printf("%d, %d \n", a, b);
    zamiana(&a, &b);
    printf("%d, %d", a, b);
    return 0;
}
