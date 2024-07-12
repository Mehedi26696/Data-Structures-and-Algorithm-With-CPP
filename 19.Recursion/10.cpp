//check array is sorted or not


#include<bits/stdc++.h>
using namespace std;
//clarity of recursion
void print(int arr[],int n){
    cout<<"Size of array : "<<n<<endl;
    for (int i = 0; i <  n; i++)
    {
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
bool sorted(int arr[],int n){
    print(arr,n);
    //base case
    if (n==0 || n==1)
    {
         return true;
    }

    if (arr[0]>arr[1])
    {
        return false;
    }
    else
    {
         sorted(arr+1,n-1);
    }
    
    
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <  n; i++)
    {
         cin>>arr[i];
    }
    if (sorted(arr,n))
    {
         cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Not Sorted"<<endl;
    }
    

    
    return 0;
}