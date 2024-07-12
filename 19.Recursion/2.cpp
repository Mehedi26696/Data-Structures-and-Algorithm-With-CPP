// Factorial
// n!=n*(n-1)!
// f(n)=n*f(n-1)

#include <bits/stdc++.h>
using namespace std;
int fact(int a)
{
    // Base case
    if (a == 0)
    {
        return 1;
    }

    return a * fact(a - 1);
}
int main()
{
    int a;
    cin >> a;
    cout << fact(a) << endl;
    return 0;
}