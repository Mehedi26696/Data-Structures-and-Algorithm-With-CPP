//Dynamic array

#include<bits/stdc++.h>
using namespace std;
int getsum(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i <  n; i++)
    {
         sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    //Variable size dynamic array
    int *arr= new int[n];
    //Taking input in array
    for (int i = 0; i <  n; i++)
    {
         cin>>arr[i];
    }
    cout<<getsum(arr,n)<<endl;
    return 0;
}