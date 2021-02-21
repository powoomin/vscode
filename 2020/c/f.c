/*
복권 자동으로 번호 추천 해주는 프로그램
1~45사이의 번호중 중복없이 랜덤으로 6개를 추첨한다.
번호를 뽑은후 오름차순으로 정렬한다.
원하는 만큼 번호를 뽑아 준다.
1~45숫자중 많이 나오는 순으로 정렬한다. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num;
int Num;
int com_num;
int i;
int total[5];
int GetRandom()
{
    com_num = rand()%45+1;
    printf("%d ",com_num);
    if(com_num>=40) num = 0;
    else if(com_num >= 30) num = 1;
    else if(com_num >=20) num = 2;
    else if(com_num >=10) num = 3;
    else num =4;
    return num;
}

int main(){
    srand(time(NULL));
    for(i=0;i<6;i++){
        Num = GetRandom();
        if(Num == 0) total[0] = total[0] + 1;
        else if(Num == 1) total[1] = total[1] + 1;
        else if(Num == 2) total[2] = total[2] + 1;
        else if(Num == 3) total[3] = total[3] + 1;
        else if(Num == 4) total[4] = total[4] + 1;
    }
    printf("\n40이상 : %d회 생성\n",total[0]);
    printf("30 이상 : %d회 생성\n",total[1]);
    printf("20 이상 : %d회 생성\n",total[2]);
    printf("10 이상 : %d회 생성\n",total[3]);
    printf("1 이상 : %d회 생성\n",total[4]);

    

    return 0;
}