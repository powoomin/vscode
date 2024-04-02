#include <stdio.h>
int main(void)
{
    int score[5][3];
    int sum[5];
    double avg[5];
    char rating[5];

    for(int i=0; i<5; i++)  //score 입력받기
    {
        printf("%d번 : ", i+1);

        for(int o=0; o<3; o++)
        {
            scanf("%d", &score[i][o]);
        }
        printf("\n");
    } 

    for(int i=0;i<5;i++)    //score 합계
    {
        sum[i] = score[i][0] + score[i][1] + score[i][2];
        avg[i] = sum[i] / 3.0;
        
        if(avg[i] >= 90)        rating[i] = 'A';
        else if(avg[i] >= 80)   rating[i] = 'B';
        else if(avg[i] >= 70)   rating[i] = 'C';
        else if(avg[i] >= 60)   rating[i] = 'D';
        else                    rating[i] = 'F';
    }

    for(int i=0;i<5;i++)    //출력
    {
        printf("%d번 총점은 %d, 평균은 %.1f (등급 %c)\n\n", i+1, sum[i], avg[i], rating[i]);
    }
    return 0;
}
