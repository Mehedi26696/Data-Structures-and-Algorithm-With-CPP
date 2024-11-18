
// circular queue
// push - enqueue
// pop - dequeue
// front - peek
// empty - empty

#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int front;
    int back;
    int n;

public:
    queue(int data)
    {
        n = data;
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        // if((front == 0 && back == n-1)||(back == (front-1)%(n-1))) {
        //     cout << "Queue Overflow" << endl;
        //     return;
        // }

        // else if(front == -1) {
        //     front = 0;
        //     back = 0;
        //     arr[back] = x;
        // }

        // else if(back == n-1 && front != 0) {
        //     back = 0;
        // }

        // else {
        //     back++;
        // }
        // arr[back] = x;

        // alternative way
        if ((back + 1) % n == front)
        { // queue is full
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1)
        { // queue is empty
            front = 0;
        }
        back = (back + 1) % n; // circular increment
        arr[back] = x;
    }

    void pop()
    {
        if (front == -1)
        { // queue is empty
            cout << "No elements in queue" << endl;
            return;
        }
        if (front == back)
        { // only one element in queue
            front = -1;
            back = -1;
            return;
        }
        front = (front + 1) % n; // circular increment
    }

    int peek()
    {
        if (front == -1)
        { // queue is empty
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front]; // returning front element
    }

    bool empty()
    {
        if (front == -1)
        { // queue is empty
            return true;
        }
        return false;
    }
};

int main()
{

    int n;
    cout << "Enter the size of the queue: ";
    cin >> n;
    queue q(n);

    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        q.push(x);
    }

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    return 0;
}