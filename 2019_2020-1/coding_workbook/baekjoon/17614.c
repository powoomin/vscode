/*
<mind>
N을 입력받으면 n만큼 반복돌리기

*/
#include <stdio.h>
int main(void)
{
    int N, cnt = 0;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        int w[3] = {3, 6, 9};
        int e = 10;
        if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
            cnt++;
        if ((i % 100 >= 30 && i % 100 <= 39) || (i % 100 >= 60 && i % 100 <= 69) || (i % 100 >= 90 && i % 100 <= 99))
            cnt++;
        if ((i % 100 >= 30 && i % 100 <= 39) || (i % 100 >= 60 && i % 100 <= 69) || (i % 100 >= 90 && i % 100 <= 99))
            cnt++;
        for (int j=0;j<6;j++)
        {
            if (i % e == w[0] || i % e == w[1] || i % e == w[2]) cnt++;
            if(i<e) break;
            e *= 10;
            
        }
    }
    printf("%d", cnt);
}