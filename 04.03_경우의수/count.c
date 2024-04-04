//
//  count.c
//  
//
//  Created by 이민우 on 4/3/24.
//  일어날 수 있는 경우의 수를 구해주는 코드
#include "count.h"

void Roundtable_chairs(); //  1. 원탁의자에 앉을 수 있는 경우의 수


int main(void)
{
    Roundtable_chairs();
    return 0;
}

void Roundtable_chairs()
{
    int total_chairs, total_human;
    int total_all_cases;
    printf("1. 원탁의자에 앉을 수 있는 경우의 수를 보여드리겠습니다.\n");
    printf("의자 갯수는? : ");
    scanf("%d", &total_chairs);
    
    printf("총 인원은? : ");
    scanf("%d", &total_human);
    
    int n = total_chairs;
    int m = total_human;
    int v = 1;
    for(int i=n; i!=n-m ; i--)
    {
        v = v*i;
    }
    printf("all cases = %d\n", v);
}
