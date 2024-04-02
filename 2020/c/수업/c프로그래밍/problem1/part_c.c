#include <stdio.h>
#include <string.h>
/*
modify program from part (b) so that it reads n integers from the file named
'pt_exer.txt'and svae them at memory allocated,
find the 2nd smallest integer among 10 integers saved, 
and write it at file 
name 'output.txt'
*/
struct such
{
    int num[100];
};
int main()
{
    int N, i;
    int save, Bool;
    printf("you want input num : ");
    scanf("%d", &N);
    struct such p;
    FILE *fp;
    fp = fopen("pt_exer.txt", "r");
    for (i = 0; i < N; i++)
    {
        fscanf(fp, "%d", &p.num[i]);
    }
    fclose(fp);

    while (1)
    {
        Bool = 0;
        for (i = 0; i < N - 1; i++)
        {
            if (p.num[i] > p.num[i + 1])
            {
                save = p.num[i + 1];
                p.num[i + 1] = p.num[i];
                p.num[i] = save;
                Bool = 1;
            }
        }
        if (Bool == 0)
        {
            break;
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d\n", p.num[i]);
    }
    fp = fopen("output.txt", "wt");
    fprintf(fp, "%d", p.num[1]);
}