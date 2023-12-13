#include <stdio.h>
/*
총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
*/
void stupid_code();

int main()
{
    stupid_code(); // 1번째 짠 코드
    return 0;
}

void stupid_code()
{
    int N;
    scanf("%d",&N);
    
    int array[N];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&array[i]);
    }

    int find_num;
    int find_count = 0;
    scanf("%d", &find_num);
    for(int i=0 ; i<N ; i++)
    {
        if(find_num == array[i]) find_count ++;
    }

    printf("%d",find_count);
}