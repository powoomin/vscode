#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char * name;
    int kor;
    int eng;
    int math;

    int sum;
    double avg;

    int index;
} Score_entry;


typedef struct
{
    int max_entries ;
	int num_entries ;
	Score_entry * entries ;
} Score_list;

Score_list *Score_list_alloc(int n)
{
	if (n < 0)
		return 0x0;

	Score_list *l;

	l = (Score_list *)malloc(sizeof(Score_list));

	l->max_entries = n;
	l->num_entries = 0;
	l->entries = (Score_entry *)calloc(sizeof(Score_entry), n);

	return l;
}

Score_entry addScore(int i)
{
    Score_entry e;
    e.index = i;
    
    char *name = malloc(sizeof(char) * 20);

    printf("이름은? ");
    scanf("%s",name);
    e.name = name;
    printf("국어는? ");
    scanf("%d",&e.kor);
    printf("영어는? ");
    scanf("%d",&e.eng);
    printf("수학은? ");
    scanf("%d",&e.math);

    e.sum = e.kor + e.eng + e.math;
    e.avg = e.sum / 3.0;
    return e;
}

void Score_list_free(Score_list *l)
{
	if (l->entries)
		free(l->entries);
	free(l);
}

int Score_list_add(Score_list *l)
{
	if (l->num_entries == l->max_entries)
	{
		if (l->max_entries)
			l->max_entries += 1;
		else
			l->max_entries = 20;
		Score_entry *new_entries = (Score_entry *)calloc(sizeof(Score_entry), l->max_entries);
		memcpy(new_entries, l->entries, sizeof(Score_entry) * l->num_entries);
		if (l->entries)
			free(l->entries);
		l->entries = new_entries;
	}
    l->entries[l->num_entries] = addScore(l->num_entries+1);
	l->num_entries++;
	return 1;
}



void Score_print(Score_list * s)
{
    printf("NO. Name Kor Eng Math Sum Avg\n");
    printf("=========================\n");
	for (int i = 0; i < s->num_entries; i++)
    {
        printf("%d. %s %d %d %d %d %.1f\n", s->entries[i].index, s->entries[i].name, s->entries[i].kor, s->entries[i].eng, s->entries[i].math, s->entries[i].sum, s->entries[i].avg);
    }
}

void listScore(Score_list * s)
{
    printf("NO. Name Kor Eng Math Sum Avg\n");
    printf("=========================\n");
    Score_print(s);
}

int updateScore(Score_list * s, int i)
{
    s->entries[i-1] = addScore(i-1);
    s->entries[i-1].index++;
    return 1;
}

int deleteScore(Score_list * s, int i)
{
    i--;
 	if(i<0||i>s->num_entries-1){
		return 0;
	}
	for (int j = i; j < s->num_entries; j++){
		s->entries[j]=s->entries[j+1];
	}
	s->num_entries--;
	return 1;
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
    Score_list * s = Score_list_alloc(1);

    int count = 0, menu;
    int index = 0;
    while (1)
    {
        menu = selectMenu();
        if (menu == 0)
            break;
        if (menu == 1) // 리스트
        {
            Score_print(s);
        }
        else if (menu == 2) // 추가
        {
            Score_print(s);
            Score_list_add(s);
            count++;
        }
        else if (menu == 3) // 수정
        {
            Score_print(s);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);
            if(index != 0)
                updateScore(s, index);
        }
        else if (menu == 4) // 삭제
        {
            Score_print(s);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);
            if(index != 0)
                deleteScore(s, index);
                printf("=> 삭제됨!\n");

        }
    }
    Score_list_free(s);
    printf("종료됨!\n");
    return 0;
}