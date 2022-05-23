#include <stdio.h>
#include <stdlib.h>
int dlugosc(char*napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
int czyNalezy(char *napis, char znak)
{
    for(int i=0;i<dlugosc(napis);i++)
    {
        if(napis[i]==znak)
            return 1;
    }
    return 0;
}
void wytnijzn(char *napis1, char *napis2)
{
    int d1=dlugosc(napis1);
    char temp[d1+1];
    int j=0;
    for(int i=0;i<d1;i++)
    {
        if (czyNalezy(napis2,napis1[i])==0)
        {
            temp[j]=napis1[i];
            j++;
        }
    }
    temp[j]=0;
    for(int k=0;k<j;k++)
    {
        napis1[k]=temp[k];
    }
    napis1[j]=0;
}
int main()
{
    char napis1[]="siema";
    char napis2[]="czesc";
    printf("%s\n",napis1);
    printf("%s\n",napis2);
    wytnijzn(napis1,napis2);
    printf("%s\n",napis1);
    printf("%s\n",napis2);
    return 0;
}
