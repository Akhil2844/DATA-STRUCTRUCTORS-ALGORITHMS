#include <iostream>
#include <queue>
using namespace std;

class Queue
{

public:
    int *arr;
    int qfront;
    int rear;
    int size;

    // constructor called
    Queue()
    {
        size = 1000001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full " << endl;
        }

        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return arr[qfront];
        }
    }

    bool empty()
    {
        if (qfront == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main()
{
    Queue q; // Create a queue with a maximum size of 100

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Front: " << q.front() << endl; // Should print "Front: 1"

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Is empty: " << q.empty() << endl; // Should print "Is empty: 1" (true)

    return 0;

    return 0;
}