#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    // step 1  fetch first k element from queue and put into stack
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // step 2 fetch element from stack and put into queue
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    // step 3 fetch n-k element from queue an push back into queue
    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}

int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    queue<int> p = modifyQueue(q, k);

    while (!p.empty())
    {
        cout << p.front() << " ";
        p.pop();
    }

    cout << endl;
    return 0;
}