// 9개 입력받은 수 중에서 가장 큰 수와 몇번째인지 표시하라
#include <stdio.h>
int main(void)
{
    int a=0,b,c;
    for(int i=0;i<9;i++)
    {
        scanf("%d",&c);
        if(c>a)
        {
            a = c;
            b = i+1;
        }

    }
    printf("%d %d\n",a,b);
}