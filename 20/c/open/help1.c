#include <stdio.h>
#include <string.h>
#define MAX_NUM 100
//사용자의 정보를 저장하는 구조체
typedef struct
{
    char name[30];
    char number[30];
} User;

void insert(User *ptr, int *num);
int deleted(User *ptr, int *num);
int search(User *ptr, int *num);
void printAll(User *ptr, int *num);

int main(void)
{
    int input;
    User user[MAX_NUM]; //사용자 정보를 저장할 구조체 배열
    int person = 0;     //저장된 user수

    //메뉴 선택
    while (1)
    {
        printf("***** Menu ***** \n");
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Search \n");
        printf("4. Print All \n");
        printf("5. Exit \n");

        printf("Choose the item: ");
        scanf("%d", &input);

        if (input == 1)
        {
            printf("\n[INSERT] \n");
            insert(user, &person);
        }
        else if (input == 2)
        {
            printf("\n[Delete] \n");
            deleted(user, &person);
        }
        else if (input == 3)
        {
            printf("\n[Search] \n");
            search(user, &person);
        }
        else if (input == 4)
        {
            printf("\n[Print All] \n");
            printAll(user, &person);
        }
        else if (input == 5)
        {
            printf("\n[Exit] \n");
            return 0;
        }
        else
            printf("\nerror! ReTry! \n\n");
    }

    return 0;
}

//사용자의 정보를 삽입하는 함수
void insert(User *ptr, int *num)
{

    //유저정보가 꽉 차지 않으면
    if (*num < MAX_NUM)
    {
        printf("Input Name: ");
        scanf("%s", ptr[*num].name);
        printf("Input Tel Number: ");
        scanf("%s", ptr[*num].number);

        (*num)++;
        printf("  Data Inserted \n\n");
    }
    //유저 정보가 꽉 차면
    else
        printf("  Data Full \n\n");
}

//사용자의 정보를 삭제하는 함수
int deleted(User *ptr, int *num)
{
    char name[30];
    int i, j;
    //유저 정보가 한개라도 남아있으면
    if (*num > 0)
    {
        printf("Input Name: ");
        scanf("%s", name);
        for (i = 0; i < MAX_NUM; i++)
        {
            //문자열이므로 비교하기위해 strcmp사용
            if (strcmp(name, ptr[i].name) == 0)
            {
                (*num)--;
                printf("  Data Deleted \n\n");
                //데이터가 가득 차지 않았다면
                if (i != MAX_NUM - 1)
                {
                    for (j = i; j < MAX_NUM; j++)
                    {
                        //문자열이므로 strcpy를 사용하여 데이터 복사
                        strcpy(ptr[j].name, ptr[j + 1].name);
                        strcpy(ptr[j].number, ptr[j + 1].number);
                    }
                    //구조체 배열의 마지막을 NULL로 바꿈
                    *ptr[MAX_NUM - 1].name = NULL;
                    *ptr[MAX_NUM - 1].number = NULL;
                }
                //데이터가 가득 찼다면
                else
                {
                    //구조체 배열의 마지막을 NULL로 바꿈
                    *ptr[MAX_NUM - 1].name = NULL;
                    *ptr[MAX_NUM - 1].number = NULL;
                }
                return 0;
            }
        }
        printf("Not Found \n\n");
        return 0;
    }
    //저장된 유저 정보가 없다면
    else
    {
        printf("  No Data \n\n");
        return 0;
    }
}
//사용자의 정보를 검색하는 함수
int search(User *ptr, int *num)
{
    char name[30];
    int i;

    //저장된 데이터가 있다면
    if (*num > 0)
    {
        printf("Input Name: ");
        scanf("%s", name);

        for (i = 0; i < MAX_NUM; i++)
        {
            //strcmp는 문자열이 일치할때 0을 반환
            //0은 C언어에서 거짓을 의미
            //그러므로 ! 을 붙여 참으로 변경하여 실행
            if (!strcmp(name, ptr[i].name))
            {

                printf("Name : %s ", ptr[i].name);
                printf("Tel : %s \n", ptr[i].number);

                printf("  Data Found \n\n");
                return 0;
            }
        }
        printf("Not Found \n\n");
        return 0;
    }
    else
    {
        printf("  No Data \n\n");
        return 0;
    }
}

//저장된 모든 이름과 전화번호 정보를 출력하는 함수
void printAll(User *ptr, int *num)
{
    int i = 0;

    if (*num > 0)
    {
        for (i = 0; i < *num; i++)
        {
            printf("Name : %s ", ptr[i].name);
            printf("Tel : %s \n", ptr[i].number);
        }
        printf("  Data Print \n\n");
    }
    else
        printf("  No Data \n\n");
}