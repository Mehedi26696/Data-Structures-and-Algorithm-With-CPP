#include <bits/stdc++.h>
using namespace std;
int main()
{
   int temp[10]={1,2,4,5,6};
    //sizeof(arr)=size*4
    cout<<sizeof(temp)<<endl;
    // sizeof(*temp) gives 4
    cout<<sizeof(*temp)<<endl;

    // sizeof(&temp) gives 4 or 8 depending on compiler
    cout<<sizeof(&temp)<<endl;

    int *ptr=&temp[0];
    //sizeof(ptr) output will be 4 or 8 depending on compiler
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    //*ptr gives 4 always
    cout<<sizeof(*ptr)<<endl;


    return 0;
}