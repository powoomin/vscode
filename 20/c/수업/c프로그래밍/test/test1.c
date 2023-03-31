#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>    // 자료형의 최댓값과 최솟값이 정의된 헤더 파일


/*
[문제 1]
사용자에게 양의 정수 n을 입력하고 0과 n 사이의 30 개의 난수를 생성하고 
(즉, 가장 작은 숫자는 0이고 가장 큰 숫자는 n), 
arry [30]라는 배열에 저장하고 
첫 번째와 마지막 배열 요소를 표시하는 프로그램을 작성하십시오. 
. 초기 시드를 414로 설정하십시오. 
생성 된 임의의 숫자는 버리지 마십시오. 
사용자가 0 또는 음의 정수를 입력 한 경우 INT_MAX를 리턴하십시오.

[예]
양의 정수를 입력하십시오 : 13
6 5
*/
int arry[30];
int num;
int i;


int main(){
    srand(414);
    printf("양의 정수를 입력하십시오 : ");
    scanf("%d",&num);
    if(num<1) printf("%d\n",INT_MAX);
    else {
    for(i=0;i<30;i++){
        arry[i] = rand()%(1+num);
    }
    printf("%d %d\n",arry[0],arry[num-1]);
    }
    printf("arry = ");

    
}