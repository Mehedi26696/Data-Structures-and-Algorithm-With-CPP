//set stored unique elements in sorted order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s; //set declaration
    s.insert(5); //set input taken function
    s.insert(4); //Time complexity O(log(n))
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    for (auto it:s)
    {
         cout<<it<<" ";
    }
    
    return 0;
}