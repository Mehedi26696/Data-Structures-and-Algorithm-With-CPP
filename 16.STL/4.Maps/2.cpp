//map all keys ar unique uf we insert multiples same key then in maps remain the last one

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;  
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