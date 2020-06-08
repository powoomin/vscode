//quiz 계산 프로그램
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    while (1)
    {
        cout << "\ninput(a,b) >> ";
        double a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        double c = 1;
        a *= 2;
        a -= b;
        if (a < 0)
        {
            a *= -1;
            for (int i = 0; i < a; i++)
            {
                c /= 10;
            }
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                c *= 10;
            }
        }
        cout << "sec = " << c << endl;
        c /= 60;
        cout << "min = " << c << endl;
        c = c / 60 / 24;
        cout << "day = " << c << endl;
        c = c / 30 / 12;
        cout << "year = " << c << endl;
    }
    while (1)
    {
        double a, d = 1, b, e = 1;
        cout << "\n(M)input(a,b) >> ";
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        for (int i = 0; i < a; i++)
        {
            d *= 10;
        }
        for (int i = 0; i < b; i++)
        {
            e *= 10;
        }
        double c;
        c = d * (log2(d)) / e;
        c *= 1000;
        cout << "millisec = "<<c <<endl;
        c /= 1000;
        cout << "sec = " << c << endl;
        c /= 60;
        cout << "min = " << c << endl;
        c = c / 60 / 24;
        cout << "day = " << c << endl;
        c = c / 30 / 12;
        cout << "year = " << c << endl;
    }
}