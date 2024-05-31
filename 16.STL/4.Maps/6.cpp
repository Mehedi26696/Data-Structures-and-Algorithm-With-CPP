//unorderd map
//inbuilt implentation(uses hash table)
//time complexity O(1)
//valid keys datatype(int,long long,float,double,string)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,string>mp;  
    mp[1]="abc";  
    mp[5]="cdc";  
    mp[3]="ade";
    mp[4]="ramadan";
    mp[5]="karim";
    for (auto &it : mp)
    {
         cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp.size()<<endl;
    return 0;
}