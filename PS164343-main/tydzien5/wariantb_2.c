#include <stdio.h>
#include <stdlib.h>
int ciag(unsigned int n)
{
    int k=2*n;
    if(k%2==0)
    {
        if(n-1>0)
        return ciag(n-1)+n;
        else
            return 3+n;
    }
    else if(n%2!=0)
    {
        return 2*ciag(k)-k;
    }
    return 3;
}
int main()
{
    unsigned int n;
    scanf("%d", &n);
    printf("%d",ciag(n));
    return 0;
}
