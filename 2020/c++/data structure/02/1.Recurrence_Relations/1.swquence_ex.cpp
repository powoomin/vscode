/*
재귀함수로 1 3 6 10 15 21 28 36 ...을 표현하라
a(n) = (n*(n+1))/2
*/

#include <iostream>
using namespace std;

int A(int n)
{
    int a = (n * (n + 1)) / 2;
    return a;
}
int main(void)
{
    int n;
    cout << "a(n) = (n*(n+1))/2" << endl;
    cout << "input N >>";
    cin >> n;
    cout << A(n) << endl;
}

/*
-Unfolding(전개)
t(n) = t(n-1) + 1
t(n) = t(n-2) + 1 + 1 = t(n-2) + 2

-Telescoping(끼워넣기)
t(n) = t(n-1) + 1  <- (n-1)
t(n-1) = t(n-2) + 1  <- (n-2)
t(n-2) = t(n-3) + 1
...
t(2) = t(1) + 1

t(n) = t(n) +1 + 1+1+1+...+1
     = t(1) + (n-1)
     = 1

-seleciton sort
-recurrence relations : Binary search
특정 숫자를 찾는데 걸리는 시간
t(n) = 1 + t(n/2)

(telescoping)
t(n) = 1 + t(n/2)
t(n/2) = 1 + t(n/4)
t(n/4) = 1 + t(n/8)
...
t(4) = 1 + t(2)
t(2) = 1 + t(1)

-> t(n) = 1+1+1+1+1+1+...+t(1)
    t(1) = t(n/2^k)
    t(n) = 2^k
    logN = log 2^k
         = k*1
if(n = 8) -> 3

(Unfolding)
t(n) = 1+t(n/2)
     = 1+1+t(n/4)
     = 1+1+1+t(n/8)
     ...
     = 1+1+1+1+1+...1+t(n/n)
     = 1k + t(n/2^k)
*/
