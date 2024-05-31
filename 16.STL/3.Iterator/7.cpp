//auto keyword
//automatic data type guess kore nibe 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<pair<int,int>>v_p={{1,2},{3,4},{5,6},{8,9}};
    for (auto it = v_p.begin(); it!=v_p.end(); it++)
    {
         cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}