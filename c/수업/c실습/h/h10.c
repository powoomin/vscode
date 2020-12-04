/*
H10
문자열 역순으로 출력하기 

문자열을 역순으로 출력하는 함수를 만들고, 이를 사용해서 
하나의 문자열을 입력받은 후에 거꾸로 출력하라.

함수 원형은 다음과 같다.
void print_reverse(char str[]); 

실행 예)
문자열 입력 Hello World!
역순으로 변환한 문자열은 !dlroW olleH

<feedback>
함수 원형을 꼭 지켜주세요
전역 변수는 사용하지 않고 문제를 풀어주세요 
수정 부탁드립니다 :)
*/

/*
문자 입력 받기
입력 받은 문자 배열 역순으로 프린트하기 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_reverse(char str[])
{
    int i,k;

    k = strlen(str);
    for(i=k-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}

int main()
{
    char str[10000];
    printf("문자열 입력 ");
    scanf(" %[^\n]s",str);
    print_reverse(str);
}