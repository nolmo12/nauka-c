#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    int bok_a;
    int bok_b;
    int bok_c;
};
void obwodTrojkata(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2->troj1
}
int main()
{
    struct trojkat troj1;
    troj1.bok_a=3;
    troj1.bok_b=4;
    troj1.bok_c=5;
    struct trojkat troj2;
    obwodTrojkata(troj1, &troj2);
    printf("%d", troj2.bok_c);
    return 0;
}
