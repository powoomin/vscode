/*
예제 입력 1 
1
예제 출력 1 
*
예제 입력 2 
2
예제 출력 2 
*
 *
*
 *
예제 입력 3 
3
예제 출력 3 
* *
 *
* *
 *
* *
 *
예제 입력 4 
4
예제 출력 4 
* *
 * *
* *
 * *
* *
 * *
* *
 * *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0) 
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            if(j%2!=0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}