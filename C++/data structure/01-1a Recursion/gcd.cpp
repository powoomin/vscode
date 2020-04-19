#include <iostream>
using namespace std;

/*
최대공약수 찾기 - gcd

방법 
- for문 
- 재귀함수

*/

int gcd1(int a, int b)
{ //최대공약수_ for문
    while (b != 0)
    {
        int n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int gcd2(int a, int b) //최대공약수_재귀함수
{
    if (b == 0)
        return a;
    return gcd2(b, a % b);
}

int main(void)
{
    int i;
    int a, b; // 무조건 a>b 
    cout << "input two numbers = ";
    cin >> a >> b;

    if (a < b)
    {
        int save = a;
        a = b;
        b = save;
    }
    cout << "1. (for)gcd -> " << gcd1(a, b) << endl;
    cout << "2. (recursion)gcd -> " << gcd2(a, b) << endl;
}
