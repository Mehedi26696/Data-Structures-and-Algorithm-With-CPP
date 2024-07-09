//Reference variable forbidden

#include<bits/stdc++.h>
using namespace std;
//not correct way to use reference because here all variable is local for fun1
// int &fun1(int n)
// {
//     int num=n;;
//     int &ans=num;
//     return ans;
// }

// int *fun2(int n)
// {
//     int *ptr=&n;
//     return ptr;
//}
int main()
{
    int i=5;
    //fun1(i);
   // fun2(i);
    return 0;
}