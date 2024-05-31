//set comparison
////first compare first element if it's equal then check 2nd then 3rd and so on

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s1;
    set<int>s2;
    s1={1,2,3};
    s2={2,3};
    cout<<(s1<s2)<<endl;
    return 0;
}