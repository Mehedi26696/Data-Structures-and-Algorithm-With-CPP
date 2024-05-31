// if we use it at erase then it will delete just one of the multiple keys if multiple presents

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int f;
    cin >> f;
    auto it = s.find(f);
    if (it != s.end())
    {
        s.erase(it);
    }
    for (auto i : s)
    {
        cout << i << " ";
    }

    return 0;
}