#include <stdio.h>
/*
 Write a program which reverse the order of the string.
ex) If user enters “abc def”, then program prints eversed string, which is “fed cba”.
<mind>
1. fgets로 입력받아 배열에 저장, 배열 size 값 구하기
2. for문으로 size-1 부터 0까지 출력
*/
int main()
{
    char str[100];
    int i = 0, size = 0;
    printf("input : ");
    fgets(str, 100, stdin);
    while (1)
    {
        if (str[i] == '\0')
            break;
        else
        {
            size++;
            i++;
        }
    }
    for (i = size - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}