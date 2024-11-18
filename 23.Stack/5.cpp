
//delete middle element of stack

// input: 5 1 2 3 4 5
// output: 1 2 4 5

// time complexity: O(n)
// space complexity: O(n)

// Approach:
// 1. Create a stack
// 2. Traverse the stack
// 3. If k == 1, pop the element
// 4. Else pop the top element and call the function recursively with k-1
// 5. Push the element back in stack
// 6. Print the stack


#include <iostream>
#include <stack>
using namespace std;

void deleteMiddleElement(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();

    deleteMiddleElement(s, k - 1);

    s.push(temp);
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


