#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

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


}
