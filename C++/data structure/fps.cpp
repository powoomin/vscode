////On my honor, I pledge that I have neither received nor provided improper assistance in the completion of this programming assignment. 
//Signed: minwooLee Student Number : 21900505
#include<iostream>
using namespace std;
int fun(int x, int y)
{
    return x * 2 +y;
}

int foo(int x, int y)
{
    return x + y * 2;
}

int add(int x, int y)
{  
    return x + y;
}
void op_print(int i,int a,int b)
{
    int (*fps[])(int, int) = {fun, foo, add};
    char op[3][10] = {"fun","foo","add"};
    cout << "op("<<op[i]<<") : "<<fps[i](a,b)<<endl;
}
int main(void)
{
    int (*fps[])(int, int) = {fun, foo, add};
    int N = sizeof(fps) / sizeof(fps[0]);
    int a, b;
    cout<<"아무 숫자 두개를 입력해주세요 : ";
    cin >> a >> b;

    for (int i = 0; i< N; i++)
    {
        op_print(i, a,  b);
    }
}


