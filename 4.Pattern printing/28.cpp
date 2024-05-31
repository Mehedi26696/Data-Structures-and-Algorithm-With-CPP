/*
       1
     1 2
   1 2 3
 1 2 3 4


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
        for (int k = 1; k <=i; k++)
        {
             cout<<k;
        }
        cout<<endl;
        
    }
    
    return 0;
}