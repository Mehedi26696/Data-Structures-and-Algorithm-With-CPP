// Leap year
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a%400==0)
    {
        cout<<"Leap year";
    }
    else if (a%4==0 && a%100!=0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not Leap year";
    }
    
    
    return 0;
}