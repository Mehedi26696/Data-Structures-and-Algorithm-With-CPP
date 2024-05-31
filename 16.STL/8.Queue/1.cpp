// queue ->Fifo first element in first element out
// element in -> push
// element out -> pop

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(8);
    q.push(5);
    while (!q.empty())
    {
         cout<<q.front()<<endl;
         q.pop();
    }
    
    return 0;
}