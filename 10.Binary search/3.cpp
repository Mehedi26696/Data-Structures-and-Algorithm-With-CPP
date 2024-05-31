#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 4, 6, 10, 12, 18};
    int key;
    cin >> key;
    int start = 0;
    int end = 6 - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            cout << mid;
            break;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

      mid = (start + end) / 2;
    }

    return 0;
}