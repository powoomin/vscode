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
    char *rating = malloc(sizeof(char) * 20);
    char *requirements = malloc(sizeof(char) * 100);

    printf("**** 객실유형 *****\n");
    printf("1. 더블룸 	1박 30,000원\n");
    printf("2. 트윈룸 	1박 25,000원\n");
    printf("3. 패밀리룸	1박 60,000원\n");
    printf("*********\n");

    printf("유형별 개수는? ");
    scanf("%d %d %d", &e.count[0], &e.count[1], &e.count[2]);

    printf("예약자는? ");
    scanf("%s", name);
    e.name = name;

    printf("예약자 등급은(B,S,G) ? ");
    scanf("%s", rating);
    e.rating = rating;

    getchar();
    printf("요청사항은 ? \n");
    scanf("%[^\n]s", requirements);
    e.requirements = requirements;

    e.reservation_amount = e.count[0] * 30000 + e.count[1] * 25000 + e.count[2] * 60000;
    printf("=> 예약됨!  총 금액 :  %d 원\n", e.reservation_amount);
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
    /*
    1  1-0-0	 jang B	30000 조금 늦게 가요
    2  0-1-1	 sally S	85000 잘 부탁드려요

    => 총 예약 2건 */
    for (int i = 0; i < s->num_entries; i++)
    {
        printf("%d %d-%d-%d     %s %s %d %s\n", s->entries[i].index + 1,
               s->entries[i].count[0], s->entries[i].count[1], s->entries[i].count[2],
               s->entries[i].name,
               s->entries[i].rating,
               s->entries[i].reservation_amount,
               s->entries[i].requirements);
    }

    printf("=> 총 예약 %d건\n", s->num_entries);
}

void listScore(Score_list *s)
{
    printf("No  예약방   예약자   등급   가격      요청사항\n");
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

    s->entries->Y_N = "Y";

    for (int j = i; j < s->num_entries; j++)
    {
        s->entries[j] = s->entries[j + 1];
    }
    s->num_entries--;
    return 1;
}

int Score_list_find(Score_list *s, char *c)
{

    for (int i = 0; i < s->num_entries; i++)
    {
        if (strcmp(c, s->entries[i].name) == 0)
        {
            printf("No  예약방   예약자   등급   가격      요청사항\n");
            printf("=========================\n");
            printf("이름을 찾았습니다 :D\n");
            printf("%d %d-%d-%d     %s %s %d %s\n", s->entries[i].index + 1,\
               s->entries[i].count[0], s->entries[i].count[1], s->entries[i].count[2],\
               s->entries[i].name,\
               s->entries[i].rating,\
               s->entries[i].reservation_amount,\
               s->entries[i].requirements);            
               return 1;
        }
    }
    printf("No  예약방   예약자   등급   가격      요청사항\n");
    printf("=========================\n");
    printf("=> 검색된 데이터 없음! :<\n");
    return 0;
}

int print_Menu()
{
    int menu;
    printf("\n*** 우리 게스트하우스 ***\n");
    printf("\n1. 조회   2. 추가  3. 삭제   4. 저장   5. 예약자검색  0. 종료 >> ");
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
            Score_list_add(s);
            count++;
        }
        else if (menu == 3) // 삭제
        {
            int yes_or_no;
            printf("\n");
            listScore(s);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);
            if (index != 0)
            {
                printf("정말로 삭제?(삭제:1) ");
                scanf("%d", &yes_or_no);
                if (yes_or_no == 1)
                    deleteScore(s, index);
                printf("=> 삭제됨!\n");
            }
        }
            else if (menu == 4)
            {
                file_save_data(s);

                printf("파일에 저장되었습니다 :D\n");
            }
            else if (menu == 5)
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
// void file_lode_data(Score_list *l) // 나중에 헤더파일에도 추가
// {
//     FILE *fp;
//     fp = fopen("datalist.txt", "rt");
//     char c;
//     if (fp == 0x0)
//         printf("파일 내용이 없습니다. :<\n");
//     else
//     {
//         while ((fputs(&c, fp)) != EOF)
//         {
//             if (l->num_entries == l->max_entries)
//             {
//                 if (l->max_entries)
//                     l->max_entries += 1;
//                 else
//                     l->max_entries = 20;
//                 Score_entry *new_entries = (Score_entry *)calloc(sizeof(Score_entry), l->max_entries);
//                 memcpy(new_entries, l->entries, sizeof(Score_entry) * l->num_entries);
//                 if (l->entries)
//                     free(l->entries);
//                 l->entries = new_entries;
//             }

//             Score_entry e;
//             e.index = l->num_entries;

//             char *name = malloc(sizeof(char) * 20);
//             int kor = 0x0, eng = 0x0, math = 0x0, sum = 0x0;
//             double avg = 0x0;

//             fscanf(fp, "%s", name);           
//             fscanf(fp, "%d", &kor);
//             fscanf(fp, "%d", &eng);
//             fscanf(fp, "%d", &math);

//             if(fgetc(fp) == EOF)
//                 break;
//             e.name = name;
//             e.kor = kor;
//             e.eng = eng;
//             e.math = math;
//             e.sum = kor + eng + math;
//             e.avg = sum / 3.0;

//             l->entries[l->num_entries] = e;
//             l->num_entries++;
//         }
//         printf("파일 내용을 가왔습니다 :D \n ");
//         fclose(fp);
//     }
// }


void file_save_data(Score_list * l)
{
    FILE * fp;
    fp = fopen("datalist.txt", "wt");

    for (int i = 0; i < l->max_entries; i++)
    {
        int count[3];
          count[0] = l->entries[i].count[0];
          count[1] = l->entries[i].count[1];
          count[2] = l->entries[i].count[2];
        char * name = l->entries[i].name;
        char * rating = l->entries[i].rating;
        char * requirements = l->entries[i].requirements;
        int reservation_amount = l->entries[i].reservation_amount;
        char * Y_N = l->entries[i].Y_N;

        fprintf(fp,"%d %d-%d-%d     %s %s %d %s\n", l->entries[i].index + 1,
               l->entries[i].count[0], l->entries[i].count[1], l->entries[i].count[2],
               l->entries[i].name,
               l->entries[i].rating,
               l->entries[i].reservation_amount,
               l->entries[i].requirements);
    }

    fclose(fp);
}
