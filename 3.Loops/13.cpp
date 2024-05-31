//factorial
#include<iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cin>>a;
    for (int i =a; i>=1; i--)
    {
         fact=fact*i;
    }
    
  cout<<fact;
    return 0;
}