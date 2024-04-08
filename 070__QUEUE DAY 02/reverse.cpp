#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }

    return q;
}

int main()
{
    queue<int> myQueue;
    myQueue.push(4);
    myQueue.push(3);
    myQueue.push(1);
    myQueue.push(10);
    myQueue.push(2);
    myQueue.push(6);


    cout << "Original Queue: ";
    queue<int> originalQueue = myQueue; // Make a copy of the original queue
    while (!originalQueue.empty())
    {
        cout << originalQueue.front() << " ";
        originalQueue.pop();
    }
    cout << endl;

    myQueue = rev(myQueue);

    cout << "Reversed Queue: ";
    while (!myQueue.empty())
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}
