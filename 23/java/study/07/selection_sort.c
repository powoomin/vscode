#include <stdio.h>
int main(void)
{
    int a[10] = {4, 8, 5, 7, 9, 3, 2, 1, 6};
    int count = 0;
    int first = 0, last;
    int check;

    printf("{");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("}");
    printf("\n");


    while (1)
    {
        check = 1;
        last = first;

        for (int i = first; i < 10; i++)
        {
            if (a[first] > a[i] && a[last] > a[i])
            {
                last = i;
                check = 0;
            }
        }

        if (check == 0)
        {
            printf("%d <-> %d\n",a[first], a[last]);
            int dummy = a[first];
            a[first] = a[last];
            a[last] = dummy;
            first++;
        }
        else 
            break;
        
        printf("a[] = ");
        for(int i=0 ; i<10 ; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n\n");

        count++;
    }
    
    printf("총 %d번만에 정렬되었습니다 :D \n",count);
}