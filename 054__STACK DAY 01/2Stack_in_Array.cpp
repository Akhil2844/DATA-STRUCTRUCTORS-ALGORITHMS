#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }

        else
        {
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }

        else
        {
            return -1;
        }
    }
};

int main()
{

  int size = 10; // Total size of the array
    Stack twoStacks(size);

    twoStacks.push1(1);
    twoStacks.push1(2);
    twoStacks.push2(3);
    twoStacks.push2(4);

    cout << "Popped from Stack 1: " << twoStacks.pop1() << endl;
    cout << "Popped from Stack 2: " << twoStacks.pop2() << endl;


    return 0;
}