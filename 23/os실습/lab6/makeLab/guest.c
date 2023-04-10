#include <stdio.h>
#include "guest.h"

int addGuest()
{
    int menu;
    printf("원하는 메뉴는? : ");
    scanf("%d", &menu);
    return menu;
}

void displayGuest(int menu)
{
    if(menu == 1) printf("Pizza 선택\n");
    else printf("Spaghetti 선택\n");
}