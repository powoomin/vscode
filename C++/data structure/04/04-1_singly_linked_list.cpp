#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

class a{
    public:
    int c;
    a* b;
};


void main2();
void main3(int &p);

int main(void)
{
    Node* p = new Node;
    p ->data = 5;
    p ->next = nullptr;

    Node* q = new Node;
    q -> data = 10;
    q ->next = nullptr;
    p->next = q;
    cout << p->data<<" "<<q->data<<endl; 
    main2();
    int a = 0;
    int &pointer = a;
    main3(pointer);
    cout <<"poinetr = n   "<<pointer<<endl;


}
void main2()
{
    a* p = new a;
    p -> c = 11;
    p ->b = nullptr;
    a* q = new a;
    q -> c = 18;
    q ->b = nullptr;
    cout << p->c<< " "<<q->c<<endl;

    cout <<"p+q = "<<p->c + q->c<<endl;

}
void main3(int &p)
{
    cout <<"p = "<<p<<endl;
    p = p+3;
    cout <<"p = "<<p<<endl;
}