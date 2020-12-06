#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h> 
#include <ctype.h>

/*
사용자에게 양의 정수 n을 입력하라는 메시지를 작성하고 
0과 n 사이에서 30의 난수 (414로 시드)를 생성하고 
(즉, 가장 작은 숫자는 0이고 가장 큰 숫자는 n) 
'arry [30]'이라는 배열에 저장하십시오. 
전체 배열을 함수 'no_meaning ()'에 전달하십시오. 
‘no_meaning ()’함수는 기본 함수에서 전체 배열을 수신하고 
arry [10] 및 arry [20] 요소를 교체하고 종료합니다. 
그런 다음 주 기능 표시가 잘못되었습니다 [10]. 
생성 된 임의의 숫자를 버리지 마십시오. 
사용자가 0 또는 음의 정수를 입력 한 경우 INT_MAX를 리턴하십시오. 
사용자가 숫자가 아닌 문자를 입력하면 '잘못된 입력을 입력했습니다'라는 오류 메시지가 표시됩니다.

[예]
양의 정수를 입력하십시오 : 12
6
*/
int arry[30];
int num;
int i;
int save_num;
int Bool = 0;
int no_meaning(){
    save_num = arry[10];
    arry[10] = arry[20];
    arry[20] = save_num;
    return 0;
}

int main(){
    int check = 0;

    srand(414);

    printf("양의 정수를 입력하십시오 : ");
    check = scanf_s("%d",num);
    if(check == 1){
        if(num<1) printf("%d\n",INT_MAX);
        else{
            for(i=0;i<30;i++){
                arry[i]=rand()%(num+1);
            }
            no_meaning();
            printf("%d\n",arry[10]);
            printf("arry = ");
            for(i=0;i<30;i++){
                printf("%d ",arry[i]);
            }
        }
    }
    else printf("잘못된 입력을 입력했습니다");
}