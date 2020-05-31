#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>    // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

/*
[문제 3]
사용자에게 양의 정수 n을 입력하라는 메시지를 작성하고
0과 n 사이에서 30의 난수 (414로 시드)를 생성하고 
(즉, 가장 작은 숫자는 0이고 가장 큰 숫자는 n) 
'arry [30]'이라는 배열에 저장하십시오. 
전체 배열을 함수 'array_max ()'에 전달하십시오. 
함수 'array_max ()'는 main 함수에서 전체 배열을 수신하고 
가장 큰 요소를 찾아 main 함수로 반환합니다. 
그런 다음 주 함수 표시 값이 함수 'array_max ()'에서 반환되었습니다. 
사용자가 0 또는 음의 정수를 입력 한 경우 INT_MAX를 리턴하십시오. 
사용자가 숫자가 아닌 문자를 입력하면 
'잘못된 입력을 입력했습니다'라는 오류 메시지가 표시됩니다.

[예]
양의 정수를 입력하십시오 : 32
31
*/

int arry[30];
int num;
int i;
int Max;

int array_max(){
  Max = arry[0];
  for(i=1;i<30;i++){
    if(Max<arry[i]) Max = arry[i];
  }
  return Max;
}

int main(){
  srand(414);
  scanf("%d",&num);
  printf("Enter positive integer: ");
  if(num<1) printf("%d",INT_MAX);
  else 
  {
    for(i=0;i<30;i++)
    {
      arry[i] = rand()%num;
    }
  printf("%d",array_max());
  }
}