////On my honor, I pledge that I have neither received nor provided improper assistance in the completion of this programming assignment. 
//Signed: minwooLee Student Number : 21900505
#include<iostream>
using namespace std;
int comp_int (const void *a, const void *b)
{
    return (*(char*)a - *(char*)b);
}
int main(void)
{
    char values[] = {'n','i','b','c'};
    int n = sizeof(values) / sizeof(values[0]);
    qsort (values, n, sizeof(values[0]), comp_int);

    for(int i = 0; i< n; i++)
    {
        cout << values[i] << " ";
    }
}