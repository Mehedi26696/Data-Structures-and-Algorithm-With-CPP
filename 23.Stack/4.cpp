
// reverse a string using stack
// input: hello
// output: olleh

// time complexity: O(n)
// space complexity: O(n)

// Approach:
// 1. Create a stack
// 2. Traverse the string
// 3. Push each character in stack
// 4. Pop each character from stack and append to a new string
// 5. Return the new string



#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }

    string reversed = "";

    while (!st.empty())
    {
        reversed += st.top();
        st.pop();
    }

    cout << "The reversed string is: " << reversed << endl;
    return 0;
}