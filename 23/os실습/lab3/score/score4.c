#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "score.h"

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
    scanf("%s", name);
    e.name = name;
    printf("국어는? ");
    scanf("%d", &e.kor);
    printf("영어는? ");
    scanf("%d", &e.eng);
    printf("수학은? ");
    scanf("%d", &e.math);

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
    l->entries[l->num_entries] = addScore(l->num_entries);
    l->num_entries++;
    return 1;
}

void Score_print(Score_list *s)
{
    printf("NO. Name Kor Eng Math Sum Avg\n");
    printf("=========================\n");
    for (int i = 0; i < s->num_entries; i++)
    {
        printf("%d. %s %d %d %d %d %.1f\n", s->entries[i].index+1, s->entries[i].name, s->entries[i].kor, s->entries[i].eng, s->entries[i].math, s->entries[i].sum, s->entries[i].avg);
    }
}

void listScore(Score_list *s)
{
    printf("NO. Name Kor Eng Math Sum Avg\n");
    printf("=========================\n");
    Score_print(s);
}

int updateScore(Score_list *s, int i)
{
    s->entries[i - 1] = addScore(i - 1);
    return 1;
}

int deleteScore(Score_list *s, int i)
{
    i--;
    if (i < 0 || i > s->num_entries - 1)
    {
        return 0;
    }
    for (int j = i; j < s->num_entries; j++)
    {
        s->entries[j] = s->entries[j + 1];
    }
    s->num_entries--;
    return 1;
}

int Score_list_find(Score_list * s, char * c)
{
    
    for(int i=0; i < s->num_entries; i++)
    {
        if(strcmp(c,s->entries[i].name) == 0)
        {
            printf("이름을 찾았습니다 :D\n");
            printf("%d. %s %d %d %d %d %.1f\n", s->entries[i].index+1, s->entries[i].name, s->entries[i].kor, s->entries[i].eng, s->entries[i].math, s->entries[i].sum, s->entries[i].avg);
            return 1;
        }
    }
    printf("찾는 이름이 없습니다 :<\n");
    return 0;
}


int print_Menu()
{
    int menu;
    printf("\n*** 점수계산기 ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 저장\n");
    printf("6. 이름 찾기\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

void selectMenu(Score_list *s)
{
    int count = 0, menu;
    int index = 0;

    while (1)
    {
        menu = print_Menu();
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
            if (index != 0)
                updateScore(s, index);
        }
        else if (menu == 4) // 삭제
        {
            Score_print(s);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);
            if (index != 0)
                deleteScore(s, index);
            printf("=> 삭제됨!\n");
        }
        else if (menu == 5)
        {
            file_save_data(s);

            printf("파일에 저장되었습니다 :D\n");
        }
        else if (menu == 6)
        {
            char * c = malloc(sizeof(char) * 20);
            printf("이름을 입력해주세요 : ");
            scanf("%s", c);
            Score_list_find(s, c);
        }
    }
    Score_list_free(s);
    printf("종료됨!\n");
}

//---------------------------------------

void file_lode_data(Score_list *l) // 나중에 헤더파일에도 추가
{
    FILE *fp;
    fp = fopen("score.txt", "rt");
    char c;
    if (fp == 0x0)
        printf("파일 내용이 없습니다. :<\n");
    else
    {
        while ((fputs(&c, fp)) != EOF)
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

            Score_entry e;
            e.index = l->num_entries;

            char *name = malloc(sizeof(char) * 20);
            int kor = 0x0, eng = 0x0, math = 0x0, sum = 0x0;
            double avg = 0x0;

            fscanf(fp, "%s", name);           
            fscanf(fp, "%d", &kor);
            fscanf(fp, "%d", &eng);
            fscanf(fp, "%d", &math);

            if(fgetc(fp) == EOF)
                break;
            e.name = name;
            e.kor = kor;
            e.eng = eng;
            e.math = math;
            e.sum = kor + eng + math;
            e.avg = sum / 3.0;

            l->entries[l->num_entries] = e;
            l->num_entries++;
        }
        printf("파일 내용을 가왔습니다 :D \n ");
        fclose(fp);
    }
}

void file_save_data(Score_list * l)
{
    FILE * fp;
    fp = fopen("score.txt", "wt");
    
    for (int i = 0; i < l->num_entries; i++)
    {
        char * name = l->entries[i].name;
        int  kor = l->entries[i].kor;
        int  eng = l->entries[i].eng;
        int  math = l->entries[i].math;
        //printf("%s %d %d \n", l->entries[i].name, l->entries[i].kor, l->entries[i].eng, l->entries[i].math);
        fprintf(fp,"%s %d %d %d \n",l->entries[i].name, l->entries[i].kor, l->entries[i].eng, l->entries[i].math);
    }

    fclose(fp);
}