#include <stdio.h>
/*

문제
1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.

같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3×100으로 계산되어 1,300원을 받게 된다.
또 3개의 눈이 2, 2, 2로 주어지면 10,000+2×1,000 으로 계산되어 12,000원을 받게 된다.
3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.

3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.

    1. 입력 3개 받기
        1) int형 변수 a, b, c 만들기
        2) scnf로 입력 받기
        3) 결과값 변수 만들기 prize_money(상금)

    2. 3개의 조건으로 나누기
        1) if문 사용
            1-1) if a==b && a==c && b==c
            1-2) else if a==b || a==c || b==c
            1-3) else

    3. 조건에 따른 결과값으로 계산하여 출력
        1) 조건에 따라 계산기하기
            1-1) prize_money = a*1,000 + 10,000;

            1-2)
                if a==b || a==c
                    prize_money = a*100 + 1,000
                else
                    prize_money = b*100 + 1,000

            1-3)
                if a>b && a>c
                    prize_money = a*100
                else if b>c
                    prize_money = b*100
                else
                    prize_money = c*100
        2) prize_money 값 출력하기

*/

int a, b, c;     //주사위 3개의 값을 입력받을 변수
int prize_money; //상금 출력 결과값

int Input();
int If();
int Print();

int main(void)
{
    Input();

    If();

    Print();
}

int Input() // 값 입력 받기
{
    printf("주사위 3개의 결과값을 입력해 주세요 : ");
    scanf("%d %d %d", &a, &b, &c);
    return 0;
}

int If() //조건부 및 계산
{
    if (a == b && a == c && b == c)
    {
        prize_money = a*1000+10000;
    }
    else if (a == b || a == c || b == c)
    {
        if(a==b || a==c)
        {
            prize_money = a*100+1000;
        }
        else
        {
            prize_money = b*100+1000;
        }
    }
    else
    {
        if(a>b && a>c)
        {
            prize_money = a*100;
        }
        else if (b>c)
        {
            prize_money = b*100;
        }
        else
        {
            prize_money = c*100;
        }
    }
    return 0;
}

int Print() //출력
{
    printf("총 상금은 %d원 입니다. 축하합니다:D \n",prize_money);
    return 0;
}