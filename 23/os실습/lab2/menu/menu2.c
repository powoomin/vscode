#include <stdio.h>
//걸린 시간 : 20분
typedef struct
{
    char menu_name[20];
    char menu_typs[1];
    int menu_price;
    int menu_num;
} Menu;

int addMenu(Menu s[])
{
    printf("메뉴명은? ");
    scanf("%s",s->menu_name);

    printf("메뉴종류(P/S/R)? ");
    scanf("%s",s->menu_typs);

    printf("가격은? ");
    scanf("%d",&s->menu_price);


    return 0;
}

void readMenu(Menu s)
{
    printf("%d.     %d      %s      %s\n",s.menu_num, s.menu_price, s.menu_typs, s.menu_name);
}

void listMenu(Menu s[], int count)
{
    printf("NO.     Mrice   Typs    Menu  \n");
    printf("******************************\n");
    for(int i=0; i<count; i++)
    {
        readMenu(s[i]);
    }
}

int updateMenu(Menu s[])
{
    printf("새 메뉴명은? ");
    scanf("%s",s->menu_name);
    printf("새 메뉴종류(P/S/R)? ");
    scanf("%s",s->menu_typs);
    printf("새 가격은? ");
    scanf("%d",&s->menu_price);


    printf("=>수정 성공!\n");
    return 0;
}

int deleteMenu(Menu s[])
{
    for(int i=0;i<sizeof(s->menu_name);i++)
    {
        s->menu_name[i] = 0x0;
    }

    s->menu_num = 0x0;
    s->menu_price = 0x0;
    s->menu_typs[0] = 0x0;

    printf("=> 삭제됨!\n");
    return 0;
}

int selectMenu()
{
    int menu;
    printf("\n*** PizzaYaho ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}
int main(void)
{
    Menu s[20];
    int count = 0, menu;
    int index = 0;
    while (1)
    {
        menu = selectMenu();
        if (menu == 0)
            break;
        if (menu == 1)
        {
            listMenu(s, count);
        }
        else if (menu == 2)
        {
            addMenu(&s[count]);
            count++;
        }
        else if (menu == 3)
        {
            listMenu(s, count);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);   
            if(index != 0)
                updateMenu(&s[index-1]);
        }
        else if (menu == 4)
        {
            listMenu(s, count);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);   
            if(index != 0)
                deleteMenu(&s[index-1]);

            count--;
        }
    }
    printf("종료됨!\n");
    return 0;
}