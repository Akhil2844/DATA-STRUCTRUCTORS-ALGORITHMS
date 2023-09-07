#include<iostream>
#include<stack>
using namespace std;

void InsertatBottom(stack<int> &s,int num)
{
    // base case
    if(s.empty())
    {
        s.push(num);
        return;
    }

   int x=s.top();
   s.pop();
    // recursive call
  InsertatBottom(s,num);

  s.push(x);
}

void reverseStack(stack<int>&stack)
{
    // base case
    if(stack.empty())
    {
        return;
    }

    int num=stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    InsertatBottom(stack,num);
}
int main()
{
   // create a stack
stack<int>  s;
s.push(3);
s.push(4);
s.push(7);
s.push(9);


  // insert at bottom
    reverseStack(s);

    // print
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }


    return 0;
}