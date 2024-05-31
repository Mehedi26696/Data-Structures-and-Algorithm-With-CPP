// find the second largest element of an array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    // cout<<max;
    int second_max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (second_max < arr[i] && arr[i] != max)
        {
            second_max = arr[i];
        }
    }
    cout << second_max;

    return 0;
}