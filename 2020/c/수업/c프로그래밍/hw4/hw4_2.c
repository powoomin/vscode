#include <stdio.h>
#include <string.h>
/*
 Write a program which prompt user to enter integer and checks whether any of the digits in a number appear more than once. The program display ‘more than once’ if there is a repeated digit and returns ‘just once’ otherwise. If user enters non-numeric value display ‘Error, wrong input’.
ex) If user input is 28213, then program displays ‘more than once.
If user input is 93672, then program displays ‘just
<mind>
1. fgetsf로 입력받아 배열에 저장
2. i를 계속 비교하면서 만약 같은것이라면 print 'more than once' 아니면 'just one' 출력
*/
int main()
{
    char nums[100];
    int i, j, size;
    int Bool = 0;
    printf("input nums : ");
    scanf("%s", nums);
    size = strlen(nums);
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (nums[i] == nums[j])
                Bool = 1;
        }
        if (Bool == 1)
            break;
    }
    if (Bool == 1)
        printf("more than once\n");
    else if (Bool == 0)
        printf("just once\n");
}