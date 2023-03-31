/*
간단한 회원관리 프로그램
Data 설계 - 구조체로 정의
    이름 : char(20)
    전화번호 : char(20)
    태어난 년도 : int
    거주지 : char(20)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct st_member
{
    char name[20];
    char phone[20];
    int birthyear;
    char city[20];
} T_record;

T_record *members[10]; // 회원정보데이터(전역 포인터)

void create_record(int index);
void read_record(int index);
void update_record(int index);
void delete_record(int index);
void list_record();

int main(void)
{
    while (1)
    {
        int i, j;
        printf("1.create\n2.read\n3.update\n4.delete\n5.list\n6.stop\n");
        scanf("%d", &i);
        if (i == 1)
        {
            printf("record number : ");
            scanf("%d", &j);
            create_record(j); //회원1명을 추가함
        }
        else if (i == 2)
        {
            printf("record number : ");
            scanf("%d", &j);
            read_record(j);
        }
        else if (i == 3)
        {
            printf("record number : ");
            scanf("%d", &j);
            update_record(j);
        }
        else if (i == 4)
        {
            printf("record number : ");
            scanf("%d", &j);
            delete_record(j);
        }
        else if (i == 5)
        {
            list_record();
        }
        else if (i == 6)
            break;
    }
}

void create_record(int index)
{
    //index 위치에 해당하는 포인터에 메모리를 할당한 후, 내용을 채움
    members[index] = (T_record *)malloc(sizeof(T_record));
    T_record *p = members[index];
    char str[20];
    int year;
    printf("name : ");
    scanf("%s", str);
    strcpy(p->name, str);

    printf("Phone : ");
    scanf("%s", str);
    strcpy(p->phone, str);

    printf("Birth year : ");
    scanf("%d", &year);
    p->birthyear = year;

    printf("City : ");
    scanf("%s", str);
    strcpy(p->city, str);

    printf("\n%d# record created!\n\n", index);
}

void read_record(int index)
{
    //index에 해당하는 구조체포인어를 찾아서 이를 통해 내용을 접근하여 불러온다.
    T_record *p = members[index];
    if (p != NULL)
    {
        printf("Ther record %d# reding!\n", index);
        printf("name : %s\n", p->name);
        printf("Phone : %s\n", p->phone);
        printf("Birth year : %d\n", p->birthyear);
        printf("City : %s\n\n", p->city);
    }
    else
        printf("no data\n\n");
}

void update_record(int index)
{
    T_record *p = members[index];
    if (p != NULL)
    {
        char str[20];
        int year;
        printf("Enter the new %s's info.\n", p->name);
        printf("Phone : ");
        scanf("%s", str);
        strcpy(p->phone, str);
        printf("Birth year : ");
        scanf("%d", &year);
        p->birthyear = year;
        printf("City : ");
        scanf("%s", str);
        strcpy(p->city, str);
        printf("\n%d# record is updated!\n\n", index);
    }
    else
        printf("no record\n\n");
}

void delete_record(int index)
{
    members[index] = (T_record *)malloc(sizeof(T_record));
    members[index] = NULL;
    printf("Deleting #%d\n\n", index);
}

void list_record()
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        T_record *p = members[i];
        if (p != NULL)
        {
            printf("#%d ",i);
            printf("(%d) ", p->birthyear);
            printf("%s ", p->name);
            printf("/ %s ", p->phone);
            printf("/ %s\n\n", p->city);
        }
    }
}