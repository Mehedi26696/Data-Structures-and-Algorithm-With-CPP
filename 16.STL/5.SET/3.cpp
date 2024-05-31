//find functon

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s; 
    int n;
    cin>>n;
    for (int i = 0; i <  n; i++)
    {
         int x;
         cin>>x;
         s.insert(x);  
    }
    int f;
    cin>>f;
    auto it=s.find(f); // O(log(n))
    if (it!=s.end())
    {
         cout<<*it<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    return 0;
}