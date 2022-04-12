/*
int wzgledniePierwszaSuma(int n)
{
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i*j==n && n%i==0 && n%j==0 && i!=j && i%j!=0 && j%i!=0)
            {
                licznik++;
                if(licznik==2)
                {
                    return i+j;
                }
            }
        }
    }
    return n+1;
}
*/
#include <stdio.h>
#include <stdlib.h>
unsigned int nwd(unsigned int p, unsigned int d)
{
    while(p!=d)
    {
        if(p>d)
        {
            p=p-d;
        }
        else
        {
            d=d-p;
        }
    }
    return p;
}
unsigned int suma(unsigned int n)
{
    int i, wynik=0;
    for(int i=2;i<n;i++)
    {
        if(nwd(i, n)==1)
            wynik+=i;
    }
    return wynik;
}
int main()
{
    unsigned int a;
    printf("Podaj liczbe:");
    scanf("%d",&a);
    printf("%d", suma(a));
    return 0;
}
