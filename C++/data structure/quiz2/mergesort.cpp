#include <stdio.h>
char sorted[16]; // 정렬된 배열
void merge_sort(char *data, int start, int end);


void merge(char *data, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    while (i <= mid && j <= end)
    {
        if (data[i] <= data[j])
        {
            sorted[k] = data[i];
            i++;
        }
        else
        {
            //data[i] > data[j];
            sorted[k] = data[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        for (int t = j; t <= end; t++)
        {
            sorted[k] = data[t];
            k++;
        }
    }
    else
    {
        for (int t = i; t <= mid; t++)
        {
            sorted[k] = data[t];
            k++;
        }
    }
    // 정렬된 배열을 삽입
    for (int t = start; t <= end; t++)
    {
        data[t] = sorted[t];
    }
}
void merge_sort(char *data, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(data, start, mid);// 좌측 정렬
        merge_sort(data, mid + 1, end);// 우측 정렬
        merge(data, start, mid, end);
    }
}
int main(void)
{
    char data[16] = {'M','E','R','G','E','S','O','R','T','E','X','A','M','P','L','E'};
    merge_sort(data, 0, sizeof(data)/sizeof(data[0]));// 결과 확인
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}
