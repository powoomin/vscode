#include <stdio.h>
/*
서기 연도를 알아보고 싶은 불기 연도 y가 주어진다. (1000 ≤ y ≤ 3000)
불기 연도를 서기 연도로 변환한 결과를 출력한다.

입력 : 2541
출력 : 1998

차이 : 543년
*/
int main(void)
{
    int year;
    scanf("%d",&year);
    printf("%d",year-543);
}