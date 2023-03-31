#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("input num : ");
    scanf("%d",&n);
    int resurt = sum(n);
    printf("sum = %d\n",resurt);
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n + sum(n-1);
    }
}