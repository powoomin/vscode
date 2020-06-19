#include <stdio.h>
#include <string.h> 
/*
P12
학부 영문이름 중 가장 긴 이름 찾기

name.txt 파일에 우리대학의 학부이름이 영문으로 쓰여있다. 
이 파일을 읽어서 학부 전체 갯수와 가장 이름이 긴 학부가 무엇인지 출력하라.
단, name.txt 내용은 수정금지!

Count : 13
Longest name : Global Entrepreneurship and Information, 
Communication Technology

파일 안에 내용들 읽어와서 배열에 1줄씩 저장,더이상 없을때까지,그만큼 count세기
나머지는 알아서 프린트
*/
struct name
{
    char names[100];
};

int main()
{
    int i = 0;
    int count;
    int max = 0;
    struct name n[100];
    FILE *f;
    f = fopen("name.txt", "r");
    while (!feof(f))
    {
        fgets(n[i].names, sizeof(n[i].names), f);
        i++;
    }
    count = i - 1;
    fclose(f);
    for (i = 1; i < count; i++)
    {
        if (strlen(n[max].names) < strlen(n[i].names))
        {
            max = i;
        }
    }
    printf("Count : %d\n", count);
    printf("Longest name : %s", n[max].names);
}