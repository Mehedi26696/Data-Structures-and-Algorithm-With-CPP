//WAP for printing the sum of the digits

#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,sum=0;
    cin>>a;
    while (a>0)
    {
         b=a%10;
         sum=sum+b;
         a=a/10;
    }
    cout<<sum;
    
    return 0;
}