//Global Variable
//Not a good practice to use global variable


#include<bits/stdc++.h>
using namespace std;
//Global variable
int x=6;
void a(int i)
{
     cout<<x+i<<endl;
     x++;
}
int main()
{   
    int i=5;
    a(i);
    cout<<x<<endl;
    return 0;
}