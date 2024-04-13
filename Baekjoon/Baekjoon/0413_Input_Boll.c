//
//  0413_Input_Boll.c
//  Baekjoon
//  https://www.acmicpc.net/problem/10810
//  Created by 이민우 on 4/13/24.
//
/*
 01 첫번째 입력받는 줄 정의 (n,m)
 N : 0~N번까지의 바구니 범위 값 설정.
 M : 입력 받는 총 횟수 값 설정.
 
 02 두번째 입력받는 줄 정의 (i,j,k)
 I~J : 공을 집어넣을 i~j번 바구니 범위를 정함.
    (*주의점 : "이용자의 위치 주소 시작 숫자는 1이다. 0이 아니다.")
 K : i~j번 바구니에 k번 공으로 모두 바꿔치기함.
 
 03 출력
 N번까지 모든 바구니에 변경된 공번호를 출력한다.
 */
#include <stdio.h>

int main(void)
{
    //01
    int n,m;
    scanf("%d %d", &n, &m);
    int basket[n];
    for(int i=0; i<n; i++) // basket 모든 값 0으로 설정
    {
        basket[i] = 0;
    }

    //02
    int i,j,k;
    for(int i1=0; i1<m; i1++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for(int i2=i-1; i2<j; i2++) //i~j위치에 k값 집어넣기
        {
            basket[i2] = k;
        }
    }
    
    //03
    for(int i=0; i<n; i++)
    {
        printf("%d ", basket[i]);
    }
    
    return 0;
}
