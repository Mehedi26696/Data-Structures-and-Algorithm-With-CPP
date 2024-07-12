//Practice

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p=0;
    int first=110;
    //segmentation fault
    *p=first;
    cout<<*p<<endl;
    return 0;
}