/*
숫자를 입력받아 배열에 저장
각 배열로 끊어서 ++ 해서 합값을 출력
*/
#include <stdio.h>
#include <stdlib.h>

char num[8];
char c_num[2];
int d_num;
int Sum;
int i;
int main()
{
    printf("Enter your birtdate >> ");
    scanf("%s",num);
    for(i=0;i<4;i++)
    {
        c_num[0] = num[i];
        d_num = atoi(c_num);
        Sum = Sum + d_num;
    }
    c_num[0] = num[4];
    c_num[1] = num[5];
    d_num = atoi(c_num);
    Sum = Sum + d_num;    

    c_num[0] = num[6];
    c_num[1] = num[7];
    d_num = atoi(c_num);
    Sum = Sum + d_num;    

    printf("Sum = %d\n",Sum);
}