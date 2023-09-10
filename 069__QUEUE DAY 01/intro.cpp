#include<iostream>
#include<queue>
using namespace std;
int main()
{

    queue<int>q;

    q.push(10);

    cout<<"Front of q is "<<q.front()<<endl;

    q.push(15);
    cout<<"Front of q is "<<q.front()<<endl;

    q.push(13);
    cout<<"Front of q is "<<q.front()<<endl;

    cout<<"Size of queue is "<<q.size()<<endl;

    q.pop();
    cout<<"Front of q is "<<q.front()<<endl;
    q.pop();
    q.pop();

    cout<<"Size of queue is "<<q.size()<<endl;

    if(q.empty())    
    {
          cout<<"Queue is empty "<<endl;
    }

    else
    {
        cout<<"Queue is not empty "<<endl;
    }
    
    return 0;
}