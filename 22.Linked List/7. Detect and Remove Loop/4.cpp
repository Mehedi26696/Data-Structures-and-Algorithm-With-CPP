

// Detect loop using floyd's cycle detection algorithm

// find start of loop

// remove loop
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// new node insert before head
void InsertAtHead(Node *&head, int d)
{
    // new node create

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// new node insert after Tail
void InsertAtTail(Node *&tail, int d)
{
    // new node create

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp; // we can use tail = tail->next;
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // insert at Start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    // new node create

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating a node for d

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// traverse linked list and print
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// detect loop using floyd's cycle detection algorithm

bool detectLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

// find start of loop

int startOfLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }

    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow->data;
}

// remove loop

void removeLoop(Node *head)
{
    if (head == NULL || head->next == NULL)
        return;

    Node *slow = head;
    Node *fast = head;

    // Detect loop using Floyd's cycle detection algorithm
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }

    // If loop does not exist
    if (slow != fast)
        return;

    // Find the start of the loop
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // Find the node before the start of the loop
    Node *prev = fast;
    while (prev->next != slow)
    {
        prev = prev->next;
    }

    // Remove the loop
    prev->next = NULL;
}

int main()
{
    // Dynamic
    Node *node1 = new Node(5);

    Node *head = node1;

    Node *tail = node1;

    InsertAtTail(tail, 12);

    InsertAtTail(tail, 15);

    InsertAtTail(tail, 17);

    InsertAtPosition(head, tail, 3, 78);

    // add first position
    InsertAtPosition(head, tail, 1, 23);

    // last position
    InsertAtPosition(head, tail, 7, 33);

    print(head);

    // creating loop
    tail->next = head->next->next;

    cout << "Head - " << head->data << endl;
    cout << "Tail - " << tail->data << endl;

    if (detectLoop(head))
    {
        cout << "Loop found" << endl;
    }
    else
    {
        cout << "Loop not found" << endl;
    }

    cout << "Start of loop - " << startOfLoop(head) << endl;

    //print(head);

    removeLoop(head);

    print(head);

    if (detectLoop(head))
    {
        cout << "Loop found" << endl;
    }
    else
    {
        cout << "Loop not found" << endl;
    }

    return 0;
}