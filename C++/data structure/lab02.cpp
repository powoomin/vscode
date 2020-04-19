//On my honor, I pledge that I have neither received nor provided improper assistance in the completion of this programming assignment. Signed: minwooLee
#include<iostream>
using namespace std;
int& max(int a[], int n)
{
     int x = 0;
     for (int i = 0;i<n;i++)
     {
          if(a[i]>a[x])
          {
               x = i;
          }
     }
     return a[x];
}
int main()
{
     int a[] = {12, 42, 33, 99, 63,100};
     int n = sizeof(a)/sizeof(a[0]);

     max(a, n) = 0;
     for(int i=0;i<n;i++)
     {
          cout<<a[i] <<" ";
     }
     return 0;
}