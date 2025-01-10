
// Heap is a data structure which is used to store data in a sorted manner. It is a complete binary tree. 
//It is of two types:
// 1. Max Heap
// 2. Min Heap

// Max Heap: In a max heap, the value of the root node is greater than or equal to the values of the child nodes.
// Min Heap: In a min heap, the value of the root node is less than or equal to the values of the child nodes.

// Heap is implemented using arrays. The root node is stored at index 0. For any node at index i, the left child is at index 2i+1 and the right child is at index 2i+2.
// The parent of a node at index i is at index (i-1)/2.

// Operations on Heap: 
// 1. Insert: It is used to insert a new element into the heap.
// 2. Delete: It is used to delete an element from the heap.
// 3. Peek: It is used to get the value of the root node of the heap.
// 4. Heapify: It is used to maintain the heap property of the heap.

// Time Complexity of Heap Operations:
// 1. Insert: O(log n)
// 2. Delete: O(log n)
// 3. Peek: O(1)
// 4. Heapify: O(n)



// Max Heap Insertion:
// Insertion approach:
// 1. Insert the new element at the end of the heap.
// 2. Compare the new element with its parent node.
// 3. If the new element is greater than its parent node, swap the new element with its parent node.
// 4. Repeat steps 2 and 3 until the new element is in the correct position.



#include <iostream>
using namespace std;


struct Heap{
    public:

    int arr[100];
    int size = 0;

    void insert(int val){
        arr[size] = val;
        int i = size;
        size++;
        while(i>0){
            int parent = (i-1)/2;
            if(arr[parent]<arr[i]){
                int temp = arr[parent];
                arr[parent] = arr[i];
                arr[i] = temp;
                i = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){

    Heap h;
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(40);
    h.insert(50);
    h.insert(100);
    h.insert(25);
    h.insert(45);
    h.insert(60);
    h.insert(200);
    h.print();
    return 0; 
    
}


