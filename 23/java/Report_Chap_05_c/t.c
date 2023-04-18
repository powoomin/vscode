#include <stdio.h>
int main(void)
{
    int num[6];
    double sum;
    printf("input a,b,c,d,e,f : ");
    for(int i=0; i<6; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    double p = 100 / sum;

    double p_num[6];
    for(int i=0; i<6; i++)
    {
        p_num[i] = num[i] * p;
        printf("%f\n",p_num[i]);
    }

    for(int i=0; i<10; i++)
    {
        printf("w*****");
    }
    printf("\n");

    for(int i=0 ;i<6; i++)
    {
        printf("num[%d] = ",i);
        for(double j=0; j < p_num[i]/2; j++)
        {
            printf("*");
        }
        printf("\n");
    }



}