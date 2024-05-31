// count the number of elements that strictly greater than x

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
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (x < v[i])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
/*
7
1 6 4 5 2 3 7
2
5
*/