#include <iostream>
using namespace std;

long long factoral(int n)
{
    if (n > 0)
    {
        return factoral(n - 1) * n;
    }
    return 1;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long Fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    return Fibo(n - 1) + Fibo(n - 2);
}

int bunnyEars(int bunnies)
{
    if(bunnies == 0) return 0;
    return 2 + bunnyEars(bunnies-1);
}

int main(void)
{
    int n[] = {1, 2, 3, 8, 12, 20};
    for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
    {
        cout << "factorial(" << n[i] << ") -> " << factoral(n[i]) << endl;
    }

    cout << "gcd(111, 259) = " << gcd(111, 259) << endl;

    int n1[] = {0, 1, 2, 3, 4, 5, 11,33,44};
    for (int i = 0; i < sizeof(n1) / sizeof(n1[0]); i++)
    {
        cout << "Fibo(" << n1[i] << ") -> " << Fibo(n1[i]) << endl;
    }

    int n2[] = {0,1,2,3,234};
    for(int i=0;i<sizeof(n2)/sizeof(n2[0]);i++)
    {
        cout << "bunnyEars("<<n2[i]<<") -> "<<bunnyEars(n2[i])<<endl;
    }
}