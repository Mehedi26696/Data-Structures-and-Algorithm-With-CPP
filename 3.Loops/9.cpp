//WAP for count the digit number

#include<iostream>
using namespace std;
int main()
{
    int a,c=0;
    cin>>a;
    for (int i = 1;a>0 ; i++)
    {
         a=a/10;
         c++;

    }
    cout<<c;
    
    return 0;
}