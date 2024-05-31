//copy of pairs

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    pair<int,string>p; 
    p=make_pair(2,"abc"); 
    cout<<p.first<<" "<<p.second<<endl; 
    pair<int,string>p1=p;//copy 
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}