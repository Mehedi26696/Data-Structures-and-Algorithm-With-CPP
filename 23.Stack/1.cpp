
//stack is data structure that follows LIFO (Last In First Out) principle.
//stack is a container adapter that gives the programmer the functionality of a stack - specifically, a LIFO (Last In, First Out) data structure.

//push() function is used to insert an element into the stack.
//pop() function is used to remove an element from the stack.
//top() function is used to return the top element of the stack.
//empty() function is used to check if the stack is empty or not.

//stack using stl

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s; //stack created using stl
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x); //push() function is used to insert an element into the stack.
    }
    
    cout << "The size of the stack is: " << s.size() << endl; //size() function is used to return the size of the stack.
    cout << "The stack is: ";
    while (!s.empty())
    {
        cout << s.top() << " "; //top() function is used to return the top element of the stack.
        s.pop(); //pop() function is used to remove an element from the stack.
    }
    cout << endl;

   
    return 0;
}

