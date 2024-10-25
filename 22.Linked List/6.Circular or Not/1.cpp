
// Circular Linked List

#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    // constructor

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void InsertNode(Node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        tail->next = newNode;
    }

    else
    {
        // non empty
        // assuming that the element present in the list

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found curr is represent this element node

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void InsertAtTail(Node *&tail, int d)
{
       if (tail == NULL)
        {
            Node *temp = new Node(d);
            tail = temp;
            tail->next = NULL;
        }
        else
        {
            Node *temp = new Node(d);
            tail->next = temp;
            tail = temp;
        }
}

bool iscircular(Node *tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        return false;
    }
    do
    {
        tail = tail->next;
    } while (tail != NULL && tail != temp);

    // using do while because if elements no is 1 then normal while can't print it
    if (tail == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *tail = NULL;

    int len;
    cin >> len;
    int x;
    for (int i = 0; i < len; i++)
    {

        int d;
        cin >> d;

         InsertNode(tail, x, d);

       // InsertAtTail(tail, d);
 
        x = d;
    }

    cout << iscircular(tail) << endl;

    return 0;
}