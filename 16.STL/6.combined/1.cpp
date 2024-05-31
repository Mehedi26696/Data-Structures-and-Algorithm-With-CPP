//pair comparison
//first compare first element if it's equal then check 2nd

#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p1;
    pair<int,int>p2;
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    p1.first=a;
    p1.second=b;
    p2.first=x;
    p2.second=y;
    cout<<(p1<p2)<<endl;
    return 0;
}