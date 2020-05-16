#include <iostream>
#include <string>
using namespace std;

int hanoi(int n, char source, char inter, char destin)
{
    if(n==1)
    {
        cout<<"Disk 1 from "<<source<<" to "<<destin<<endl;
    }
    else
    {
        hanoi(n-1, source, destin, inter);
        cout<<"Disk "<<n<<" freom "<<source<<" to " <<destin<<endl;
        hanoi(n-1,inter,source,destin);
    }
    return 0;
}
int main(void)
{
    string a("첫번째");
    string b("두번째");
    string c("세번째");

    int n = 3;
    hanoi(n,a,b,c);
}