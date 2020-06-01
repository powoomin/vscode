/*
문제 설명
124 나라가 있습니다. 124 나라에서는 10진법이 아닌 다음과 같은 자신들만의 규칙으로 수를 표현합니다.

124 나라에는 자연수만 존재합니다.
124 나라에는 모든 수를 표현할 때 1, 2, 4만 사용합니다.
예를 들어서 124 나라에서 사용하는 숫자는 다음과 같이 변환됩니다.

10진법	124 나라	10진법	124 나라
1	1	6	14  11  42  16  121     21  144  
2	2	7	21  12  44  17  122     22  211
3	4	8	22  13  111 18  124     23  212
4	11	9	24  14  112 19  141     24  214
5	12	10	41  15  114 20  142     25  221
자연수 n이 매개변수로 주어질 때, n을 124 나라에서 사용하는 숫자로 바꾼 값을 return 하도록 solution 함수를 완성해 주세요.

제한사항
n은 500,000,000이하의 자연수 입니다.

<mind>
숫자 입력받기
124진법으로 나타내기
    3진법으로 나타내기
    3^0 + 3^1 + 3^2 + 3^3
    27+9+3+1 = 40
*/
#include <iostream>
using namespace std;

void coding1(int n) //124 숫자의 나라
{
	string answer = "";
	while (n > 0)
	{
		if (n % 3 == 0)
		{
			answer = "4" + answer;
			n = n / 3 - 1;
		}
		else
		{
			answer = to_string(n % 3) + answer;
			n /= 3;
		}
	}
	cout << answer << endl;
}
void coding2(int n) //원하는 숫자의 나라
{
	int w;
	cout <<"몇진수로 바꿔드릴까요? (2~9진수) >> ";
	cin>> w;
	string str = "";
	while (n > 0)
	{
		if (n % w == 0)
		{
			str = to_string(w-1) + str;
			n = n / w - 1;
		}
		else
		{
			str = to_string(n % w-1) + str;
			n /= w;
		}
	}
	cout << str << endl;
}

int main(void)
{
	int n, menu;
	cout << "변경하실 숫자를 입력해 주세요 >> ";
	cin >> n;
	cout << "\n숫자 나라를 선택해 주세요\n1. 124 숫자의 나라\n2. 원하는 진수로 바꿔줌\n>> ";
	cin >> menu;
	switch (menu)
	{
	case 1:
		coding1(n);
		break;
	case 2:
		coding2(n);
		break;
	default:
		break;
	}
}