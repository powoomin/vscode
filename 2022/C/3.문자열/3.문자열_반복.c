#include <stdio.h>
#include <string.h>
/*
문제
문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.
즉, 첫 번째 문자를 R번 반복하고,
두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다.
S에는 QR Code "alphanumeric" 문자만 들어있다.

QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.

입력
첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다.
각 테스트 케이스는 반복 횟수 R(1 ≤ R ≤ 8), 문자열 S가 공백으로 구분되어 주어진다.
S의 길이는 적어도 1이며, 20글자를 넘지 않는다.

출력
각 테스트 케이스에 대해 P를 출력한다.

예제 입력 1  복사
2
3 ABC
5 /HTP
예제 출력 1  복사
AAABBBCCC
/////HHHHHTTTTTPPPPP

<code>
1. 총 케이스 입력 받기
    1) 변수 : int T (1<= T <=1,000)     - 테스트 케이스, 총 반복 횟수 변수 입력 받음.

2. 반복 횟수 & 문자열 입력받기
    1) 변수 : int R (1<= R <=8)    - 한 문자 반복 횟수 입력 받음
    2) 문자열 : char S (1<= S <=20) - 입력받을 문자열

3. 출력 변수 만들기
    1) 문자열 : P     - 반복한 문자를 저장하는 문자열

*/

void make_me_case1();
void some_case2();

int main(void)
{
     make_me_case1();
    //some_case2();
}

void make_me_case1()
{
    int T;             // test_case
    int R[1001];       // return_count
    char S[1001][21];  // 입력받을 문자열
    char P[1001][168]; // 반복하여 출력할 문자열

    // 1. 총 케이스 입력 받기
    scanf("%d", &T); // test_case_input

    // 2. 반복횟수 & 문자열 입력 받기
    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &R[i], S[i]);
   
        // 바로 S[i]의 길이를 측정 후, 길이 * R[i]를 하여,
        // for문 P[i][]자리값들을 구할 수 있으며, R[i]만큼 반복하며 P[] 문자열을 완성
        int count = 0;
        count = sizeof(S[i]);

        for (int o = 0; o < count * R[i]; o = o)
        {
            for (int p = 0; p < count; p++)
            {
                for (int l = 0; l < R[i]; l++)
                {
                    P[i][o] = S[i][p];
                    o++;
                }
            }
        }
    }

    // 3. 출력하기
    for (int i = 0; i < T; i++)
    {
        printf("%s\n", P[i]);
    }
}

void some_case2()
{

    int T, R;
    char S[21];

    scanf("%d", &T);
    // T만큼의 테스트케이스
    while (T--)
    {
        scanf("%d %s", &R, S);

        //결과를 출력하기 위한 반복문
        for (int i = 0; i < strlen(S); i++)
        {
            for (int j = 0; j < R; j++)
                printf("%c", S[i]);
        }

        printf("\n");
    }
}
