#include <iostream>
#include <stack>
using namespace std;
struct Stack
{
    string *item;
    int N;
    int capacity;
};
using Stack = Stack *;
Stack newStack(int capacity)
{
    
    stack s = new Stack;
    s->item = new string[capacity];
    s->N = 0;
    s->capacity = capacity;
    return s;
}
void free(Stack s)
{
    delete[] s->item;
    delete s;
}
int size(Stack s){
    return s->N;
}
bool empty(Stack s){
    return s->N == 0;
}
void pop(Stack s){
    s-> N -- ;
}
string top(Stack s){
    while(!empty(s)){
        cout << top(s) << ' ';
        pop(s);
    }
    cout << endl;   // stack is empty now
}
int main(void)
{
}