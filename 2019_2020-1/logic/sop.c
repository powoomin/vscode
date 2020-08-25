#include <stdio.h>
/*
1)	Number of variable
2)	Number of mintems for f = 1
3)	Number of minterms for don’t care condition
4)	Minterm list by number for f = 1
5)	Minterm list by number for don’t care condition
*/
/*
1. 입력받은 리스트들을 2진법으로 변환해서 새로운 리스트에 저장 ok
2. 0의 갯수에 따라 나누기
    1) minterms 갯수-1 만큼 같다고 나오면 그 두개를 합치고 다른 부분을 x(don't care)로 표시
        (1) 
    2) 그 다음꺼도 1)번처럼 되는 계속 확인
3. 
*/
void sop(int vb, int mt, int mt_list[]);
void sort(int arr[][], int count);    // 매개변수로 정렬할 배열과 요소의 개수를 받음

int main(void)
{
    int variable, mintems, dont_care;
    printf("Number of variable > ");
    scanf("%d", &variable);
    printf("Number of mintems > ");
    scanf("%d", &mintems);
    int mintems_list[mintems];

    printf("Numver of minterms for don't care > ");
    scanf("%d", &dont_care);
    int dont_care_list[dont_care];

    printf("Minterm list by number\n >> ");
    for (int i = 0; i < mintems; i++)
    {
        scanf("%d", &mintems_list[i]);
    }
    if (dont_care != 0)
    {
        printf("Minterm list by number for don't care\n >> ");
        for (int i = 0; i < dont_care; i++)
        {
            scanf("%d", &dont_care_list[i]);
        }
    }
    sop(variable, mintems, mintems_list);
}
void sop(int vb, int mt, int mt_list[]) //입력받은 수를 2진법으로 새로운 list에 저장
{
    int mt_list_binary[mt][vb];
    for (int i = 0; i < mt; i++)
    {
        int a = mt_list[i], b = vb;
        int d[b];
        for (int p = 0; p < b; p++)
        {
            int c = 1;
            for (int j = 0; j < b - p - 1; j++)
            {
                c *= 2;
            }
            if (a >= c)
            {
                a = a - c;
                mt_list_binary[i][p] = 1;
            }
            else
            {
                mt_list_binary[i][p] = 0;
            }
        }
    }

    for (int i = 0; i < mt; i++)
    {
        for (int j = 0; j < vb; j++)
        {
            printf("%d ", mt_list_binary[i][j]);
        }
        printf("\n");
    }

    sort(mt_list_binary,mt);
}

void sort(int arr[][], int count)    // 매개변수로 정렬할 배열과 요소의 개수를 받음
{
    int temp;

    for (int i = 0; i < count; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < count - 1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (arr[j][0] > arr[j + 1][0])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                for(int k=0;k<sizeof(arr[0])/sizeof(arr[0][0]);k++)
                {
                    
                }
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;            // 다음 요소로 보냄
            }
        }
    }
}
