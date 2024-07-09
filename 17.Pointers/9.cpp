//Double pointer

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=5;
    int *ptr1=&i;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;
    
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    cout<<*ptr3<<endl;

    cout<<**ptr2<<endl;
    cout<<**ptr3<<endl;

    cout<<***ptr3<<endl;
    return 0;
}