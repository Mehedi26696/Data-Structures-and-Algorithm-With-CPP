//sorting arrays of 0,1,2 without sort function


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
    int tows=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zeroes++;
        }
       else if(v[i]==1)
        {
            ones++;
        }
        else
        {
            tows++;
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i<zeroes)
        {
            v[i]=0;
        }
        else if( i>=zeroes && i<zeroes+ones)
        {
           v[i]=1;
        }
        else
        {
            v[i]=2;
        }
           
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}