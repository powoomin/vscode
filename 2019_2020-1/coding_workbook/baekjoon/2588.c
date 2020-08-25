/*
문제
(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 
(3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 
둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.

출력
첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.

예제 입력 1 
472
385
예제 출력 1 
2360
3776
1416
181720
*/
#include <stdio.h>
int main()
{
    int Input_1, Input_2[3], result_3, result_4, result_5, result_6;
    scanf("%d", &Input_1);
    for (int i = 2; i >= 0; i--)
    {
        scanf("%1d", &Input_2[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", Input_1 * Input_2[i]);
    }
    printf("%d\n", Input_1 * Input_2[0] + Input_1 * Input_2[1] * 10 + Input_1 * Input_2[2] * 100);

    return 0;
}