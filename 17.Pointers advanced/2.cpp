//pointer copy

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    int *q=p;//pointer copy

    cout<<p<<endl;
    cout<<q<<endl;
    return 0;
}