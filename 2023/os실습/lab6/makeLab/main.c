#include <stdio.h>
#include "menu.h"
#include "guest.h"

int main()
{
    int menu;

    displayMenu();
    menu = addGuest();
    displayGuest(menu);
    return 0;
}