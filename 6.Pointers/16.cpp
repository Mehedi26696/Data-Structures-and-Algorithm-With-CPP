//double pointers

#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int *ptr=&x;
    int **p=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<**p<<endl;
    return 0;
}