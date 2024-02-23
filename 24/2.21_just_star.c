#include <stdio.h>
// 2/21 
// 그냥 3개월만에 다시 코딩하고 싶어서 코딩한 별 찍기
void print_star() 
{
    printf("Hellow World :D\n");

    printf("\nprint : star\n");
    for(int i=0; i<5; i++) //단순 별
    {
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\ntree star\n");
    for(int i=0; i<10; i++) //별나무
    {
        for(int j=10; j>i+1; j--)
        {
            printf(" ");
        }
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nempty_tree star\n"); //무늬 별나무
    for(int i=0; i<10; i++)
    {
        for(int j=10; j>i+1; j--)
        {
            printf(" ");
        }
        printf("*");
        for(int j=0; j<i; j++)
        {
            if(i%2==0) printf(" ");
            else printf("*");
        }
        for(int j=0; j<i-1; j++)
        {
            if(i%2==1) printf(" ");
            else printf("*");
        }
        if(i==0) printf("\n");
        else printf("*\n");


    }
}

int main(void)
{
    print_star();
    return 0;
}

