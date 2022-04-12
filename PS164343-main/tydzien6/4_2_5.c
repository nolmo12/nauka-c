#include <stdio.h>
#include <stdlib.h>
int najwiekszaPierwsza(int n)
{
    int tab[n];
    int wielokrotnosc;
    if(n<3)
        return 0;
    else
    {
        for(int i=2;i<n+2;i++)
        {
           tab[i]=0;
           if(i%2==0)
           {
               tab[i]=1;
           }
        }
        for(int i=3;i<n;i++)
        {
            wielokrotnosc=i;
            for(int j=i+1;j<n;j++)
            {
                if(j%wielokrotnosc==0)
                {
                    tab[j]=1;
                }
            }
        }
    }
    for(int i=n;i>=0;i--)
    {
        if(tab[i]==0)
            return i;
    }
}
int main()
{
    printf("%d\n",najwiekszaPierwsza(10));
    return 0;
}
