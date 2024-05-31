// check the array is a pallindrome or not
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
    int flag = 0;
    for (int i = 0; i < v.size() / 2; i++)
    {
        if (v[i] == v[v.size() - 1 - i])
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Not pallindrome";
    }
    else
    {
        cout << "Pallindrome";
    }

    return 0;
}