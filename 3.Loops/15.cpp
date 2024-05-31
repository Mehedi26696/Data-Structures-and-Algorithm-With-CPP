//wap to find a^b with out power function
#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    cin>>a>>b;
    for (int i =1; i <=b; i++)
    {
         c=c*a;
    }
    cout<<c;
    return 0;
}
