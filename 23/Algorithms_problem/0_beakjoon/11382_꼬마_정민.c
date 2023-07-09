//https://www.acmicpc.net/problem/11382
#include <stdio.h>

//첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 10^12)이 공백을 사이에 두고 주어진다.

//A+B+C의 값을 출력한다.




long long Input_and_Sum()
{
    long long A, B, C;

    scanf("%lld %lld %lld", &A, &B, &C);

    return A+B+C;
}

void Print(long long sum)
{
    printf("%lld", sum);
}

int main(void)
{
    long long sum = Input_and_Sum();
    Print(sum);
}