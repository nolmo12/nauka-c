#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    int a_=&a;
    int b_=&b;
    if(a>b)
        return b_;
    else
        return a_;
}
int main()
{
    int x=40, y=30;
    printf("%#010x", mniejsza(x, y));
    return 0;
}
