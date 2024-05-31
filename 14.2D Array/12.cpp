//Write a program to print the row number having the maximum sum in a given matrix and maxsumrow



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
    int maxsum=0;
    int row;
    for (int i = 0; i <  r; i++)
    {
         int sum=0;
         for (int j = 0; j <  c; j++)
         {
             sum+=arr1[i][j];
         }
         if (maxsum<sum)
         {
             maxsum=sum;
             row=i;
         }
         
    }
    cout<<"Row Number "<<row<<endl;;
    cout<<"Max row sum "<<maxsum<<endl;
    return 0;
}