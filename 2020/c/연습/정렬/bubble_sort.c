#include <stdio.h>
void bubble_sort(int arr[], int count);   // 매개변수로 정렬할 배열과 요소의 개수를 받음
int main(void)
{
    int a;
    printf("input count : ");
    scanf("%d",&a);
    int b[a];
    printf("input nums\n>> ");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    bubble_sort(b,sizeof(b)/sizeof(b[0]));
    for(int i=0;i<sizeof(b)/sizeof(b[0]);i++)
    {
        printf("%d ",b[i]);
    }
}
void bubble_sort(int arr[], int count)    // 매개변수로 정렬할 배열과 요소의 개수를 받음
{
    int temp;

    for (int i = 0; i < count; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < count - 1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (arr[j] > arr[j + 1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;            // 다음 요소로 보냄
            }
        }
    }
}