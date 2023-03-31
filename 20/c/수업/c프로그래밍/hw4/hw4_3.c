#include <stdio.h>
#include <string.h>
struct save
{
    int sum;
    char menu_num[5];
    int how_menu;
};
int print(struct save *p)
{
    fgets(p->menu_num, sizeof(p->menu_num), stdin);
    p->menu_num[strlen(p->menu_num) - 1] = '\0';
    if (p->menu_num[0] == 'Q')
        return 0;
    printf("How many orders of item number [%s] would you like? ", p->menu_num);
    scanf("%d", &p->how_menu);
    getchar();
    if (p->menu_num[0] == '1')
        p->sum = p->sum + 2500 * (p->how_menu);
    else if (p->menu_num[0] == '2')
        p->sum = p->sum + 2800 * (p->how_menu);
    else if (p->menu_num[0] == '3')
        p->sum = p->sum + 2700 * (p->how_menu);
    else if (p->menu_num[0] == '4')
        p->sum = p->sum + 3500 * (p->how_menu);
    else if (p->menu_num[0] == '5')
        p->sum = p->sum + 1100 * (p->how_menu);
    else if (p->menu_num[0] == '6')
        p->sum = p->sum + 1000 * (p->how_menu);
    printf("\n");
    return 0;
}
int main()
{
    struct save p1;
    p1.sum = 0;
    while (1)
    {
        for (int i = 0; i < 80; i++)
        {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < 26; i++)
        {
            printf(" ");
        }

        printf("Welcome to Burger Queen\n");
        for (int i = 0; i < 80; i++)
        {
            printf("*");
        }
        printf("\nMake your selection from the menu below : \n");
        printf("\t1.\tRegular hamburger\t\t2500\n");
        printf("\t2.\tBulgogi burger\t\t\t2800\n");
        printf("\t3.\tFish Sandwich\t\t\t2700\n");
        printf("\t4.\tHalf-pounder with cheese\t3500\n");
        printf("\t5.\tCurly fries\t\t\t1100\n");
        printf("\t6.\tLarge soft drink\t\t1000\n");
        for (int i = 0; i < 80; i++)
        {
            printf("*");
        }

        printf("\nSelect 1, 2, 3, 4, 5, or 6 ===> ");
        print(&p1);

        if (p1.menu_num[0] == 'Q')
        {
            printf("Please pay [%d].\n", p1.sum);
            printf("Thank you for eating at Burger Queen!\n");
            break;
        }
        else if (p1.menu_num[0] == '1' || p1.menu_num[0] == '2' || p1.menu_num[0] == '3' || p1.menu_num[0] == '4' || p1.menu_num[0] == '5' || p1.menu_num[0] == '6')
            continue;
        else
        {
            printf("wrong selection, try again\n");
        }
    }
}
 