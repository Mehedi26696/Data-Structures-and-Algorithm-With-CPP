//Quick Sort
 
//  It initially selects an element as a pivot element and partitions
//  the given array around the picked pivot.
//  Many different versions of quickSort pick pivot in different ways.

// Always pick the first element as a pivot (implemented below).
// Always pick the last element as the pivot.
// Pick a random element as a pivot.
// Pick the median as a pivot.

//We have to place pivot in the right position of sorted array

#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pivot=arr[start];
    int count = 0;
    //Counting how many elements are small then pivot
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;

}
void quicksort(int arr[],int start,int end)
{   
   
    //base case
    if (start>=end)
    {
         return;
    }

    //partitioning the array

    int p=partition(arr,start,end);


    // Sorting the left part
    quicksort(arr, start, p - 1);

    // Sorting the right part
    quicksort(arr, p + 1, end);
    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}