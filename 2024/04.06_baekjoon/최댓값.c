#include <stdio.h>
// 문제 출처 : https://www.acmicpc.net/problem/2562
int main(void)
{
    int num, count;
    int v = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num);
        if (num > v)
        {
            v = num;
            count = i + 1;
        }
    }
    printf("%d\n", v);
    printf("%d", count);
    return 0;
}