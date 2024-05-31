//remainder of a divided by b



#include<iostream>
using namespace std;
int main()
{
   //int a=4,b=3,c;
   int a,b,c;
   cin>>a>>b;
   
   c=b*(a/b);
   a=a-c;
   cout<<a;
}