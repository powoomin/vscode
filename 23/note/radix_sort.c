#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void radix_sort(int *a, int n_a)
{
    int d[n_a];
    int n_d = n_a;
    int count = 0;
    int index = 0;

// 1round swap
    while (!(index == 10))
    {
        for (int i = 0; i < n_d; i++) 
        {
            if (a[i] % 10 == index)
            {
                d[count] = a[i];
                count++;
            }
        }
        index++;
    }

    for(int i=0 ; i<n_a ; i++)     //d[] -> a[] re-save
    {
        a[i] = d[i];
    }

    printf("1 round '001'\n");
    for(int i=0 ; i<n_d ; i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n\n");

// 2round swap
    count = 0;
    index = 0;
    while (!(index == 10))
    {
        for (int i = 0; i < n_d; i++) 
        {
            if ((a[i] % 100)/10 == index)
            {
                d[count] = a[i];
                count++;
            }
        }
        index++;
    }
    
    printf("2 round '010'\n");
    for(int i=0 ; i<n_d ; i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n\n");

    for(int i=0 ; i<n_a ; i++)     //d[] -> a[] re-save
    {
        a[i] = d[i];
    }

// 3round swap
    count = 0;
    index = 0;
    while (!(index == 10))
    {
        for (int i = 0; i < n_d; i++) 
        {
            if (a[i] / 100 == index)
            {
                d[count] = a[i];
                count++;
            }
        }
        index++;
    }
    
    printf("3 round '100'\n");
    for(int i=0 ; i<n_d ; i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n\n");

    for(int i=0 ; i<n_a ; i++)     //d[] -> a[] re-save
    {
        a[i] = d[i];
    }


}

int main(void)
{
    int a[8] = {651, 643, 98, 127, 8, 57, 12, 374};
    int n_a = 8;

    printf("0 round\n");
    for (int i = 0; i < n_a; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    radix_sort(a, n_a);

    printf("Radix Sort : ");
    for (int i = 0; i < n_a; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}