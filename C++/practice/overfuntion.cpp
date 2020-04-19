//똑같은 이름의 함수를 써도 입력받는 변수 타입, 이름에 따라 알아서 작동해 준다.
#include <iostream>
using namespace std;

void print (int num)
{
    cout<<"num = "<<num<<endl;
}
void print (char keyboard[])
{
    cout<<"Keyboard = "<<keyboard<<endl;
}


//디폴트 매게 변수
int I(int i=10) // I에서 입력받은 변수가 없을 경우 10으로 대체한다
{
    return i+10;
}
int J(void) // 입력받은 변수가 없을 경우 그냥 리턴한다.
{
    return 10;
}

int main(void)
{
    int n;
    char m[10];
    cin >> n >> m;
    print(n);
    print(m);
    cout<<"I(1) : " <<I(1)<<endl;
    cout<<"I() : "<<I()<<endl;
    cout<< "J() : "<<J()<<endl;
    //cout<<J(1)<<endl;     J함수는 입력 받지 않기 때문에 입력을 넣으면 에러가 생긴다.

}