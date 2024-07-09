//Dynamic 2D array

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    //creation of 2D array
    int **arr=new int*[n];
    for (int i = 0; i < n; i++)
    {
         arr[i]=new int[n];
    }
    //Taking input of 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <  n; j++)
        {
             cin>>arr[i][j];
        }
        
    }
    //Print 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j <  n; j++)
        {
              cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}