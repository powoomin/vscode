#include <iostream>
using namespace std;
//key >> arry에 찾는 숫자
//lo >> arry에 0번째 
//hi >> arry에 마지막번째
//mi >> lo와 hi에 가운데번째
/*
arry안에서 제일 빠르게 원하는 숫자 찾기
*/
int binarySearch(int list[],int key, int lo, int hi)
{
    if (lo>hi) return -1;
    mi = (lo+hi)/2;
    if(key == list[mi]) return mi;
    if(key < list[mi])
        return binarySearch(list,key,lo,mi-1);
    else
        return binarySearch(list,key,mi+1,hi);
}

int main(void)
{
    int arry[100];
    for(int i=0;i<100;i++)
    {
        arry[i] = i+1;
    }
    int lo, hi, key;
    lo=0;
    hi=sizeof(arry)/sizeof(arry[0]);
    cout<<"input key >> ";
    cin>>key;
    cout<<binarySearch(arry,key,lo,hi);<<endl;
}