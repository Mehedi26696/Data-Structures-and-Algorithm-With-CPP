//Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter rows no" << endl;
    cin >> r;
    cout << "Enter columns no" << endl;
    cin >> c;
    int arr1[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr1[i][j];
        }
    }
    int l1,r1;
    cout<<"Enter First Cordinates "<<endl;
    cin>>l1>>r1;
    int l2,r2;
    
    cout<<"Enter Second Cordinates "<<endl;
    cin>>l2>>r2;
    int sum=0;
    for (int i = l1; i <=l2; i++)
    {
         for (int j = r1; j <= r2; j++)
         {
             
                sum+=arr1[i][j];
            
            
         }
         
    }
   cout<<sum<<endl;
    return 0;
}