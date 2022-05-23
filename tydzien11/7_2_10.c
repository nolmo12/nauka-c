#include <stdio.h>
#include <stdlib.h>
union super_int
{
    int a;
    unsigned int b;
};
int main()
{
    union super_int liczba;
    liczba.a=-2;
    printf("%d\n",liczba.a);
    printf("%u\n",liczba.b);
    return 0;
}
