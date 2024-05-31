// erase function can be using throug key or it

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;
    mp[1] = "abc";
    mp[5] = "cdc";
    mp[3] = "ade";
    mp[4] = "ramadan";
    // mp.erase(3);
    auto i = mp.find(3);
    mp.erase(3);
    for (auto &it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}