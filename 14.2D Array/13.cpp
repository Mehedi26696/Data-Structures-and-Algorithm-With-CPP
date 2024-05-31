//Given a matrix having 0-1 only, find the row with the maximum number of 1’s.
 

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
    int maxcount=0;
    int row;
    for (int i = 0; i <  r; i++)
    {
        int count=0;
         for (int j = 0; j <  c; j++)
         {
              if (arr1[i][j]==1)
              {
                 count++;
              }
              
         }
         if (maxcount<count)
         {
             maxcount=count;
             row=i;
         }
         
    }
    cout<<"Row Number "<<row;
    return 0;
}