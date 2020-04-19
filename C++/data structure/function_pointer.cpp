#include<iostream>
using namespace std;
int gcd(int x, int y);
int main(void)
{
    cout << gcd(259,111)<<endl;
    int (*fp)(int, int) = gcd;
    cout << fp(100,10)<<endl;
    cout << gcd(100,10)<<endl;
}
int gcd(int x, int y)
{
    if (y == 0) return x;
    return gcd(y, x%y);
}