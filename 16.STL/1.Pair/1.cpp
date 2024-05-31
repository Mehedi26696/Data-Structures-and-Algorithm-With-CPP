//basic declaration and input output

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    pair<int,string>p;//declaration of a pair
    p=make_pair(2,"abc");//one of the input method 
    cout<<p.first<<" "<<p.second<<endl;//printing out put
    pair<int,string>p1;
    cin>>p1.first;//one of the input method
    cin>>p1.second;
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}