// WAP for printing the sum of series 1-2+3-4+5-6 upto n
#include <iostream>
using namespace std;
int main()
{
     int n,sum1=0,sum2=0;
     cin>>n;
     for (int i = 1; i <=n; i+=2)
     {
         sum1=sum1+i;
     }
     for (int j = 2; j <=n; j+=2)
     {
         sum2=sum2+j;
     }
    cout<<sum1-sum2;
     
    return 0;
}