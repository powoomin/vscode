/*
소인수분해 1.1버젼
첫째 줄에 테스트 케이스의 수가 주어진다. 
각 테스트 케이스마다 양의 정수 N (2 ≤ N ≤ 100,000)이 주어진다.
예제 입력 1 
2
6
24
예제 출력 1 
2 1
3 1
2 3
3 1

<remind>
11653에서 가져옴
케이스 갯수 받음(받은 만큼 반복)
나눠질때마다 나눈 수를 +1 하여 따로 저장함
나눈 수와 몇번 나눴는지 프린트
*/
#include <stdio.h>
int main()
{
    int i,count;
    scanf("%d",&count);
    int num[count];
    for(i=0;i<count;i++)
    {
        scanf("%d",&num[i]);
        while(1)
        {
            if(num[i] == 1)
            {
                break;
            }
            for(i=2;i<=num[i];i++)
            {
                if(num[i]%i==0)
                {
                    // 추가
                    
                    //
                    num[i]= num[i]/i;
                    break;
                }
            }
        }
    }
}
