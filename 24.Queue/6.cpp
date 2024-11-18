

// Title: Priority Queue
// Description: Implement a priority queue using a custom comparator.

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class PriorityQueue {
public:
    // Custom comparator for the priority queue
    class Compare {
    public:
        bool compare(pair<int, int>& p1, pair<int, int>& p2) {
            return p1.second < p2.second; // Higher priority comes first
        }
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    void push(int value, int priority) {
        pq.push(make_pair(value, priority));
    }

    void pop() {
        if (!pq.empty()) {
            pq.pop();
        } else {
            cout << "Priority queue is empty!" << endl;
        }
    }

    int top() {
        if (!pq.empty()) {
            return pq.top().first;
        } else {
            cout << "Priority queue is empty!" << endl;
            return -1; // Return an invalid value
        }
    }

    bool empty() {
        return pq.empty();
    }
};

int main() {
    PriorityQueue pq;
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value, priority;
        cin >> value >> priority;
        pq.push(value, priority);
    }

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}