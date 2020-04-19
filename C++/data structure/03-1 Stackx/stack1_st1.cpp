#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<string> s){
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl; // now, s is empty
}
int main(){
    string list[] = {"to","be","or","not","to","-","be",
                    "-","-","that","-","-","-","is"};
    stack <string> s;
    for (auto item : list){
        if(item != "-"){
            s.push(item);
        }
        else{
            cout << s.top() << ' ';
            s.pop(); 
        }
    }
    cout << "\nsize() : " << s.size();
    cout << "\ntop() : " <<s.top();
    printStack(s);
    cout << "Happy coding :)"<<endl;//
}