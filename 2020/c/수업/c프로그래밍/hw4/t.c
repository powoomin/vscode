#include <stdio.h>

int main()
{
    int a, b, c;
    int *p, *q, *r;
    a = 6;
    b = 2;
    c = 3;
    p = &b; //p=2
    printf("p = %d\n", *p);
    q = p;  //q=2
    r = &c; //r=3
    printf("q = %d\nr = %d\n", *q, *r);
    p = &a; //p=6
    *q = 8; //q=8
    printf("p = %d\nq = %d\n", *p, *q);
}