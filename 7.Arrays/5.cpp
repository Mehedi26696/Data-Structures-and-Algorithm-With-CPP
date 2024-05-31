// Array size

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 8, 9, 8, 5, 4, 6, 5, 8, 56, 8, 6, 546, 659, 65, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n;
    return 0;
}