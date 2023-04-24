#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "manage_inventory.h"

e_list * e_list_alloc(int num)
{
    if (num<0)
        return 0x0;
    e_list * l;

    l = (e_list *)malloc(sizeof(e_list));

    l->max_entry = num;
    l->num_entry = 0;
    l->entries = (e_entry *)calloc(sizeof(e_entry), num);

    return l;
}

int e_list_add(e_list * l)
{

    l->entries[l->num_entry] = e_entry_add();
    l->num_entry++;
    return 1;
}

e_entry e_entry_add()
{
    e_entry e;
    char c[20];

    printf("기자재 물품 이름 : ");
    scanf("%s",c);
    memcpy(&e.name, c, sizeof(c));
    printf("기자재 물품 가격 : ");
    scanf("%d",&e.price);
    printf("기자재 물품 고장 유/무(1 or 0) : ");
    scanf("%hd",&e.broken);
    printf("기자재 물품 카테고리 : ");
    scanf("%s", c);
    e.categories = c;
    printf("A/S 기간(단위 : 1개월) : ");
    scanf("%d",&e.as);
    printf("제품 구매 날짜(ex 20230101) : ");
    scanf("%d",&e.payment_date);

    return e;
}

void e_list_print(e_list * l)
{
    printf("***************************\n");
    printf("이름/가격/고장유무/카테고리/as기간/구매날짜\n");
    for(int i=0 ; i<l->num_entry ; i++)
    {
        printf("%s / %d / %hd / %s / %d / %d\n", \
        l->entries[i].name, \
        l->entries[i].price, \
        l->entries[i].broken, \
        l->entries[i].categories, \
        l->entries[i].as, \
        l->entries[i].payment_date);
        
    }
    printf("***************************\n");
}

int e_list_update(e_list * l, int index)
{

    return 1;
}

int e_list_delete(e_list * l, int index)
{

    return 1;
}

char e_list_find(e_list * l, char * name)
{

    return 1;
}
