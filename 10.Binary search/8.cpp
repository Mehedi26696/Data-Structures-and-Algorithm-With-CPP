//Mountain index of an array
#include <iostream>
using namespace std;
int Mountain(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
       if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
       {
         break;
       }
       if (arr[mid]<arr[mid+1])
       {
         start=mid+1;
       }
       else
       {
        end=mid-1;
       }
       mid=start+(end-start)/2;   
    }
    return mid;
}
int main()
{
    int arr[4] = {0,2,1,0};
    cout<<Mountain(arr,4);
    return 0;
}