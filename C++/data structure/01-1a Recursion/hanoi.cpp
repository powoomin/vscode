#include <iostream>
using namespace std;
long long h_count = 0;
void hanoi(int n, char sourche, char inter, char destin);

int main(void)
{
    while (1)
    {
        char a = 'a', b = 'b', c = 'c';
        cout << "몇개의 블럭을 옮기겠습니까? > ";
        int n;
        cin >> n;
        if (n == 0)
            break;
        hanoi(n, a, b, c);
        cout << "총 " << h_count << "번 움직였습니다." << endl;
    }
}
void hanoi(int n, char source, char inter, char destin)
{
    if (n == 1)
    {
        //printf ("Disk 1 from %c to %c\n", source, destin);
        h_count++;
    }
    else
    {
        hanoi(n - 1, source, destin, inter);
        //printf("disk %d from %c to %c\n",n, source, destin);
        h_count++;
        hanoi(n - 1, inter, source, destin);
    }
}