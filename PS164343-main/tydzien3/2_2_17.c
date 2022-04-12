#include <stdio.h>
#include <stdlib.h>
int ileWywolan()
{
    static unsigned int a= 0;
    return a+1;
}
int main()
{
    printf("%d", ileWywolan());
    return 0;
}
