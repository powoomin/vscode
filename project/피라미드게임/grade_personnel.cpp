#include <iostream>
using namespace std;
int main(void)
{
    int total;
    char save1[5] = {'A','B','C','D','F'};
    int rank[5];
    int sum=0;
    cin >> total;
    rank[0] = total /(100/5);
    total = total - rank[0];
    rank[1] = total/(100/28);
    total = total - rank[1];
    rank[2] = total /(100/50);
    total = total - rank[2];
    rank[3] = total /(100/33);
    total = total - rank[3];
    rank[4] = total/(100/5);
    for(int i=0;i<5;i++)
    {
        cout<<save1[i]<<" = "<< rank[i]<<endl;
        sum = sum + rank[i];
    }
    cout << "sum = "<<sum<<endl;
}