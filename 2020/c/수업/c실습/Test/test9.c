#include <stdio.h>
/*
1. 파일을 열어 이름과 점수3개를 읽어들이고, 레코드 총 갯수를 찾아낸다.
2. 레코드 갯수만큼 반복하면서 총점과 평균, 순위를 찾아내 넣는다.
3. 레코드 갯수만큼 이름, 총점, 평균, 순위를 출력한다.
*/

struct st_score
{
    char name[10]; // 이름
    int jumsu[3];  // 점수 (C, Java, Python)
    int sum;       // 총점
    float avg;     //  평균
    int rank;      // 순위
};

int countrank(struct st_score *start, int size, int num);
/* 
첫번째 구조체의 주소인 start로부터 size갯수까지 탐색하면서 
num 이라는 점수보다 총점이 큰 구조체가 몇개인지 갯수를 세어 순위를 찾아내 리턴함. 
예를 들어 num 값보다 큰 총점이 3개라면 4등이므로 4를 리턴함.
*/
int main(void)
{
    int count, i;
    struct st_score score[10];
    FILE *fp;
    fp = fopen("data.txt", "r");
    while (1)
    {
        fscanf(fp, "%s", score[count].name);
        fscanf(fp, "%d %d %d", &score[count].jumsu[0], &score[count].jumsu[1], &score[count].jumsu[2]);
        if (feof(fp))
        {
            break;
        }
        else
        {
            count++;
        }
    }
    int size = count;
    int j;
    for (i = 0; i < size; i++)
    {
        score[i].sum = 0;
        for (j = 0; j < 3; j++)
        {
            score[i].sum = score[i].sum + score[i].jumsu[j];
        }
        score[i].avg = score[i].sum / 3.0;
    }

    for (i = 0; i < size; i++)
    {
        score[i].rank = countrank(score, size, i);
    }
    printf("%d records read.\n",count);
    for (i = 0; i < count; i++)
    {
        printf("%-10s %d %d %d %d %.1f %d\n", score[i].name, score[i].jumsu[0], score[i].jumsu[1], score[i].jumsu[2], score[i].sum, score[i].avg, score[i].rank);
    }
    return 0;
}

int countrank(struct st_score *start, int size, int num)
{
    int i, rank = 1;
    for (i = 0; i < size; i++)
    {
        if (start[num].avg < start[i].avg)
        {
            rank++;
        }
    }
    return rank;
}
