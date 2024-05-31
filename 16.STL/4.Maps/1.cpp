#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;  //map diclaration,map pair hishebe value store kore in sorted order
    mp[1]="abc"; //map value store
    mp[5]="cdc"; //complexity O(log(n))  n-> size of map
    mp[3]="ade";
    mp.insert({4,"afg"});  //alternative way to value store
    for (auto &it : mp)
    {
         cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp.size()<<endl;
    return 0;
}