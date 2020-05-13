/*
수 찾기
n개의 정수를 입력받는다
m개의 정수를 입력받는다
m이 n안에 정수가 있다면 1을 출력 아니면 0을 출력한다.
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    cout <<"n[]의 갯수 >> ";
    cin >>i;
    int n[i];
    cout<<"n의 리스트를 채워주세요"<<endl;
    for(int j=0;j<i;j++)
    {
        cout <<"n["<<j<<"] >> ";
        cin >>n[j];
    }

    cout <<"m[]의 갯수 >> ";
    cin >>i;
    int m[i];
    cout<<"m의 리스트를 채워주세요"<<endl;
    for(int j=0;j<i;j++)
    {
        cout <<"m["<<j<<"] >> ";
        cin >>m[j];
    }
    cout<<"배열의 크기 = "<<sizeof(m)/sizeof(m[0])<<endl;
    for(i=0;i<sizeof(m)/sizeof(m[0]);i++)
    {
        int Bool = 0;
        cout<<"m["<<i<<"] = ";
        for(int j=0;j<sizeof(n)/sizeof(n[0]);j++)
        {
            if(m[i]==n[j])
            {
                Bool = 1;
                break;
            }
        }
        cout<<Bool<<endl;
    }
    return 0;
}