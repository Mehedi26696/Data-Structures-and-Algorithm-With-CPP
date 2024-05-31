//iterator in pairs
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<pair<int,int>>v_p={{1,2},{3,4},{5,6},{8,9}};
    vector<pair<int,int>>:: iterator it;//pairs iterator declaration
    for (it = v_p.begin(); it!=v_p.end(); it++)
    {
         cout<<(*it).first<<" "<<(*it).second<<endl;//pair print
    }
   // pair print alternative
     for (it = v_p.begin(); it!=v_p.end(); it++)
    {
         cout<<(it->first)<<" "<<(it->second)<<endl;//pair print
    }
    return 0;
}