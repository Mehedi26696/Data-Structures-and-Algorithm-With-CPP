//copy value and reference


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    pair<int,string>p; 
    p=make_pair(2,"abc"); 
    cout<<p.first<<" "<<p.second<<endl; 
    pair<int,string>p1=p; //copy by value
    p1.first=3; 
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string>&p2=p;//copy by reference
    p2.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}