#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
랜덤 요소가 있어 테스트 케이스를 넣치 않았습니다.
꼭 코드를 실행시켜 실행 예와 비교해보시고 확인해서 submit을 눌러주세요 :)

[J03] 임의의 숫자를 만들어 구간을 리턴하는 함수 만들기 
  
1부터 100사이의 임의의 숫자를 만들어서 대(70 이상), 중(40이상~70미만), 소(40미만) 셋 중에 하나를 판정하여 결과를 리턴하는 함수 GetRandom()을 만들어라. 
그리고 이 함수를 이용해서 임의의 숫자 10개에 대해 대, 중, 소가 각각 몇 번씩 포함되어 있는지 개수를 출력하라. 

함수 원형은 다음과 같다.
 int GetRandom(void);
 파라미터) 없음
 리턴 값) 임의로 만들어낸 숫자가 속하는 구간번호 0.대(70 이상), 1.중(40이상~70미만), 2.소(40미만) 

실행 예)
10개의 숫자를 생성합니다.
생성된 임의의 숫자는 12 입니다.
생성된 임의의 숫자는 39 입니다.
생성된 임의의 숫자는 4 입니다.
생성된 임의의 숫자는 75 입니다.
생성된 임의의 숫자는 43 입니다.
생성된 임의의 숫자는 91 입니다.
생성된 임의의 숫자는 6 입니다.
생성된 임의의 숫자는 72 입니다.
생성된 임의의 숫자는 49 입니다.
생성된 임의의 숫자는 31 입니다.
1. 대 (70 이상) : 3회 생성
2. 중 (40 이상) : 2회 생성
3. 소 (40 미만) : 5회 생성
*/
int num;
int Num;
int com_num;
int i;
int total[3];
int GetRandom()
{
    com_num = rand()%100+1;
    printf("생성된 임의의 숫자는 %d 입니다.\n",com_num);
    if(com_num>=70) num = 0;
    else if(com_num >= 40) num = 1;
    else if(com_num <40) num = 2;
    return num;
}

int main(){
    srand(time(NULL));
    for(i=0;i<10;i++){
        Num = GetRandom();
        if(Num == 0) total[0] = total[0] + 1;
        else if(Num == 1) total[1] = total[1] + 1;
        else if(Num == 2) total[2] = total[2] + 1;
    }
    printf("1. 대 (70 이상) : %d회 생성\n",total[0]);
    printf("2. 중 (40 이상) : %d회 생성\n",total[1]);
    printf("3. 중 (40 미만) : %d회 생성\n",total[2]);
    

    return 0;
}
