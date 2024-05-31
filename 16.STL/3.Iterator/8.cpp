//auto keyword
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<pair<int,int>>v_p={{1,2},{3,4},{5,6},{8,9}};
    for ( auto &value : v_p)
    {
         cout<<value.first<<" "<<value.second<<endl;
    }
    
    return 0;
}