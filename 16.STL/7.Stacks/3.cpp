// Balance parenthesis
// we use stacks because we have to check for a close parenthesis if there is present a recent oppening parrenthesis
// using unordered map

#include <bits/stdc++.h>
using namespace std;
string isbalanced(string s)
{
    unordered_map<char, int> sym = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
    stack<char> st;
    for(char brackets :s)
    {
        if (sym[brackets]<0)
        {
             st.push(brackets);
        }
        else
        {
             if (s.empty())
             {
                 return "NO";
             }
             else
             {
                char top=st.top();
                st.pop();
                if (sym[top]+sym[brackets]!=0)
                {
                     return "NO";
                }
                
             }
             
             
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
    cout << isbalanced(s) << endl;
    return 0;
}