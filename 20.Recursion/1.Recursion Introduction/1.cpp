// recursive function-> base case ,processing and recursive relations  then it's called tail recursion
// recursive function-> base case ,recursive relations and processing  then it's called head recursion

// a^b by recursion
//  a^b=a*a^(b-1) -> f(n)=a*f(n-1)
#include <bits/stdc++.h>
using namespace std;
int p(int a, int b)
{

    // base case
    if (b == 0)
    {
        return 1;
    }

    return a * p(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << p(a, b) << endl;
    return 0;
}