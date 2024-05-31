// sorting arrays of 0's and 1's with out using sort function

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
    int zeroes = 0;
    int ones = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zeroes++;
        }
        else
        {
            ones++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i<zeroes)
        {
            v[i]=0;
        }
        else
        {
           v[i]=1;
        }   
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}