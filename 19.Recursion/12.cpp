//Linear search

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
bool find(int arr[],int n,int a){ 
    print(arr,n);
    //base case
    if (n==0)
    {
         return false;
    }
    if (arr[0]==a)
    {
         return true;
    }
    else
    {
        return find(arr+1,n-1,a);
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
    int a;
    cin>>a;

    if (find(arr,n,a))
    {
         cout<<"Found"<<endl;
    }

    else
    {
        cout<<"Not Found"<<endl;
    }
    
    
    
    return 0;
}