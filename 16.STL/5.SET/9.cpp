//if use direct keys to erase then it will delete all of the elements which are duplicate if duplicates are there

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
    s.erase(f);
    for (auto i : s)
    {
        cout << i << " ";
    }

    return 0;
}