#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int>&stack,int num)
{
  
  // base case
  if(stack.empty() || (!stack.empty())&&stack.top()<num)
  {
    stack.push(num);
    return;
  }

  int n=stack.top();
  stack.pop();

  // recursive call
  sortedInsert(stack,num);

  stack.push(n);

}

void sortStack(stack<int> &stack)
{
    // base case
    if(stack.empty())
    {
        return;
    }

    int num=stack.top();
    stack.pop();

    // recursive call
    sortStack(stack);

    sortedInsert(stack,num);

}

int main()
{
// create a stack
    stack<int> str;
    str.push(5);
    str.push(9);
    str.push(12);
    str.push(8);
    str.push(4);

    // delete middle
    sortStack(str);

    // print a stack
    while (!str.empty())
    {
        cout << str.top() << endl;
        
        str.pop();
    }

    return 0;
}