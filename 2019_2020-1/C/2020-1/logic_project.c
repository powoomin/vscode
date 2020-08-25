#include <stdio.h>
int binary(int x);
int main(void)
{
    
}
int binary(int x)
{
    int input;
    int mask;
    while (1)
    {
        printf("Input Number(Decimal: if you input zero then exit): ");
        scanf_s("%d", &input);
        if (input == 0)
        {
            break;
        }
        for (int i = 31; i >= 0; i--)
        {
            mask = 1 << i;
            printf("%d", input & mask ? 1 : 0);
            if (i % 8 == 0)
                printf(" ");
        }
        printf("\n");
    }

    // 출처: https://gracefulprograming.tistory.com/112 [Peter의 우아한 프로그래밍]
}