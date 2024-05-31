//WAP for reverse the number
#include<iostream>
using namespace std;
int main()
{
    int a,b,n=0;
    cin>>a;
    while (a>0)
    {
         b=a%10;
         n=n*10+b;
         a=a/10;
        
    }
    cout<<n;
    return 0;
}