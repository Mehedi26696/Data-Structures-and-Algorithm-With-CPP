

//delete middle element of stack using extra stack(loop)

#include <iostream>
#include <stack>
using namespace std;

void deleteMiddleElement(stack<int> &s, int k)
{
    stack<int> tempStack;
    for (int i = 0; i < k - 1; ++i)
    {
        tempStack.push(s.top());
        s.pop();
    }

    s.pop(); // Remove the middle element

    while (!tempStack.empty())
    {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main()
{
    stack<int> s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    int k = (n / 2) + 1;

    deleteMiddleElement(s, k);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
