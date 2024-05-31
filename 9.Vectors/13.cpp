//Find the last occurrence of x in the array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    int x;
    cin>>x;
    for (int i = v.size(); i >=0 ; i--)
    {
        if (x==v[i])
        {
            cout<<i;
            break;
        }   
    }
    
    return 0;
}