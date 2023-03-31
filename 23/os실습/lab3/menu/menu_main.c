#include <stdio.h>
#include "menu.h"

int main(void)
{
    Menu_list * s = Menu_list_alloc(1);

    file_lode_data(s);

    selectMenu(s);

    
}