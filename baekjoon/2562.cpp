#include <iostream>
using namespace std;
int main(void)
{
    int n[9];
    for(int i=0;i<9;i++)
    {
        cout<<"n["<<i<<"] >> ";
        cin >> n[i];
    }
    int top = n[0];
    int top_num=0;
    for(int i=1;i<9;i++)
    {
        if(top<n[i])
        {
            top = n[i];
            top_num=i+1;
        }
    }
    cout << "제일 큰 수 >> "<<top<<endl;
    cout << top_num<<"번째"<<endl;
}