#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[20];
    int kor;
    int eng;
    int math;

    int sum;
    double avg;
} Score;

int addScore(Score *s)
{
    printf("이름은? ");
    scanf("%s",s->name);
    printf("국어는? ");
    scanf("%d",&s->kor);
    printf("영어는? ");
    scanf("%d",&s->eng);
    printf("수학은? ");
    scanf("%d",&s->math);

    s->sum = s->kor + s->eng + s->math;
    s->avg = s->sum / 3.0;
    return 0;
}

void readScore(Score s)
{
    printf("Name Kor Eng Math Sum Avg\n");
    printf("%s %d %d %d %d %.1f\n", s.name, s.kor, s.eng, s.math, s.sum, s.avg);
}

int updateScore(Score *s)
{
    printf("이름은? ");
    scanf("%s",s->name);
    printf("국어는? ");
    scanf("%d",&s->kor);
    printf("영어는? ");
    scanf("%d",&s->eng);
    printf("수학은? ");
    scanf("%d",&s->math);

    printf("=>수정 성공!\n");

    s->sum = s->kor + s->eng + s->math;
    s->avg = s->sum / 3.0;
    return 0;
}

int deleteScore(Score *s)
{
    for(int i=0;i<sizeof(s->name);i++)
    {
        s->name[i] = 0x0;
    }
    s->kor = -1;
    s->eng = -1;
    s->math = -1;
    s->sum = -1;
    s->avg = -1;
    printf("=> 삭제됨!\n");
    return 0;
}

int selectMenu()
{
    int menu;
    printf("\n*** 점수계산기 ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}
int main(void)
{
    Score s;
    int count = 0, menu;

    while (1)
    {
        menu = selectMenu();
        if (menu == 0)
            break;
        if (menu == 1)
        {
            readScore(s);
        }
        else if (menu == 2)
        {
            addScore(&s);
            count++;
        }
        else if (menu == 3)
        {
            updateScore(&s);
        }
        else if (menu == 4)
        {
            deleteScore(&s);
            count--;
        }
    }
    printf("종료됨!\n");
    return 0;
}