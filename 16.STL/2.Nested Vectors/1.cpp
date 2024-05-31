//pairs in vectors

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printvec( vector<pair<int,int>>&v)
{
   for (int i = 0; i <  v.size(); i++)
   {
     cout<<v[i].first<<" "<<v[i].second<<endl;
   }
   
}
int main()
{
    vector<pair<int,int>>v={{1,2},{2,3},{4,5}};//pairs in vector declaration
    printvec(v);
    return 0;
}