#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int x)
{
    if(s.empty())
    {
        s.push(x);
        return;

    }

    int num =s.top();
    s.pop();

    // recursive call
    solve(s,x);

    s.push(num);

}

stack<int> InsetAtBottom(stack<int> &s,int x)
{
    solve(s,x);
    return s;
}
int main()
{

// create a stack
stack<int>  s;
s.push(7);
s.push(1);
s.push(4);
s.push(5);
int x=9;

  // insert at bottom
    stack<int> a=InsetAtBottom(s,x);

    // print
    while (!a.empty())
    {
        cout << a.top() << endl;
        a.pop();
    }

    return 0;
}