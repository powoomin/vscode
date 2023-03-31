#include <stdio.h>
/*구조체 + 포인터 + 함수 사용

구조체 만들거
- int 점수
- int 합계
- double 평균
- char 등급

-> 이걸 한 사람당 모두 표현가능하게 포인터 + 구조체를 섞어 볼까?
-> ex) no.1 이민우[총300점, 평균, 등급] 이런식으로바꾸려면
    -> 스코어, 총합, 평균
    -> 등급
        0 = A , 1 = B , 2 = C , 3 = D , 4 = F 로 저장

만들어야 할 함수
1. score 입력받는 함수
2. 스코어, 총합, 평균 계산 하여 구조체에 저장하는 함수
3. 출력 함수

*/
typedef struct _student
{
    char name[20];  //나중을 위하여
    int score[3];   //스코어
    int sum;        //총 합
    double avg;     //평균
    char rating;    //등급
} Student;

void Input(Student *s) // 입력받기 함수
{
    for (int k = 0; k < 3; k++)
    {
        scanf("%d", &s->score[k]);
    }
}

void Calculate(Student *s)  //총 합, 평균, 등급 계산 함수
{

    s->sum = s->score[0] + s->score[1] + s->score[2];
    s->avg = s->sum / 3.0;

    if (s->avg >= 90)
        s->rating = 'A';
    else if (s->avg >= 80)
        s->rating = 'B';
    else if (s->avg >= 70)
        s->rating = 'C';
    else if (s->avg >= 60)
        s->rating = 'D';
    else
        s->rating = 'F';
}

void Print(Student *s) // 출력 함수
{

    printf("총점은 %d, 평균은 %.1f (등급 %c)\n\n", s->sum, s->avg, s->rating);
}

int main(void)
{
    Student s[5];

    for (int i = 0; i < 5; i++) // 입력받기 & 계산 각각 5번
    {
        printf("%d번 : ", i + 1);

        Input(&s[i]);

        Calculate(&s[i]);
    }

    for (int i = 0; i < 5; i++)     //출력 각각 5번
    {
        printf("%d번 ", i + 1);
        Print(&s[i]);
    }

    return 0;
}
