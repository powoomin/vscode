#include <iostream>
using namespace std;

/*
펙토리얼 설계
5! = 5*4*3*2*1

*/
void print(int n)
{
    for(int i=n;i>=2;i--)
    {
        cout<<i<<" * ";
    }
    cout<<"1 = ";

}

long long F(long long i)
{

    if (i > 0)
    {
        return F(i - 1) * i;
    }
    return 1;
}

int main(void)
{
    long long i;
    cout << "factorial number = ";
    cin >> i;
    print(i);
    cout << F(i) << endl;
}