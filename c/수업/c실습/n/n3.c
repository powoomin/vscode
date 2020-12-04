#include <stdio.h>
/*
1. 문자열을 입력받은 후에, (main)
2. 포인터를 이용하여 이 문자열의 문자 개수가 몇 개인지 알아내는 함수를 만들고 (함수)
    2.1 입력받을 때 마다 count+1 해서 저장 
    2.2 배열로 해서 저장 -> 저장될때마다 count+1
        2.2-1 배열에 저장 할 때 c로 해서 저장 %[^/n]c
3. 이 를 이용하여 문자열의 개수를 출력하라. (count 출력)
단, 문자열의 길이를 알아내는 strlen()함수를 사용하지 말 것. 
*/
int string_length(char *str)
{
    int i;
    while(1)
    {
        if(str[i]=='\n') break;
        i++;
    }
    return i;
}
int main()
{
    int l = 0;
    int count = 0;
    char str[100];
    printf("문자열 입력 ");
    fgets(str,100,stdin);
    printf("문자열 길이는 %d\n",string_length(str));
    return 0;
}