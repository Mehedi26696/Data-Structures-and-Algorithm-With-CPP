#include <iostream>
using namespace std;

int main()
{
    int even[6] = {2, 4, 6, 10, 12, 18};
    int key;
    cin>>key;
    int odd[5] = {3, 8, 11, 14, 16};
    int start = 0;
    int end = 6 - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (even[mid] == key)
        {
             cout<<mid;
        }
        if (even[mid] < key)
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