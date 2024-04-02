#include <stdio.h>
#include <stdlib.h>
/*
5   ->  0005
50  ->  0050
500 ->  0500
5000->  5000

You would give it a number, a maximum length
and it will format the number adding zeroes to the left,
*/
char leftpad(char str, int len, char ch);

int main(void)
{
    char str[4];
    str[0] = {"5"};
    str = leftpad(str, 4, "0");

}

char leftpad(char str, int len, char ch)
{
    char s[len];
    int index = 0;
    while(++index<len)
    {
        s[index] = ch;
    }

    return s;
}