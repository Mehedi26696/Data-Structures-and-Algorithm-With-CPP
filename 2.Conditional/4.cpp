// tell a number has 3 digits or not

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a>99 && a<1000)
    {
        cout<<"It has three digits";
    }
    else
    {
        cout<<"It hasn't three digits";
    }
    
    return 0;
}