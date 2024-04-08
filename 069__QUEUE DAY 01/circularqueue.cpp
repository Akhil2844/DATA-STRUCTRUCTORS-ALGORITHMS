#include <iostream>
#include <queue>
using namespace std;

class Queue
{

public:
    int *arr;
    int front;
    int rear;
    int size;

    // constructor called
    Queue(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enqueue(int value)
    {

        if ((front == 0 && rear == size - 1) || rear == (front - 1) % (size - 1))
        {
            cout << "Queue is full " << endl;
            return false;
        }

        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty " << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }

        else
        {
            front++;
        }

        return ans;
    }
};

int main()
{

    Queue q(10); // Create a queue with a maximum size of 10

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    int dequeuedValue1 = q.dequeue();
    int dequeuedValue2 = q.dequeue();
    int dequeuedValue3 = q.dequeue();

    cout << "Dequeued values: " << dequeuedValue1 << " " << dequeuedValue2 << " " << dequeuedValue3 << endl;

    return 0;
}