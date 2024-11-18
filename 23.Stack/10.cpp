
// sort a stack
// input: 2 5 7 1 3
// output: 1 2 3 5 7

// time complexity: O(n^2)
// space complexity: O(n)

// Approach:
// 1. If stack is empty, return
// 2. Pop the top element and call the function recursively
// 3. Insert the element in sorted order
// 4. Print the stack

//https://www.geeksforgeeks.org/sort-a-stack-using-recursion/
 


#include<bits/stdc++.h>
using namespace std;
void sortedinsert(stack<int>&s,int temp){
    if (s.empty() || (!s.empty() && s.top()<temp))
    {
         s.push(temp);
         return;
    }
    
    int x = s.top();
    s.pop();
    
    sortedinsert(s,temp);

    s.push(x);
    
}
void sort(stack<int>&s){
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();

    sort(s);
    sortedinsert(s,temp);
    
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

    sort(s);

    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}