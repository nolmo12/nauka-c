#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {1,6,4,3,4,3}; // tu wpisz cyfry ze swojego numeru indeksu
    int *wsk=tab+1;
    int b = *(wsk+=1); //b=4
    int c = b+2; // b=4  , c=6
    int d = c--;
    int e = (wsk+=-1)[3]; // b=4  , c= 5 , d=6  , e=4
    e = (d -= 3) + (c += 2); // b=4  , c=7  , d=3  , e=10
    c = d - (b+=3); // b=7  , c=-4  , d=3  , e=10
    b = *wsk + e+3; // b=19  , c=-4  , d=3  , e=10
    b= (--c)-(d++);  // b=-8  , c=-5  , d=4  , e=10
    return 0;
}
