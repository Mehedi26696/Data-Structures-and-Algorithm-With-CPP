// taking input in pairs in vector
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void printvec(vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
int main()
{
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});//input pairs form in vector 
    }
    printvec(v);

    return 0;
}