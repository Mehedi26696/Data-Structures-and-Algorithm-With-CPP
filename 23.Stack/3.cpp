
//stack using linked list

#include <iostream> 
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class stack
{
public:
    Node *top = NULL;

    void push(int data)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = top;
        top = temp;
    }

    void pop()
    {
        if (top != NULL)
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    int peek()
    {
        if (top != NULL)
        {
            return top->data;
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        return top == NULL;
    }
};

int main()
{
    stack s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    cout << "The stack is: ";
    while (!s.empty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}