/*
ox 퀴즈
문제
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.

출력
각 테스트 케이스마다 점수를 출력한다.

예제 입력 1 
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
예제 출력 1 
10
9
7
55
30

<mind>
O일 경우
    total count +1 한다
    연속 O일 경우
        (total count+1)+1 한다
X일 경우
    total count를 0으로 초기화한다
*/
#include <stdio.h>
int main(void)
{
    int count;
    scanf("%d",&count);
    int an[count];
    for(int i=0;i<count;i++)
    {
        int N=0;
        int total=0;
        char ox[100]="";
        scanf("%s",ox);
        for(int j=0;j<sizeof(ox)/sizeof(ox[0]);j++)
        {
            if(ox[j]=='O')
            {
                N += 1;
                total += N;
            }
            else if(ox[j]=='X')
            {
                N = 0;
            }
        }
        an[i] = total;
    }
    for(int i=0;i<count;i++)
    {
        printf("%d\n",an[i]);
    }
}