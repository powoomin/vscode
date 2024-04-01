#include <stdio.h>

/*
2/23 백준 문제
1차 배열 문제
공 넣기_10810번 문제
링크 : https://www.acmicpc.net/problem/10810

정리
    n개의 바구니 개수 값을 입력받고, m번만큼 어떤 바구니에 어떤 번호의 공을 넣을지 결정하는 횟수를 정한다.
    5 4     -> 총 5개의 바구니를 생성, 4번 밑에 입력받음
    1 3 6   -> 1번 ~ 3번까지 바구니에 6번 공들을 다 집어넣음 이하 총 4번 다양한 입력으로 반복

    마지막에 각 바구니에 어떤 번호의 농구공이 있는지 출력하면 끝.
*/

void insert_ball(int baskets_arr[], int m)
{
    int j,k,l; //j~k번까지 바구니에 l번 농구공을 집어넣음.
    for(int i=0; i<m; i++)
    {
        scanf("%d %d %d", &j, &k, &l);
        for(; j<k; j++)
        {
            baskets_arr[j] = l;
        }

        print_arr(baskets_arr);
    }
}

void print_arr(int baskets_arr[])
{
    int i=0;
    while(1)
    {
        if(baskets_arr[i] == NULL) break;
        printf("%d ",baskets_arr[i]);
    }
}

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int baskets_arr[n];
    
    insert_ball(baskets_arr, m);

    for(int i=0; i<n; i++) //마무리 출력
    {
        printf("%d ", baskets_arr[i]);
    }

    return 0;
}