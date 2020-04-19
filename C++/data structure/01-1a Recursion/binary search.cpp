#include <iostream>
using namespace std;

/*
이진 함수 찾기
1~100 까지 중 원하는 숫자를 효율적으로 찾아내는 함수

설계
숫자 10개 입력받을때까지 아무숫자를 계속 입력받음 !
(단, 똑같은 숫자를 입력받으면 다시 입력받는다)
받은 숫자를 sort함 !
찾고 싶은 숫자를 물어봄
입력받은 숫자의 위치와 전체 sort된 리스트를 보여줌
(단, 입력받은 숫자가 없을경우에는 다시 입력 받는다.)
(단, 입력받은 숫자가 EOF일 경우 stop한다.)
*/

void input(int number[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "input number : ";
        cin >> number[i];
    }
}

void print(int number[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << number[i] << " ";
    }
}

void sort(int number[])
{
    while (1)
    {
        int Bool = 0;
        for (int i = 0; i < 9; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (number[i] > number[j])
                {
                    int save = number[i];
                    number[i] = number[j];
                    number[j] = save;
                    Bool = 1;
                }
            }
        }
        if (Bool == 0)
            break;
    }
}

int binarySearch(int list[], int key,int lo, int hi)
{
    if (lo > hi)
        return -1;
    int mi = (lo + hi) / 2;
    if (key == list[mi])
        return mi;
    if (key < list[mi])
        return binarySearch(list, key, lo, mi - 1);
    else
        return binarySearch(list, key, mi + 1, hi);
}

int main(void)
{
    int n[10];
    int *number = n;
    input(number);
    sort(number);
    print(number);
    int num;
    cout << "input search number : ";
    cin >> num;
    int x = sizeof(*number)/sizeof(number[0]);
    cout << binarySearch(number,num,0,x)<<endl;
    
}