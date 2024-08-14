// Binary Search

#include <bits/stdc++.h>
using namespace std;
// clarity of recursion
void print(int arr[], int s, int e)
{
    cout << "Size of array : " << e + 1 << endl;
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool bs(int arr[], int start, int end, int a)
{
    print(arr, start, end);
    int mid = start + (end - start) / 2;
    // base case
    if (start > end)
    {
        return false;
    }
    if (arr[mid] == a)
    {
        return true;
    }
    if (arr[mid] < a)
    {
        bs(arr, mid + 1, end, a);
    }
    else
    {
        bs(arr, start, mid - 1, a);
    }
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
    int a;
    cin >> a;
    if (bs(arr, 0, n - 1, a))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}