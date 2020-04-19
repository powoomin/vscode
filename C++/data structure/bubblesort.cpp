////On my honor, I pledge that I have neither received nor provided improper assistance in the completion of this programming assignment. 
//Signed: minwooLee Student Number : 21900505
#include <iostream>
using namespace std;

int bubblesort(int *list, int n);
void print_list(int *list, int N);
int ascend(int *list, int b);
int descned(int *list, int b);

int main(void)
{

    int (*compare[])(int *list, int) = {bubblesort,ascend,descned};
    int list[] = {2, 8, 1, 9, 5};
    int N = sizeof(list) / sizeof(list[0]);
    cout << "UNSORTED : " << endl;
    print_list(list, N);

    compare[0](list, N);
    cout << "SORTED Up: " << endl;
    print_list(list, N);

    compare[2](list, N);
    cout << "SORTED Dn : " << endl;
    print_list(list, N);
}
int bubblesort(int *list, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(list[j]>list[j+1])
            {
                int save = list[j];
                list[j] = list[j+1];
                list[j+1] = save;
            }
        }
    }
    return 0;
}

void print_list(int *list, int N)
{
    for(int i=0;i<N;i++)
    {
        cout <<list[i]<<" ";
    }
    cout <<"\n";
}

int ascend(int *list, int b)
{
    for(int i=0;i<b-1;i++)
    {
        for(int j=0;j<b-i-1;j++)
        {
            if(list[j]>list[j+1])
            {
                int save = list[j];
                list[j] = list[j+1];
                list[j+1] = save;
            }
        }
    }
    return 0;
}

int descned(int *list, int b)
{
    for(int i=0;i<b-1;i++)
    {
        for(int j=0;j<b-i-1;j++)
        {
            if(list[j]<list[j+1])
            {
                int save = list[j];
                list[j] = list[j+1];
                list[j+1] = save;
            }
        }
    }
    return 0;
}