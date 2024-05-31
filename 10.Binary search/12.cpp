// sqrt using binary search only integer part
//ex: sqrt(27)=5 

#include <iostream>
using namespace std;
long long result(int n)
{
    long long int ans;
        int s=0;
        int e=n;
        long long mid=s+(e-s)/2;
        while(s<=e)
        {
           long long int a=mid*mid;
            if(a==n)
            {
                return mid;
            }
            if(a<n)
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
}
int main()
{
    int n;
    cin >> n;
    cout<<result(n);
    return 0;
}