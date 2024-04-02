#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        num = rand() % 100;
        printf("rand : %d\n", num);
    }
}