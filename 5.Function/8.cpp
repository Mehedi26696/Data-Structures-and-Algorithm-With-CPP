//print square of first numbers using function

#include<iostream>
using namespace std;
int square(int n)
{
    for (int i = 1; i <=n; i++)
    {
         cout<<i*i<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    square(n);
    return 0;
}