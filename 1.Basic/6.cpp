//Calculating simple interest

#include<iostream>
using namespace std;
int main()
{   
    float p,t,r,si;
    cin>>p>>t>>r;
    si=p*t*r/100;
    cout<<si;
    return 0;
}