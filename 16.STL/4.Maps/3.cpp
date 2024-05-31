// find function

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;
    mp[1] = "abc";
    mp[5] = "cdc";
    mp[3] = "ade";
    mp[4] = "ramadan";
    auto it = mp.find(3);
    if (it == mp.end())
    {
        cout << "Not in map" << endl;
    }
    else
    {

        cout << it->first << " " << it->second << endl;
    }

    return 0;
}