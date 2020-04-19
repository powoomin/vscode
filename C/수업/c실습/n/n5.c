#include <stdio.h>
/*
[N05] 문자열 역순으로 만들기 
  
1. 하나의 문자열을 입력받은 후에, 
2. 포인터를 이용하여 이 문자열을 역순으로 한 문자열을 리턴하는 함수를 만 들고 테스트하라. 
*/
char *reverse_string(char *str);

int main()
{
    char str[100];
    printf("문자열 입력");
    fgets(str, 100, stdin);
    reverse_string(str);
}

char *reverse_string(char *str)
{
    int i = 0 , j = 0;
    char c_str[100];
    int size;
    while (1)
    {
        if (str[i] == '\n')
        {
            size = i;
            break;
        }
        i++;
    }
    for (i = size - 1; i >=0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}
