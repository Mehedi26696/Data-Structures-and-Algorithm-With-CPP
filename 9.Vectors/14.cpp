//Find the doublet in the array whose sum is equal to given number x
//Two sum

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    int x;
    cin>>x;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j <v.size(); j++)
        {
                 if (x==(v[i]+v[j]))
                 {
                    cout<<i<<" "<<j<<endl;
                 }
                 
        }
        
    }
    
    
    return 0;
}