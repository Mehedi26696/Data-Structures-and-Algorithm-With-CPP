// Find first and last occurence of an elements in given sorted array
// duplicate value can be there
// if key is not there return -1

#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            return -1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            return -1;
        }
        

        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    cout << "First occurrence of 3 is at index " << firstOcc(arr, n, key);
    cout << endl;
    cout << "Last occurrence of 3 is at index " << lastOcc(arr, n, key);

    return 0;
}