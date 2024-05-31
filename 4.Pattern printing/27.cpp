/*
* * * *
 * * * *
  * * * *
   * * * *
*/

#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=r; k++)
        {
           cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}