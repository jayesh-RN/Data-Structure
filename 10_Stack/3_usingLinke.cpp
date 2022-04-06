#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};
 
class Stack{
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    void Display();
    int peek(int index);
    int isEmpty();
    int isFull();
    int stackTop();
};
 
Stack::Stack() {
    top = nullptr;
}
 
Stack::~Stack() {
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}
 
void Stack::push(int x) {
    Node* t = new Node;
    if (t == nullptr){
        cout << "Stack Overflow!" << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}
 
int Stack::pop() {
    Node* p;
    int x = -1;
    if (top == nullptr){
        cout << "Stack Underflow!" << endl;
    } else {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}

void Stack::Display(){
    Node  *p = top;
    p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    Stack stk;

    stk.push(10); 
    stk.push(20); 
    stk.push(30); 


    stk.Display();

    cout<<stk.pop();

    return 0;
}