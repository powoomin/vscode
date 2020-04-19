#include <iostream>
#include <stack>

using namespace std;

int main(){

	// 스택 생성
	stack<int> s;
    stack<string> c;


	// push
	s.push(3);
	s.push(2);
	s.push(1);
    c.push("minwoo");
    c.push("mina");

	// top
	cout << "top element : " << s.top() << '\n';
    cout << "top string : "<<c.top() <<endl;

	// pop
	s.pop(); // 1이 삭제
	s.pop(); // 2가 삭제
    c.pop();


	// size
	cout << "stack size : " << s.size() << '\n';
    cout << "stack string size : "<<c.size()<<endl;

	// empty
	cout << "Is int empty? : " << (s.empty() ? "Yes" : "No") << '\n';
    s.pop();
    cout << "Is int empty? : " << (s.empty() ? "Yes" : "No") << '\n';
        cout << "Is string empty? : "<<(c.empty() ? "yes!!!!" : "Nooooooo!!!") << endl;
    c.pop(); 
    cout << "Is string empty? : "<<(c.empty() ? "yes!!!!" : "Nooooooo!!!") << endl;
    return 0;

}
