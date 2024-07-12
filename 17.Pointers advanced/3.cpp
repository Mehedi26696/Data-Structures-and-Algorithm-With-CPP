//pointer arithmatic

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=5;
    int *t=&i;
    (*t)++;//value increase which address is store in t
    cout<<i<<endl;
    cout<<*t<<endl;
    cout<<t<<endl;
    t++;//address increment
    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl;



    return 0;
}