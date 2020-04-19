#include <iostream>
using namespace std;

//재귀 함수 기본

int bunnyears(int n)
{
    cout << n <<endl;
    if(n>0)
    {
        return bunnyears(n-1)+2;
    }
    return 0;
}

int main(void)
{
    int i;
    cout << "bunnyears = ";
    cin >> i;
    cout<<bunnyears(i)<<endl;
}