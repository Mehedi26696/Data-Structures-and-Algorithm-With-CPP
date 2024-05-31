/*
   A
  BAB
 CBABC
DCBABCD

*/
#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for (int i = 1; i <=r; i++)
    {
         for (int j = 1; j <=r-i; j++)
         {
            cout<<" ";
         }
        
         for (int k = i; k>0; k--)
         {
             cout<<(char)(k+'A'-1);
             
         }
         for (int m = 1; m <i; m++)
         {
             cout<<(char)(m+'A');
         }
         
         cout<<endl;
    }
    
    return 0;
}