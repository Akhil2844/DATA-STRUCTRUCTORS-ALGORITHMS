#include <iostream>
#include <stack>
using namespace std;

class SpecialStack
{
    // Define the data members
    stack<int> s;
    int mini; // To keep track of the minimum element

public:
    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {
                // Store the adjusted value that helps in tracking the minimum
                s.push(2 * data - mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    void pop()
    {
        if (s.empty())
        {
            return;
        }
        else
        {
            int curr = s.top();
            s.pop();
            if (curr < mini)
            {
                // If the popped value was used to calculate the minimum, adjust mini
                mini = 2 * mini - curr;
            }
        }
    }

    int top()
    {
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        if (curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    int getMin()
    {
        if (s.empty())
        {
            return -1;
        }
        return mini;
    }
};

int main()
{

    SpecialStack stack;

    // Push elements onto the stack
    stack.push(3);
    stack.push(5);
    stack.push(2);
    stack.push(1);

    // Get the minimum element from the stack
    int minElement = stack.getMin();
    cout << "Minimum element in the stack: " << minElement << endl; // Should print "Minimum element in the stack: 1"

    // Pop elements from the stack
    stack.pop();
    stack.pop();

    // Get the top element from the stack
    int topElement = stack.top();
    cout << "Top element in the stack: " << topElement << endl; // Should print "Top element in the stack: 5"

    return 0;
}
