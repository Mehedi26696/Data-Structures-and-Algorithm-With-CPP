// Say digits

#include <bits/stdc++.h>
using namespace std;
void saydigit(string arr[], int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    
    saydigit(arr, n);
    cout << arr[digit] << " ";
}
int main()
{
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigit(arr, n);
    return 0;
}