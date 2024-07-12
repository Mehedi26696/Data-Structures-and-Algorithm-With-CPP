//Default Arguments
//Here start is optional argument for function. If in the time of function call we don't provide start value then it start from 
//it's default value(here it is 2) but if we provide the start value then it's works on the basis of this value
//Default value arguments has to be the rightmost one

#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int start=2)
{
    for (int i = start; i < n; i++)
    {
         cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={1,4,7,8,9};
    int size=5;
    print(arr,size);
    
    print(arr,size,3);
    return 0;
}