/*
<mind>
몇개 입력받을지 n
n개 만큼 1차원 배열 만들기 N  -> 배열을 만들지 않고 풀 수 있음
최소, 최대수 구해서 저장 high,low
*/
#include <stdio.h>

void coding1() //내가 처음으로 코딩한 것
{
    int n, low = 1000001, high = 0;
    scanf("%d", &n);
    int N[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        N[i] = a;
        if (a > high)
        {
            high = a;
        }
        if (a < low)
        {
            low = a;
        }
    }
    printf("%d %d\n", high, low);
}
void coding2() //답지보고 내가 코딩한 것
{
    int n, h = -1000000, l = 1000000;
    int a;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > h)
            h = a;
        if (a < l)
            l = a;
    }
    printf("%d %d\n", l,h);
}
void coding3() //답
{
    int min = 1000000, max = -1000000;
    int count, temp, i;
    scanf("%d", &count);
    for (i = 0; i < count; ++i)
    {
        scanf("%d", &temp);
        if (temp > max)
        {
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
        }
    }
    printf("%d %d\n", min, max);
}

int main(void)
{
    coding2();
}
