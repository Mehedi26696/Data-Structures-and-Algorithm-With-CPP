
// valid parentheses
//  Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//  The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

//  Input: "([)]"
//  Output: false
// Input: "{[]}"
// Output: true
//time complexity: O(n)
//space complexity: O(n)

// Approach:
// 1. Create a stack
// 2. Traverse the string
// 3. If opening bracket, push in stack
// 4. If closing bracket, check stack top and pop
// 5. If stack is empty at the end, return true
// 6. Else return false

//https://leetcode.com/problems/valid-parentheses/description/

#include <bits/stdc++.h>
using namespace std;

bool check(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // if opening bracket, push in stack
        // if close bracket, check stack top and pop

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char x = s.top();
                if ((ch == ')' && x == '(') || (ch == '}' && x == '{') || (ch == ']' && x == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
                
            }
            else
            {
                return false;
            }
            
        }
    }

    if (s.empty())
    {
         return true;
    }

    else
    {
        return false;
    }
    
    
}
int main()
{
    string str;
    cin >> str;
    
    if (check(str))
    {
         cout<<"Valid Parentheses"<<endl;
    }
    else
    {
         cout<<"Not a Valid Parentheses"<<endl;
    }
    
    
    return 0;
}