
// reverse stack
// input: 1 2 3 4 5
// output: 1 2 3 4 5

// time complexity: O(n^2)
// space complexity: O(n)

// Approach:
// 1. If stack is empty, return
// 2. Pop the top element and call the function recursively
// 3. Insert the element at the bottom of the stack
// 4. Print the stack

//https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/


#include <bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int>&s,int x){
    if (s.empty())
    {
         s.push(x);
         return;
    }

    int temp = s.top();

    s.pop();

    insertatbottom(s,x); //recursive call

    s.push(temp);
    
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    
    insertatbottom(s,temp);

}
int main()
{
    int n;
    cin >> n;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.push(a);
    }

    reverse(s);

    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}