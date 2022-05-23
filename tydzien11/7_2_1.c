#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    int bok_a;
    int bok_b;
    int bok_c;
};
int obwodTrojkata(struct trojkat trk)
{
    return trk.bok_a+trk.bok_b+trk.bok_c;
}
int main()
{
    struct trojkat trojkatRownoboczny;
    trojkatRownoboczny.bok_a=5;
    trojkatRownoboczny.bok_b=5;
    trojkatRownoboczny.bok_c=5;
    printf("%d",obwodTrojkata(trojkatRownoboczny));
    return 0;
}
