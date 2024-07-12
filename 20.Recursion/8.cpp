//Climb Stairs

//You have been given a number of stairs.Initially, yiu are at the 0th stair,and you need to reach the nth stair.Each time you can either climb one step or two steps.
//You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.

#include<bits/stdc++.h>
using namespace std;
int ways(int n){
    //base case
     if (n<0)
     {
         return 0;
     }
     if (n==0)
     {
         return 1;
     }
     
     int ans=ways(n-1)+ways(n-2);
      
     return ans;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<ways(n)<<endl;
    return 0;
}