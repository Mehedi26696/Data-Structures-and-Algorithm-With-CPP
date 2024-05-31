/*
ABCDEFG
ABC EFG
AB   FG
A     G

*/
#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for (int i = 1; i <=2*r-1; i++)
    {
        cout<<(char)(i+64);
    }
     cout<<endl;
     r=r-1;
    for (int j = 1; j <=r; j++)
    {     int a=1;
         for (int k = 1; k <=r+1-j; k++)
         {
            cout<<(char)(a+64);
            a++;
         }
         for (int m = 1; m <=2*j-1; m++)
         {
            cout<<" ";
            a++;
         }
        for (int k = 1; k <=r+1-j; k++)
         {
            cout<<(char)(a+64);
            a++;
         }
         cout<<endl;
    }
   
    
    return 0;
}