//**Parenthesis Matching***//
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    struct Node *p;
    char x = -1;
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;
}

int isbalance(char *exp)
{

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (top == NULL)
            {
                return 0;
            }
            else
            {
                pop();
            }
        }
    }
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char exp[] = "((a+b)*(c-d))";
    cout << isbalance(exp) << endl;

    return 0;
}