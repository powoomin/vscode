/*
문제
상근날드에서 가장 잘 팔리는 메뉴는 세트 메뉴이다. 
주문할 때, 자신이 원하는 햄버거와 음료를 하나씩 골라, 세트로 구매하면, 가격의 합계에서 50원을 뺀 가격이 세트 메뉴의 가격이 된다.

햄버거는 총 3종류 상덕버거, 중덕버거, 하덕버거가 있고, 음료는 콜라와 사이다 두 종류가 있다.

햄버거와 음료의 가격이 주어졌을 때, 가장 싼 세트 메뉴의 가격을 출력하는 프로그램을 작성하시오.

입력
입력은 총 다섯 줄이다. 
첫째 줄에는 상덕버거, 둘째 줄에는 중덕버거, 셋째 줄에는 하덕버거의 가격이 주어진다. 넷째 줄에는 콜라의 가격, 다섯째 줄에는 사이다의 가격이 주어진다. 
모든 가격은 100원 이상, 2000원 이하이다.

출력
첫째 줄에 가장 싼 세트 메뉴의 가격을 출력한다.

예제 입력 1 
800 >> 상덕버거
700 >> 중덕버거
900 >> 하덕버거
198 >> 콜라
330 >> 사이다
예제 출력 1 
848
예제 입력 2 
1999
1999
100
189
100
예제 출력 2 
150

<mind>
menu 변수를 만들어 꺼내기 쉽게 만든다.
각 메뉴별로 가격을 입력받는다.
제일 싼 세트메뉴 이름과 가격을 출력한다.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string menu[5] = {"상덕버거","중덕버거","하덕버거","콜라","사이다"};
    int menu_price[5];
    for(int i=0;i<5;i++)
    {
        cout<<menu[i]<<" 가격을 입력해주세요 >> ";
        cin>>menu_price[i];
    }
    int low_burger =2001, low_drink=2001;
    int low_burger_num,low_drink_num;
    for(int i=0;i<3;i++)
    {
        if(low_burger>menu_price[i])
        {
            low_burger = menu_price[i];
            low_burger_num = i;
        }
    }
    if(menu_price[3]<menu_price[4])
    {
        low_drink = menu_price[3];
        low_drink_num = 3;
    }
    else
    {
        low_drink = menu_price[4];
        low_drink_num = 4;
    }
    cout<<"제일 싼 세트메뉴는 "<<menu[low_burger_num]<<"와 "<<menu[low_drink_num]<<"입니다"<<endl;
    cout<<"가격은 "<<low_burger+low_drink-50<<"원 입니다 :)"<<endl;
    return 0;
}