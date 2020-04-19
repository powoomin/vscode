#include <iostream>
using namespace std;
#ifdef DEBUG
#define DPRINT(func) func;
#else
#define DPRINT(func);
#endif
void print_list(int *list, int n);
int partition(int list[], int lo, int hi)
{
    int x = list[hi];
    int i = (lo - 1);
    for (int j = lo; j <= hi - 1; j++)
    {
        if (list[j] <= x)
        {
            i++;
            swap(list[i], list[j]);
        }
    }
    swap(list[i + 1], list[hi]);
    return (i + 1);
}
void _quickSort(int *list, int lo, int hi, int n)
{
    if (lo < hi)
    {
        int pi = partition(list, lo, hi);
        DPRINT(for (int x = 0; x < n; x++) cout << list[x] << " "; cout << endl);
        _quickSort(list, lo, pi -1 , n);
        _quickSort(list, pi + 1, hi , n);
    }
}
void quickSort(int *a, int n)
{
    DPRINT(cout << "QUICK SORTING...\n");
    _quickSort(a, 0, n-1, n);
}

#if 0
void print_list(int *list, int n)
{
    for(int i=0;i<n;i++)
    {
        cout << list[i]<<" ";
    }
    cout << endl;
}
#endif
#if 1
int main()
{
    int list[] = {3,4,1,7,0,9,6,5,2,8};
    int N =sizeof(list)/sizeof(list[0]);
    cout << "UNSORTED: " << endl;
    print_list(list, N);
    quickSort(list, N);
    cout << "QUICK SORTED: "<< endl;
    print_list(list, N);
    cout << "Happy Coding~~\n";
}

#endif
