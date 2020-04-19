/*
입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.

예제 입력 1 
5
1 1
2 3
3 4
9 8
5 2
예제 출력 1 
2
5
7
17
7
*/
#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    int b[a];
    for(i=0;i<a;i++)
    {
        int a1,a2;
        scanf("%d %d",&a1,&a2);
        b[i] = a1 + a2;
    }
    for(i=0;i<a;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}