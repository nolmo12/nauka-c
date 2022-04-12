#include <stdio.h>
#include <stdlib.h>

void zamiana(int n, int *w)
{
    *w=n;
}
int main()
{
    int x=40, y=30;
    zamiana(x, &y);
    printf("%d", y);
    return 0;
}
