
#include <stdio.h>
int main(void)
{
    char str[1000];
    char B[5] = "asdas";
    scanf("%s",str);
    int count = sizeof(str)/sizeof(char);
    for(int i=0;i <count;i++)
    {
        int Bool = 0;
        for(int j=i;j<i+5;j++)
        {
            if(str[j]==B[j]) Bool ;
        }
    }
}