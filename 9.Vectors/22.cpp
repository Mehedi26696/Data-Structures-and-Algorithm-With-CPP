// Find the difference between sum of even idices and odd indices
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
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            sum1 += v[i];
        }
        else
        {
            sum2 += v[i];
        }
    }
    if (sum1 > sum2)
    {
        cout << sum1 - sum2;
    }
    else
    {
        cout << sum2 - sum1;
    }

    return 0;
}