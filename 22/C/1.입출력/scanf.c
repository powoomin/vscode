#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
int main(void)
{
    char c1[50];
    scanf("%s",c1);
    printf("%s\?\?!",c1);
}