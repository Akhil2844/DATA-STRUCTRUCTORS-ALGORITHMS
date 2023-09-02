#include <iostream>
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

Node *solve(Node *first, Node *second)
{
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }

    Node *curr1 = first;
    Node *next1 = first->next;
    Node *curr2 = second;
    Node *next2 = second->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr1->data <= curr2->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = curr1->next;
            next1 = next1->next;
            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node *mergesortedLL(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }

    if (second == NULL)
    {
        return first;
    }

    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}
int main()
{
    // create a first node
    Node *first = new Node(1);
    first->next = new Node(3);
    first->next->next = new Node(5);

    // create a second node
    Node *second = new Node(2); 
    second->next = new Node(4);
    second->next->next = new Node(5);

    //  call a ll
    Node *mergesort = mergesortedLL(first, second);

    // print
    while (mergesort != NULL)
    {
        cout << mergesort->data << " ";
        mergesort = mergesort->next;
    }

    return 0;
}