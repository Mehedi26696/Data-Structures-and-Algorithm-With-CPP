//vectors of vector
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int N;
    cin>>N;
    vector<vector<int>>v;//vectors of vector
    for (int i = 0; i <  N; i++)
    {
         int n;
         cin>>n;
         vector<int>temp;//temp vector use kore vector er moddhe vector input nite hobe
         for (int j = 0; j <  n ; j++)
         {
             int x;
             cin>>x;
             temp.push_back(x);
         }
         v.push_back(temp);//vector er moddhe vector input
         
    }
    for (int i = 0; i <  v.size(); i++)
    {
            printvec(v[i]);
    }
    
    return 0;
}