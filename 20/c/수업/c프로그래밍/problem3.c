#include <stdio.h>
/*
write a recursive function power(n,m) 
At the first and last line of the function display 
the value of par
*/
int power(int n, int m);
int main()
{
    int n,m;
    printf("power(n,m) : ");
    scanf("%d %d",&n,&m);
    printf("power(%d,%d) = %d\n",n,m,power(n,m));
    return 0;
}
int power(int n, int m)
{
    if(m == 1)
    {
        return n*1;
    }
    else
    {
        return n * power(n, m-1);
    }
}
