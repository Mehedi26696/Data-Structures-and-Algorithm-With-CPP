// array reverse

#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
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

    print(v);
    vector<int> v1(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        v1[i] = v[v.size() - 1 - i];//ager and porer vector er index er sum (v.size-1)
        cout << v1[i] << " ";
    }

    return 0;
}