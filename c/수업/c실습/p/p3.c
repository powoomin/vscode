#include <stdio.h>
#include <string.h>

struct user
{
    char id[10][20];
    char pw[10][20];
};

int add_user(struct user *p, int count);
int user_cheak(struct user *q, int count);

int main(void)
{
    int count = 0;
    struct user p[1];

    int i;
    for (count = 0; count < 3; count++)
    {
        add_user(&p[0], count);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d번째 사람 ID(%s) Password(%s)\n", i + 1, p[0].id[i], p[0].pw[i]);
    }

    while (1)
    {
        int Bool = user_cheak(&p[0], count);
        if (Bool == 1)
        {
            printf("ID Password 둘다 맞음\n");
            break;
        }
        else if (Bool == 0)
            printf("ID는 맞는데 Password가 틀림\n");
        else if (Bool == -1)
            printf("맞는 ID 없음\n");
    }
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

int user_cheak(struct user *q, int count)
{
    char user_id[20];
    char user_pw[20];
    int Bool_id, Bool_pw, i, count_id, count_pw;
    
    printf("로그인할 ID? \n");
    scanf("%s", user_id);
    for (i = 0; i < 3; i++)
    {
        Bool_id = strcmp(q->id[i], user_id);
        if (Bool_id == 0)
        {
            count_id = i;
            break;
        }
    }
    printf("로그인할 Password? \n");
    scanf("%s", user_pw);
    Bool_pw = strcmp(q->pw[count_id], user_pw);
    if (Bool_id != 0)
    {
        return -1;
    }
    else if (Bool_pw != 0)
    {
        return 0;
    }

    return 1;
}
