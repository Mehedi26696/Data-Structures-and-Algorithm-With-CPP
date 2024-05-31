//find total occurence of an elements in an sorted array
#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = 10 - 1;
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
    int end = 10 - 1;
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
    int arr[10] = {1, 2, 2, 2, 3, 3, 3, 3, 3, 5};
    // cout << "First occurrence of 3 is at index " << firstOcc(arr, 5, 3);
    // cout << endl;
    // cout << "Last occurrence of 3 is at index " << lastOcc(arr, 5, 3);
    cout<<"Total occurrence of 3 in array is "<<lastOcc(arr, 5, 3)-firstOcc(arr, 5, 3)+1;

    return 0;
}