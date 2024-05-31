// 2 arrays index interconnected that can handle by pair
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
      for (int i = 0; i <  3; i++)
    {
         cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
    cout<<"After swap"<<endl;
    for (int i = 0; i <  3; i++)
    {
         cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
    return 0;
}