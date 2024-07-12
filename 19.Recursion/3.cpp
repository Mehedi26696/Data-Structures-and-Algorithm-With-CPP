
// Print counting 5,4,3,2,1

#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    if (n == 0)
    {
        cout << 1 << endl;
        return 1;
    }

    cout << n << endl;
    return count(n - 1);
}
int main()
{
    int n;
    cin >> n;
    count(n);
    return 0;
}