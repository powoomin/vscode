#include <stdio.h>
/*
1. 2개의 문자열을 입력받은 후에, 
2. 포인터를 이용하여 이 문자열 중에서 영어사전 순서에 따를 때 먼저 나타날 문자열을 알아내는 함수를 만들고, 
    아스키코드 비교
    대문자같은 경우는 소문자랑 아스키코드 값의 32 차이남
    소문자 아스키코드로 92부터 시작
    92미만은 전부 +32 해서 전부 소문자로 인식하게 만듦
3. 이를 사용하여 결과를 출력하라. 
*/
int which_first(char *str1, char *str2); // 리턴 값 : 사전상 먼저 나타날 문자열의 순서, 1(첫 번째 문자열) 또는 2(두번째 문자열)
int main()
{
    char str1[100];
    char str2[100];
    char resurt[2][10] = {"첫","두"};
    printf("첫번째 문자열을 입력하시오. -->");
    fgets(str1, 100, stdin);
    printf("두번째 문자열을 입력하시오. -->");
    fgets(str2, 100, stdin);
    printf("%s번째 문자열이 사전에 먼저 나옵니다.", resurt[which_first(str1, str2)]);
    return 0;
}
int which_first(char *str1, char *str2)
{
    int i;
    int Bool=0;
    int count_str1;
    int count_str2;
    int count;
    int int_str1;
    int int_str2;
    while (1)
    {
        if (str1[i] == '\n')
        {
            count_str1 = i;
            Bool++;
        }
        if (str2[i] == '\n')
        {
            count_str2 = i;
            Bool++;
        }
        if (Bool == 2)
        {
            break;
        }
        i++;
    }

    if (count_str1>=count_str2)
    {
        count = count_str2;
    }
    else
    {
        count = count_str1;
    }
    
    for(i=0;i<count;i++)
    {
        int_str1 = str1[i];
        int_str2 = str2[i];
        if(int_str1<97) int_str1 = int_str1+32;
        if(int_str2<97) int_str2 = int_str2+32;
        if(int_str1<int_str2) return 0;
        else if(int_str1>int_str2) return 1;
    }
    return 0;
}