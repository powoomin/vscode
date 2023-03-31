#include <stdio.h>
/*
[J02] 최댓값 리턴하는 함수 만들기 
  
숫자 10개를 입력받아 이 중 최댓값을 찾아서 리턴하는 함수 MaxOfTen()을 만들고, 
이 함수를 이용하여 10개의 숫자 중 최댓값을 출력하라. 

함수 원형은 다음과 같다. 
int MaxOfTen(void);
 파라미터) 없음
 리턴 값) 최댓값 

실행 예)
10개의 숫자 중 최댓값을 구합니다.
1번 수를 입력하시오. 11
2번 수를 입력하시오. 22
3번 수를 입력하시오. 66
4번 수를 입력하시오. 88
5번 수를 입력하시오. 77
6번 수를 입력하시오. 44
7번 수를 입력하시오. 99
8번 수를 입력하시오. 55
9번 수를 입력하시오. 33
10번 수를 입력하시오. 46
최댓값은 99입니다. 
*/
int num;
int nums[10];
int i;
int Max;

int MaxofTen(void)
{
    Max = nums[0];
    for(i=1;i<10;i++)
    {
       if(Max<nums[i]) 
       {
           Max = nums[i];
       }
    }
    printf("최댓값은 %d입니다.\n",Max);
    return 0;
}

int produce(void)
{
    printf("10개의 숫자 중 최댓값을 구합니다.\n");
    for(i=0;i<10;i++)
    {
        printf("%d번 수를 입력하시오. ",i+1);
        scanf("%d",&nums[i]);
    }
    return 0;
}

int main(void)
{
    produce();
    MaxofTen();
    return 0;
}