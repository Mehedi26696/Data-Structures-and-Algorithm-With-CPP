// calculate the products of all elements in an given array

#include <iostream>
using namespace std;
int main()
{
    int n, product = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout << product;

    return 0;
}