//Stacks -> last in first out(LiFo)
//we can access inly top element and size
// value in -> push
// value out -> pop

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(5);
    s.push(7);
    s.push(9);
    while (!s.empty())
    {
         cout<<s.top()<<endl;
         s.pop();//eta na dile infinite loop hobe
    }
    
    return 0;
}
