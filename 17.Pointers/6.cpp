#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[10]={1,2,4,5,6};
   //arr=arr+1 error
   int *p=&arr[0];
   cout<<p<<endl;
   cout<<*p<<endl;
   p=p+1;
   cout<<p<<endl;
   cout<<*p<<endl;
    


    return 0;
}