#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow " << endl;
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(5);
    st.push(4);
    st.push(6);
    // st.push(38);
    // st.push(78);
    // st.push(4);
    // st.push(8);

    cout << "top element : " << st.peak() << endl;
    st.pop();

    cout << "top element : " << st.peak() << endl;

    st.pop();

    cout << "top element : " << st.peak() << endl;

    if (st.empty())
    {
        cout << "Stack is empty " << endl;
    }
    else
    {
        cout << "Stack is not empty " << endl;
    }
    /*
      // creation of stack
        stack<int>s;

    // push operation
    s.push(2);
    s.push(3);
    s.push(5);

    // pull operation
    s.pop();

    // top
    cout<<"printing top of the stack is "<<s.top()<<endl;

    // empty operation
    if(s.empty())
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        cout<<"Stack is not empty "<<endl;
    }

    // size operation
    cout<<"Size of stack is "<<s.size()<<endl;
    */

    return 0;
}