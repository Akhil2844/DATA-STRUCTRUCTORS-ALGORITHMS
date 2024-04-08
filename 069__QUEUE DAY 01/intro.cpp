#include<iostream>
#include<queue>
using namespace std;
int main()
{
  // DOUBLY ENDED QUEUE
  deque<int>d;

  d.push_front(12);
  d.push_back(14);

  cout<<d.front()<<endl;
  cout<<d.back()<<endl;

  d.pop_front();

cout<<d.front()<<endl;
cout<<d.back()<<endl;

d.pop_back();

if(d.empty())
{
    cout<<"Deque is empty"<<endl;
}
else
{
    cout<<"Deque is not empty"<<endl;
}


// QUEUE
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