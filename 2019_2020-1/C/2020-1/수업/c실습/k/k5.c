#include <stdio.h>
/*
[K05] 주차 관리 시스템 
  
주차장에서 차량들의 주차 관리 시스템을 만들어라. 
차량마다 주차를 시작한 시간을 시와 분으로 입력받고, 주차를 종료한 시간을 시와 분으로 입력받은 후, 이를 CalcParking() 함수에 파라미터로 넘겨 주차요금을 리턴받도록 하라. 
차량이 더 있는지 물어서 더 이상 차량이 없을 때까지 반복해서 요금을 계산하되 반복이 끝나면 지금까지 계산한 차량의 수량과 총 주차요금을 화면에 출력하라. 
주차요금은 10분당 500원으로 한다. 

함수의 원형은 다음과 같다.
 int CalcParking(int start_h, int start_m, int end_h, int end_m);
 파라미터) start_h : 주차시작 시, start_m : 주차시작 분, end_h : 주차종료 시, end_m : 주차종료 분
 리턴값) 주차시작 시간(시, 분)부터 종료 시간(시, 분)까지의 주차요금(원) 

실행 예)
1번 차량 주차 시작 시각 (시 분) :  10 30
1번 차량 주차 종료 시각 (시 분) :  11 15
주차요금 : 2500원
더 입력하시겠습니까?(Y=1/N=0) 1
2번 차량 주차 시작 시각 (시 분) :  9 10
2번 차량 주차 종료 시각 (시 분) :  15 10
주차요금 : 18000원
더 입력하시겠습니까?(Y=1/N=0) 0
주차차량 2대의 총 주차 요금은 20500원 입니다.
*/
int money[1];
int hour, min;
int count[1];
int Sum[1];
int price;
int total[1];
int Bool;
int input_time()
{
    while(1)
    {
        Sum[0]=0;
        count[0]++;
        printf("%d번 차량 주차 시작 시각 (시 분) :  ",count[0]);
        scanf("%d %d",&hour,&min);
        Sum[0] = Sum[0] + hour*60 + min;
        printf("%d번 차량 주차 종료 시각 (시 분) :  ",count[0]);
        scanf("%d %d",&hour,&min);
        Sum[0] = ((hour*60 + min) - Sum[0]);
        if(Sum[0]%10 != 0){
            price = (Sum[0]/10+1)*500;
        }
        else price = (Sum[0]/10)*500;
        total[0] = total[0] + price;
        printf("주차요금 : %d원\n",price);
        printf("더 입력하시겠습니까? (Y=1/N=0) ");
        scanf("%d",&Bool);
        if(Bool == 0) break;
    }
    printf("주차차량 %d대의 총 주차 요금은 %d원 입니다.",count[0],total[0]);
    return 0;
}
int main()
{
    input_time();
}