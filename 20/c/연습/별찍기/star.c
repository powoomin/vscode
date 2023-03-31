#include <stdio.h>
int star1(int num);
int star2(int num);
int star3(int num);
int star4(int num);
int star5(int num);
int star6(int num);
int star7(int num);

int 
main()
{
    int num;
    printf("얼만큼 별을 찍겠습니까? : \n");
    scanf("%d", &num);
    star1(num);
    star2(num);
    star3(num);
    star4(num);
    star5(num);
    star6(num);
    star7(num);
    return 0;
}
int star1(int num)
{
    int i, j;
    printf("별찍기 1단계\n");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
int star2(int num)
{
    int i, j;
    printf("\n별찍기 2단계\n");
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
int star3(int num)
{
    printf("\n별찍기 3단계\n");
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
int star4(int num)
{
    printf("\n별찍기 4단계\n");
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = i; j < num; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
int star5(int num)
{
    printf("\n별찍기 5단계\n");
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("x");
        }
        for (j = 1; j <= i; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
int star6(int num)
{
    printf("\n별찍기 6단계\n");
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = i; j < num; j++)
        {
            printf("x");
        }
        for (j = i + 1; j < num; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
int star7(int num)
{
    printf("\n별찍기 7단계\n");
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("x");
        }
        for (j = 1; j <= i; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    for (i = 1; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = i; j < num; j++)
        {
            printf("x");
        }
        for (j = i + 1; j < num; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}