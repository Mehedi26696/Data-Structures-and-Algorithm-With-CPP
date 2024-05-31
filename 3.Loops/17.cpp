//WAP for find even digit of a given number
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for (int i = 1;a>0; i++)
    {
        b=a%10;
        if (b%2==0)
        {
            cout<<b<<" ";
        }
       a=a/10; 
    }
    
    return 0;
}