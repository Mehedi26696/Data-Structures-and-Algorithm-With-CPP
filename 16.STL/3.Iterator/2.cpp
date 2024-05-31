//itrate using iterator 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int>v={5,6,3,4,5,6};
    for (int i = 0; i <  v.size(); i++)
    {
         cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>:: iterator it=v.begin();
    while(it!=v.end())
    {
        cout<<(*(it))<<" ";
        it++;
    }
    return 0;
}