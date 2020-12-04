#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}