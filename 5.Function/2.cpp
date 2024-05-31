//combination and permutation

#include <iostream>
using namespace std;
int fact(int x)
{
     int fact=1;
    for (int i = 1; i <=x; i++)
    {
        fact *= i;
    }
    
    return fact;
}
int combination(int n,int r)
{
    int ncr=fact(n)/(fact(r)*fact(n-r));
}
int permutation(int n,int r)
{
    int npr=fact(n)/fact(n-r);
}
int main()
{
    int n, r;
    cin >> n >> r;
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<"ncr"<<ncr<<endl;
    cout<<"npr"<<npr<<endl;
     
    return 0;
}