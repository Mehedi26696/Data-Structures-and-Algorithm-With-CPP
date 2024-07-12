// sum of array

#include <bits/stdc++.h>
using namespace std;
// clarity of recursion
void print(int arr[], int n)
{
    cout << "Size of array : " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int sum(int arr[], int n)
{
    print(arr, n);
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }

    int get = sum(arr + 1, n - 1);
    //clarity
    cout << get << endl;
    
    int ans = arr[0] + get;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr, n) << endl;

    return 0;
}