// Find an elements in a rotated and sorted array
#include<iostream>
#include <vector>
using namespace std;

int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {  
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}
int position(int arr[],int n,int key)
{
     int pivot=getPivot(arr,5);
     if (key>=arr[pivot] && key<=arr[5-1])
     {
        return binarySearch(arr,pivot,5-1,key);
     }
     else
     {
        return binarySearch(arr,0,pivot-1,key);
     }
}
int main()
{   int arr[5]={7,9,1,2,3};
    int key;
    cin>>key;
    cout<<position(arr,5,key);
    return 0;
}