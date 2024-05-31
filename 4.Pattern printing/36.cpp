/*
1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7
1           7

input 4
*/

#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for (int i = 1; i <=2*r-1; i++)
    {
        cout<<i;
    }
    int b=r;
    cout<<endl;
    r=r-1;
    for (int m = 1; m <=r; m++)
    {    int a=1;
        for (int j = 1; j <=r+1-m; j++)
        {
            cout<<a;
            a++;
        }
        for (int k = 1; k <=2*m-1; k++)
        {
            cout<<" ";
            a++;
        }
         for (int j =1; j <=r+1-m ; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
        
    }
    
    
    return 0;
}