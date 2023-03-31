#include <iostream>
using namespace std;
int main(void)
{
    int z = 25;
    int* p;
    p = &z;
    cout << p <<endl;
    z += 5;
    cout << z <<endl;
}