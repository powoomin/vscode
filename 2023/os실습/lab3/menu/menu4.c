#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

Menu_list *Menu_list_alloc(int n)
{
    if (n < 0)
        return 0x0;

    Menu_list *l;

    l = (Menu_list *)malloc(sizeof(Menu_list));

    l->max_entries = n;
    l->num_entries = 0;
    l->entries = (Menu_entry *)calloc(sizeof(Menu_entry), n);

    return l;
}

Menu_entry addMenu(int i)
{
    Menu_entry e;
    e.index = i;

    char *name = malloc(sizeof(char) * 20);
    char *typs = malloc(sizeof(char));
    printf("메뉴명은? ");
    scanf("%s", name);
    e.menu_name = name;
    printf("메뉴종류(P/S/R)? ");
    scanf("%s", typs);
    e.menu_typs = typs;

    printf("가격은? ");
    scanf("%d", &e.menu_price);

    return e;
}

void Menu_list_free(Menu_list *l)
{
    if (l->entries)
        free(l->entries);
    free(l);
}

int Menu_list_add(Menu_list *l)
{
    if (l->num_entries == l->max_entries)
    {
        if (l->max_entries)
            l->max_entries += 1;
        else
            l->max_entries = 20;
        Menu_entry *new_entries = (Menu_entry *)calloc(sizeof(Menu_entry), l->max_entries);
        memcpy(new_entries, l->entries, sizeof(Menu_entry) * l->num_entries);
        if (l->entries)
            free(l->entries);
        l->entries = new_entries;
    }
    l->entries[l->num_entries] = addMenu(l->num_entries + 1);
    l->num_entries++;
    return 1;
}

void Menu_print(Menu_list *s)
{
    for (int i = 0; i < s->num_entries; i++)
    {
        printf("%d.     %d      %s    %s\n", s->entries[i].index+1, s->entries[i].menu_price, s->entries[i].menu_typs, s->entries[i].menu_name);
    }
}

void MenuScore(Menu_list *s)
{
    printf("NO.     Mrice   Typs    Menu  \n");
    printf("******************************\n");
    Menu_print(s);
}

int updateMenu(Menu_list *s, int i)
{
    s->entries[i - 1] = addMenu(i - 1);
    return 1;
}

int deleteMenu(Menu_list *s, int i)
{
    i--;
    if (i < 0 || i > s->num_entries - 1)
    {
        return 0;
    }
    for (int j = i; j < s->num_entries; j++)
    {
        s->entries[j] = s->entries[j + 1];
    }
    s->num_entries--;
    return 1;
}

int Menu_list_find(Menu_list * s, char * c)
{
    for(int i=0; i< s->num_entries ; i++)
    {
        if(strcmp(c, s->entries[i].menu_name) == 0)
        {
            printf("요리를 찾았습니다 :D\n");
            printf("%d.     %d      %s    %s\n", s->entries[i].index+1, s->entries[i].menu_price, s->entries[i].menu_typs, s->entries[i].menu_name);
            return 1;
        }
    }
    printf("요리를 찾지 못했습니다 :<\n");
    return 0;
}

int print_Menu()
{
    int menu;
    printf("\n*** PizzaYaho ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 저장\n");
    printf("6. 요리 찾기\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

int selectMenu(Menu_list *s)
{
    int count = 0, menu;
    int index = 0;
    while (1)
    {
        menu = print_Menu();
        if (menu == 0)
            break;
        if (menu == 1) // 리스트
        {
            Menu_print(s);
        }
        else if (menu == 2) // 추가
        {
            Menu_print(s);
            Menu_list_add(s);
            count++;
        }
        else if (menu == 3) // 수정
        {
            Menu_print(s);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);
            if (index != 0)
                updateMenu(s, index);
        }
        else if (menu == 4) // 삭제
        {
            Menu_print(s);

            printf("번호는? (취소 : 0) ");
            scanf("%d", &index);
            if (index != 0)
                deleteMenu(s, index);
            printf("=> 삭제됨!\n");
        }
        else if (menu == 5)
        {
            file_save_data(s);
            printf("파일에 저장되었습니다 :D\n");
        }
        else if (menu == 6)
        {
            char * c = malloc(sizeof(char) * 20);
            printf("요리를 입력해주세요 : ");
            scanf("%s", c);
            Menu_list_find(s, c);
        }
    }
    Menu_list_free(s);
    printf("종료됨!\n");
    return 0;
}

//-------------------------------------

void file_lode_data(Menu_list *l)
{
    FILE *fp;
    fp = fopen("menu.txt", "rt");
    char c;
    if (fp == 0x0)
        printf("파일 내용이 없습니다 :<\n");
    else
    {
        while ((fputs(&c, fp) != EOF))
        {
            if (l->num_entries == l->max_entries)
            {
                if (l->max_entries)
                    l->max_entries += 1;
                else
                    l->max_entries = 20;
                Menu_entry *new_entries = (Menu_entry *)calloc(sizeof(Menu_entry), l->max_entries);
                memcpy(new_entries, l->entries, sizeof(Menu_entry) * l->num_entries);
                if (l->entries)
                    free(l->entries);
                l->entries = new_entries;
            }

            Menu_entry e;
            e.index = l->num_entries;

            char * menu_name = malloc(sizeof(char) * 20);
            char * menu_typs = malloc(sizeof(char));
            int menu_price = 0x0;

            fscanf(fp, "%s", menu_name);
            fscanf(fp, "%s", menu_typs);
            fscanf(fp, "%d", &menu_price);

            if (fgetc(fp) == EOF)
                break;

            e.menu_name = menu_name;
            e.menu_typs = menu_typs;
            e.menu_price = menu_price;

            l->entries[l->num_entries] = e;
            l->num_entries++;

            
        }

        printf("파일 내용을 가져왔습니다 :D \n");
        fclose(fp);
    }
}

void file_save_data(Menu_list *l)
{
    FILE * fp;
    fp = fopen("menu.txt","wt");

    for(int i = 0; i < l->num_entries ; i++)
    {
        fprintf(fp, "%s %s %d \n",l->entries[i].menu_name,l->entries[i].menu_typs,l->entries[i].menu_price);
    }
}