#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        multiset<int> s;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int sum=0;

        while (k--)
        {    
             auto it=--s.end();
             int cn=*it;
             sum+=cn;
             s.erase(cn);
             s.insert(cn/2);

        }
        cout<<sum<<endl;
    }

    return 0;
}