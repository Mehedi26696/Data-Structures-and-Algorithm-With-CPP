

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int*ptr=&a;
    int b=++(*ptr);
    cout<<a<<" "<<b;
    return 0;
}