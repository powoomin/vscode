#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
typedef struct Atmos
{
    at[31][2]; //최대 1달의 값을 기록할 수 있습니다.
} T_at;

int rd_num(int n);
int total_mask();