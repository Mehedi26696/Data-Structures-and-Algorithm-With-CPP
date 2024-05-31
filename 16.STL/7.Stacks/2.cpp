// Balance parenthesis
// we use stacks because we have to check for a close parenthesis if there is present a recent oppening parrenthesis

#include <bits/stdc++.h>
using namespace std;
string isbalanced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
         return "YES";
    }
    else
    {
         return "NO";
    }
}

int main()
{
    string s;
    cin >> s;
    cout<<isbalanced(s)<<endl;
    return 0;
}