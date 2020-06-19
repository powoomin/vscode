#include <stdio.h>

int main(void)
{
    int a;
    printf("2진수로 바꿀 10진수를 입력하세요 > ");
    scanf("%d", &a);
    int b;
    printf("몇 bit로 2진수를 표시하겠습까 >");
    scanf("%d", &b);
    int d[b];
    for (int i = 0; i < b; i++)
    {
        int c = 1;
        for (int j = 0; j < b - i - 1; j++)
        {
            c *= 2;
        }
        if (a >= c)
        {
            a = a - c;
            d[i] = 1;
        }
        else
        {
            d[i] = 0;
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("%d", d[i]);
    }
}