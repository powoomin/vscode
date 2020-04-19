#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int &z = x;
    cout << x << endl;
    cout << z << endl;

    z = 9;
    cout << x << endl;
    cout << z << endl;

    return 0;
}