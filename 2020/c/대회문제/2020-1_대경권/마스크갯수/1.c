#include "1.h"

T_at *atmos;
int rd_num(int n)    //at 구조체에 값 저장하기

{
    atmos = (T_at *)malloc(sizeof(T_at));
    T_at *p = atmos;
}

int total_mask()    //구조체에서 가져와 atmos에 저장하기

{
    int answer = 0;
    int Bool = 0;
    int i;
    for (i = 0; i < atmos_len; i++)
    {
        Bool--;
        if (atmos[i][0] >= 151 && atmos[i][1] >= 76)
        {
            if (Bool <= 0)
            {
                answer++;
            }
            Bool = 0;
        }
        else if ((atmos[i][0] >= 81 || atmos[i][1] >= 36) && Bool <= 0)
        {
            Bool = 3;
            answer++;
        }
    }
    return answer;
}