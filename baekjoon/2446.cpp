/*
예제 입력 1 
5
예제 출력 1 
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-2;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+2;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}