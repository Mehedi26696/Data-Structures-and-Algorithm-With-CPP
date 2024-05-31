/*
   1
  123
 12345
1234567
*/
#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for (int i = 1; i <=r; i++)
    {    
         for (int k = 1; k <=r-i; k++)
         {
            cout<<" ";
         }
         
         for (int j = 1; j <=2*i-1; j++)
         {
            cout<<j;
         }
         cout<<endl;
    }
    
    return 0;
}