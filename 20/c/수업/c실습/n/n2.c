#include <stdio.h>

int main()
{
    int *p;
    int num[10];
    for(int i=0;i<10;i++)
    {
        printf("%d번 수를 입력하시오. ",i+1);
        scanf("%d",&num[i]);
    }
    p = &num[0];
    for(int i=1;i<10;i++)
    {
        if(*p<num[i]) p = &num[i];
    }
    int Max = *p;
    p = &num[0];
    for (int i=1;i<10;i++)
    {
        if(*p>num[i]) p = &num[i];
    }
    int Min = *p;

    printf("최댓값 : %d, 최솟값 : %d\n",Max,Min);

}