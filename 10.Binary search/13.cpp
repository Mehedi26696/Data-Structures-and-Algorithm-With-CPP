// sqrt using binary search more precisely
#include <iostream>
using namespace std;
long long result(int n)
{
    long long int ans;
    int s = 0;
    int e = n;
    long long mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int a = mid * mid;
        if (a == n)
        {
            return mid;
        }
        if (a < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double precise(int n, int p, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < p; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int tempsol = result(n);
    int p;
    cout << "Enter precision" << endl;
    cin >> p;
    cout << precise(n, p, tempsol);
    return 0;
}