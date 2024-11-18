
// Insert an element at the bottom of a stack

//Time complexity: O(n)
//Space complexity: O(n)

//Approach:
//1. If stack is empty, push the element
//2. Else pop the top element and call the function recursively with x
//3. Push the element back in stack



#include <bits/stdc++.h>
using namespace std;

void insert(stack<int>&s,int x){
    if (s.empty())
    {
         s.push(x);
         return;
    }

    int temp = s.top();

    s.pop();

    insert(s,x); //recursive call

    s.push(temp);
    
}
int main()
{   
    int n;
    cin>>n;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
         int a;
         cin>>a;
         s.push(a);
    }
  
 
    int x;
    cin>>x;
    
    insert(s,x);

    for (int i = 0; i < n+1; i++)
    {
         cout<<s.top()<<" ";
         s.pop();
    }
    
    return 0;
}