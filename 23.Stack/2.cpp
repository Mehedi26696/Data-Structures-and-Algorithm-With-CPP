
// stack without using stl
// using array

#include <iostream>
using namespace std;

class stack
{
public:
    int top = -1;

    int len;
    int *arr;

    stack(int size)
    {
        len = size;
        arr = new int[len];
    }

    void push(int data)
    {
        if (top < len - 1)
        {
            arr[++top] = data;
        }
        else
        {
            cout << "Stack is full" << endl;
        }
    }

    void pop()
    {
        if (top>=0)
        {
            top--;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        
    }

    bool empty()
    {
        return top == -1;
    }
};
int main()
{

    int n;
    cin >> n;

    stack s(n);
    s.push(5);
    s.push(25);
    s.push(50);
    s.push(54);

    cout << "Top elements is :" << s.peek() << endl;

    s.pop();

    cout << "Top elements is :" << s.peek() << endl;

    s.push(45);

    cout << "Top elements is :" << s.peek() << endl;
    return 0;
}