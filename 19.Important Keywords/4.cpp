//Inline functions

//Are used to reduce function calls overhead
//if our functin body is 1 line then compiler can convert this function as inline function
//If a function is inline then the output of function works like macros.
//It's means that the function doesn't call but the return value of this function replace the function call statement in the time of 
// compiling process
//Benefit of this is no extra memory uses and function calls overhead


#include<bits/stdc++.h>
using namespace std;
inline int getmax(int& a, int& b)
{
     return (a>b)?a:b;
}
int main()
{   
    int a,b;
    cin>>a>>b;
    int ans;
    ans=getmax(a,b);
    cout<<ans<<endl;
    return 0;
}

