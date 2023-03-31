#include <stdio.h>
struct menu
{
    int no;        // 메뉴번호
    char name[20]; // 메뉴명
    int price;     // 가격
};

int main()
{
    int i;
    char n[5][10] = {"첫", "두", "세", "네", "다섯"};
    struct menu mymenu[5];
    for (i = 0; i < 5; i++)
    {
        printf("%s번째 메뉴의 번호, 메뉴명, 가격을 입력.", n[i]);
        scanf("%d %s %d", &mymenu[i].no, mymenu[i].name, &mymenu[i].price);
    }
    printf("메뉴번호 메뉴이름 1인분가격\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d  %s  %d\n", mymenu[i].no, mymenu[i].name, mymenu[i].price);
    }
    FILE *fp;
    fp = fopen("menu.txt", "wt");
    for (i = 0; i < 5; i++)
    {
        fprintf(fp, "%d %s %d\n", mymenu[i].no, mymenu[i].name, mymenu[i].price);
    }
}