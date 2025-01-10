// Heapify mqx heap

// Approach:
// 1. Start from the last non-leaf node of the heap.
// 2. Perform heapify operation on the current node.
// 3. Repeat step 2 for all non-leaf nodes.
// 4. The heap is now a max heap.

// leaf nodes = n/2 to n-1
// last non leaf node = n/2 - 1

// Time Complexity of Heapify: O(n)

#include <iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left <n && arr[left] > arr[largest]){
        largest = left;
    }

    if(right <n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr,n,largest);
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}