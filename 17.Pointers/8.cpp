//Pointer in function


#include<bits/stdc++.h>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}
void update(int *p)
{
   // p=p=p+1;
    *p=*p+1;
    
}
int getsum(int arr[],int n){
    int sum=0;
     for (int i = 0; i <n; i++)
     {
        sum+=arr[i];
     }
     return sum;
}

int main()
{
    int val=5;
    int*p=&val;
    //print(p);
    //pointer address not changeable but we can update it's value
    cout<<"Before->"<<p<<endl;
    cout<<"Before->"<<*p<<endl;
    update(p);
    cout<<"After->"<<p<<endl;
    cout<<"After->"<<*p<<endl;

    int arr[5]= {1,2,3,4,5};
    cout<<getsum(arr,5)<<endl;

    
    return 0;
}