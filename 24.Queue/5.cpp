
//priority queue

//Priority Queue

//Priority Queue is a type of queue that stores elements in a sorted order. The elements are popped based on their priority.

//Operations on Priority Queue

//1. push() : This function is used to insert an element into the priority queue.
//2. pop() : This function is used to delete an element from the priority queue.
//3. top() : This function is used to get the top element of the priority queue.
//4. size() : This function is used to get the size of the priority queue.

//Implementation of Priority Queue using STL

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10); //pushing elements into the priority queue
    pq.push(20);
    pq.push(30);
    cout << pq.top() << endl; //top element of the priority queue
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl; //size of the priority queue
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }   
    return 0;
}