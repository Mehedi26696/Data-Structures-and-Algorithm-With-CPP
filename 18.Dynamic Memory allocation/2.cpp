//Uses of reference variable

#include<bits/stdc++.h>
using namespace std;
//function call by reference variable(pass by reference)
void update(int &n)
{
    n++;
}
int main()
{
    int i=5;
    cout<<"Before->"<<i<<endl;
    update(i);
    cout<<"After->"<<i<<endl;
    return 0;
}