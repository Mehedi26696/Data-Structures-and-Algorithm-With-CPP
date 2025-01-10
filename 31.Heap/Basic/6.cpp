
// heap sort

// Approach:
// 1. Build a max heap from the input data.
// 2. The root element, i.e., the largest element, will be at the 0th index.
// 3. Swap it with the last element of the heap.
// 4. Remove the last element from the heap.
// 5. Heapify the root element.
// 6. Repeat steps 3-5 until the heap size is greater than 1.

// Time Complexity of Heap Sort: O(nlogn)

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[],int n){
    int size = n;

    while(size > 1){
        int temp = arr[0];
        arr[0] = arr[size-1];
        arr[size-1] = temp;

        size--;

        heapify(arr,size,0);
    }
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

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    heapSort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}