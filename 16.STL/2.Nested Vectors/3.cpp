//Array of vector
//it's like 2D vector but number of rows fixed but columns not fixed
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
    vector<int>v[N];//number of N vectors
    for (int i = 0; i <  N; i++)
    {
         int n;
         cin>>n;//each vectors size
         for (int j = 0; j <  n; j++)
         {
             int x;
             cin>>x;//each elements
             v[i].push_back(x);
         }
         
    }
    for (int i = 0; i <  N; i++)
    {
        printvec(v[i]);
    }
    cout<<v[2][1];// 2 no rows and 1 no columns
    
    return 0;
}