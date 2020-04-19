#include <iostream>
using namespace std;
void i1(int &p);
void c1(char *p);
void c2(char *p);

int main(void)
{
    int x =6;
    int &a=x;
    i1(a);


    char c[] = "Hello World";
    char *d;    
    d =c;
    *d = '<';
    c1(d);
    cout << d <<endl;
    cout << a <<endl;
    c2(d);
    cout << d <<endl;
    d = new char[100];
    strcpy(d,"handong gloval univercity");
    cout << d <<endl;

}
void i1(int &p)
{
    p += 10;
}
void c1(char *p)
{
    p++;
    *p = '>';
}
void c2(char *p)
{
    p = new char[100];
    strcpy(p,"handong gloval univercity");
    cout << p <<endl;
}