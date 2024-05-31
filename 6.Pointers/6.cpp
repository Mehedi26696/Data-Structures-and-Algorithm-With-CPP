//calculate sum of two numbers using pointers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    // cin>>a>>b;
    int*p=&a;
    int*q=&b;
    cin>>*p>>*q;
    cout<<*p+*q<<endl;
    cout<<a+b;
    return 0;
}