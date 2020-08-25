#include <stdio.h>

int Bool(int n);
int self_num(int n);
int main(void)
{
    for(int i=1;i<=10000;i++)
    {
        int B = Bool(i);
        if(B == 0) printf("%d\n",i);
    }
}
int Bool(int n)
{
    for(int i=n-1;i>0;i--)
    {

    }
    

}
int self_num(int n)
{
    int sum = 0;
    sum = sum + n + n/10 + n%10;

}