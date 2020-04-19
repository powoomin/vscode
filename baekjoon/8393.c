/*
문제
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

출력
1부터 n까지 합을 출력한다.

예제 입력 1 
3
예제 출력 1 
6
*/
#include <stdio.h>
int main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        b = b+i;
    }
    printf("%d\n",b);
}