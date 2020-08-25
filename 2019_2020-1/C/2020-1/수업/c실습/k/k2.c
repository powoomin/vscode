#include <stdio.h>
/*
[K02] 심사점수 계산 
 
심사점수를 10개를 입력받아 배열에 저장한 후, 이 배열을 파라미터로 하여 
가장 큰 점수를 구하는 Max() 와 
가장 작은 점수를 구하는 Min()을 사용하여 
10개의 점수 중 최대점수와 최소점수를 제외한 8개의 점수 에 대한 평균을 계산하여 출력하라.
 
함수의 원형은 다음과 같다. 
float Max(float num[], int size);
 파라미터) num[] : 숫자 배열, size : 배열의 갯수 
 리턴값) 숫자 배열에서 가장 큰 값 

float Min(float num[], int size);
 파라미터) num[] : 숫자 배열, size : 배열의 갯수 
 리턴값) 숫자 배열에서 가장 작은 값 

실행 예)
1번 심사점수를 입력하시오. 7.5
2번 심사점수를 입력하시오. 9.9
3번 심사점수를 입력하시오. 8.4
4번 심사점수를 입력하시오. 6.4
5번 심사점수를 입력하시오. 5.8
6번 심사점수를 입력하시오. 8.0
7번 심사점수를 입력하시오. 6.9
8번 심사점수를 입력하시오. 7.0
9번 심사점수를 입력하시오. 7.3
10번 심사점수를 입력하시오. 8.9
가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수에 대한 평균은 7.6 입니다. 
*/
//숫자 10개 입력 받아서 배열에 저장하는 + 버블소트로 배열 저장
//1~8까지의 수를 모두 합치고 /8해서 평균값 구하기
int i;
float nums[10];
float save_num;
int Bool=0;
float Sum=0;
float Averge;
int input_nums(){
    for(i=0;i<10;i++){
        printf("%d번 심사점수를 입력하시오. ",i+1);
        scanf("%f",&nums[i]);
    }
    while(1){
        Bool=0;
        for(i=0;i<9;i++){
            if(nums[i]>nums[i+1]){
                save_num = nums[i+1];
                nums[i+1] = nums[i];
                nums[i] = save_num;
                Bool = 1;
            }
        }
        if(Bool == 0) break;
    }
    return 0;
}

float averge(){
    for(i=1;i<9;i++){
        Sum = Sum + nums[i];
    }
    Averge = Sum/8.0;
    return Averge;
}

int main(){
    input_nums();
    printf("가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수에 대한 평균은 %.1f 입니다.",averge());
    return 0;
}