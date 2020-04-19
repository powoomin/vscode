//On my honor, I pledge that I have neither received nor provided improper assistance in the completion of this programming assignment. Signed: minwooLee
#include <iostream>
using namespace std;
struct number
{
    int N;
};

void sum(int d[], int const n, int &p)
{
    for (int i = 0; i < n; i++)
    {
        p = p + d[i];
    }
}

int main()
{
    number k;
    k.N = 40;
    int total = 0;
    int data[k.N];
    for (int i = 0; i < k.N; i++)
    {
        data[i] = i;
    }
    sum(data, k.N, total);
    cout << "total is " << total << "\n";
    return 0;
}