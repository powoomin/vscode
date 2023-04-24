#include <stdio.h>
#include "manage_inventory.h"

void menu_print()
{
    printf("\n-----------------------\n");
    printf("1. 새로운 기자재 물품 추가 c \n");
    printf("2. 검색 r \n");
    printf("3. u \n");
    printf("4. d \n");
    printf("5. f.r \n");
    printf("6. f.s \n");
    printf("0. end \n");
    printf("-----------------------\n");
    printf("select menu => ");
}



int main(void)
{
    //crud+f.s+f.r
    //main menu print
    e_list * l = e_list_alloc(8);
    while(1)
    {
        int num = 0x0;

        menu_print();
        scanf("%d",&num);

        switch(num)
        {
            case 1 :
                e_list_add(l);
                break;
            case 2 :

                break;

            case 3 :
                e_list_print(l);
                break;
            case 4 :

                break;
            case 5 :
            
                break;
            case 6 :
            
                break;
            case 0 :
                break;
            default :
                printf("잘못 입력하였습니다 :<\n다시 입력해 주세요\n\n");
        }
        if(num == 0 ) break;
    }
}