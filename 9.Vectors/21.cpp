// Find three largest element in an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<" ";
    cout<<v[v.size()-2]<<" ";
    cout<<v[v.size()-3]<<" ";
    return 0;
}