/*
소인수분해 1.0버젼
예제 입력 1 
72
예제 출력 1 
2
2
2
3
3
예제 입력 2 
3
예제 출력 2 
3
예제 입력 3 
6
예제 출력 3 
2
3
<mind> 
정수 입력 받기
2부터 나눠지는지 확인하기
    나눠지면 계속 2로 나누고 나눈 수를 프린트 함
    안나눠지면 +1하여 다시 위로 돌아감
몫이 1이 될때까지 반복
*/
#include <stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    
    while(1)
    {
        if(num == 1)
        {
            break;
        }
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                printf("%d\n",i);
                num = num/i;
                break;
            }
        }
    }
}