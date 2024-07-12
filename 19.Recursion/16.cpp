//Power using recursion in optimize way
//a^b if b is even we can write a^b=(a^b/2)*(a^b/2)
//a^b if b is odd we can write a^b=a*(a^b/2)*(a^b/2)

#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0)
    {
        return 1;
    }
    if (b==1)
    {
         return a;
    }
    //recursive call
    int ans=power(a,b/2);

    //even odd check
    if (b%2==0)
    {
         return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
    
    
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}