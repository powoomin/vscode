#include <stdio.h>
#include <string.h>
/*
구조체에 각각 집어넣기
메뉴판 출력하기
*/
struct menu
{
    int no;          // 메뉴번호
    char name[20];   // 메뉴명
    char madein[20]; // 원산지
    int price;       // 가격
};
int main()
{
    int i;
    struct menu mymenu[6];
    char menu_name[6][20] = {"삼겹살", "갈비살", "꽃등심", "양념갈비", "차돌박이"};
    char wonsanji[6][20] = {"국내산", "미국산", "호주산", "호주산", "국내산"};
    int one_price[6] = {9000, 15000, 30000, 25000, 28000};
    for (i = 0; i < 5; i++)
    {
        mymenu[i].no = i + 1;
        strcpy(mymenu[i].name, menu_name[i]);
        strcpy(mymenu[i].madein, wonsanji[i]);
        mymenu[i].price = one_price[i];
    }

    // {1, "삼겹살", "국내산", 9000};
    // {2, "갈비살", "미국산", 15000};
    // {3, "꽃등심", "호주산", 30000};
    // {4, "양념갈비", "호주산" 25000};
    // {5, "차돌박이", "국내산", 28000};

    FILE *fp;
    fp = fopen("menu.txt", "wt");
    for (i = 0; i < 5; i++)
    {
        fprintf(fp, "%d %s %s %d\n", mymenu[i].no, mymenu[i].name, mymenu[i].madein, mymenu[i].price);
    }
    fclose(fp);
    printf("메뉴번호    메뉴이름    원산지  1인분가격\n");
    printf("================================\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d  %s  %s  %d\n", mymenu[i].no, mymenu[i].name, mymenu[i].madein, mymenu[i].price);
    }
    return 0;
}