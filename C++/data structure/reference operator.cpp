#include <iostream>
using namespace std;

void double_by_ptr(int *p)
{
    *p = *p * 2;
}
void double_by_ref(int& r)
{
    r = r * 2;
}
int double_by_val(int c)
{
    return c * 2;
}

int main()
{
    int x = 2, y = 3, z = 4;
    double_by_ptr(&x);
    cout << x << endl;

    double_by_ref(y);
    cout << y << endl;

    z = double_by_val(z);
    cout << z << endl;
}
