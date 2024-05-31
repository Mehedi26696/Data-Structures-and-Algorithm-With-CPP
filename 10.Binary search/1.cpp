#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {3, 7, 11, 13, 19, 27};
    int a;
    cin >> a;
    int low = 0;
    int high = 5;
    while (low<=high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == a)
        {
            cout << mid;
            break;
        }
        else
        {
            if (arr[mid] < a)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return 0;
}