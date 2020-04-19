#include <stdio.h>
#include <string.h>

struct user
{
    char id[10][20];
    char pw[10][20];
};

int add_user(struct user *p, int count);
int all_user(struct user *q, int count);

int main(void)
{
    int count = 0;
    struct user p[1];

    int i;
    for (count = 0; count < 10; count++)
    {
        add_user(&p[0], count);
    }
    all_user(&p[0],count);


    return 0;
}

int add_user(struct user *p, int count)
{
    while (1)
    {
        int Bool = 0;
        printf("%d번째 사람 ID Password? \n", count + 1);
        scanf("%s %s", p->id[count], p->pw[count]);
        if (strlen(p->id[count]) < 4)
        {
            printf("ID는 4글자 이상으로 입력해주세요.\n");
            continue;
        }
        else if (strlen(p->pw[count]) < 4)
        {
            printf("Password는 4글자 이상으로 입력해주세요.\n");
            continue;
        }
        int i;
        for (i = 0; i < count; i++)
        {
            int Bool_p = strcmp(p->id[i], p->id[count]);
            if (Bool_p == 0)
            {
                printf("동일한 ID가 이미 등록되어 있습니다.\n");
                Bool = 1;
                break;
            }
        }
        if (Bool == 0)
            break;
    }
    return 0;
}

int all_user(struct user *q, int count)
{
    int i;
    printf("등록된 사용자 목록\nNo ID   Password\n");
    for(i=0;i<10;i++)
    {
        printf("%d %s\t%s\n",i+1,q->id[i],q->pw[i]);
    }
    return 0;
}