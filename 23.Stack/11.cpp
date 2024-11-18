
//reduntant paranthesis
// ((a+b))  -> true
// (a+b)    -> false
// ((a+b)+(c+d)) -> false
// (a+b)+(c+d) -> false

// Approach:
// 1. Traverse the string
// 2. If opening bracket, push in stack
// 3. If closing bracket, check stack top
// 4. If stack top is operator, return true
// 5. Else pop the stack till opening bracket
// 6. If no operator found, return false
// 7. If stack is empty, return false
// 8. Else return true

 

#include<bits/stdc++.h>
using namespace std;

bool checkredudant(string &str)
{  

   stack<int> st;

   for (int i = 0; i < str.length(); i++)
   {
        char ch = str[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
             st.push(ch);
        }

        else{

            // so its closing or lowercase letter

            if(ch==')'){
                bool isred = true;
                while (st.top()!='(')
                {
                    char x = st.top();
                    if (x == '+' || x == '-' || x == '*' || x == '/')
                    {
                         isred = false;
                    }
                    st.pop();
                    
                }

                if (isred == true)
                {
                     return true;
                }

                st.pop();
                
                
                
            }
        }
        

   }

   return false;
   
   
    
    
}
int main()
{
    string str;
    cin >> str;
    
    if (checkredudant(str))
    {
         cout<<"It has redudant parentheses"<<endl;
    }
    else
    {
         cout<<"It does not have redudant parentheses"<<endl;
    }
    
    
    return 0;
}