#include <stdio.h>

/*
문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

예제 입력 1  복사
Mississipi
예제 출력 1  복사
?

예제 입력 2  복사
zZa
예제 출력 2  복사
Z

예제 입력 3  복사
z
예제 출력 3  복사
Z

예제 입력 4  복사
baaa
예제 출력 4  복사
A
출처

*/

int main(void)
{
    char Word[1000001];

    // 1. 입력 받기
    scanf("%s", Word);

    // 2. 순위 매기기
    //  아스키코드를 써서 그 단어에 해당되는 배열번째에 +1 하여 나중에 A~Z까지 에서 젤 많은 점수를 얻는 알파벳 출력하기
    //  26개의 알파벳
    int alphabet[26];
    int count = sizeof(Word);

    for (int i = 0; i < count; i++)
    {
        // 단어가 아스키코드 기준으로 90이하는 대문자(65~90), 이상은 소문자(97~122)로 판단
        if (Word[i] > 90) // 소문자인 경우
        {
            alphabet[Word[i] - 97]++;
        }
        else // 대문자인 경우
        {
            alphabet[Word[i] - 65]++;
        }
    }

    int P = 0;           // 순위 비교용
    int win_alpha_place; // alphabet[] 1등 위치 주소 저장용

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > P)
        {
            P = alphabet[i];
            win_alpha_place = i;
        }
    }

    // 3. 출력하기
    printf("%c",&alphabet[win_alpha_place+65]);
}