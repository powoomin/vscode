#include <stdio.h>
struct menu
{
    char name[20];
    char wansanji[20];
    int price;
};
int main()
{
    int i, count = 0;
    struct menu my[100];
    FILE *fp;
    fp = fopen("menu.txt", "r");
    while (1)
    {
        fscanf(fp, "%s %s %d", my[count].name, my[count].wansanji, &my[count].price);
        if (feof(fp))
        {
            break;
        }
        else
        {
            count++;
        }
    }
    fclose(fp);
    printf("menu.txt에서 메뉴정보를 읽어들였습니다.\n");
    printf("메뉴번호 메뉴이름 원산지 1인분가격\n");
    for (i = 0; i < count; i++)
    {
        printf("%d %s %s %d\n", i + 1, my[i].name, my[i].wansanji, my[i].price);
    }
}