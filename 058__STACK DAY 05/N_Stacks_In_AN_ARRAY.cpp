#include<iostream>
#include<stack>

using namespace std;

class Nstack
{
public:
    int* arr;
    int* next;
    int* top;
    int n, s;
    int freespot;

    // constructor called
    Nstack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // initialize top
        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        // initialize next
        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }

        // update last element
        next[s - 1] = -1;

        // freespot initialize
        freespot = 0;
    }

    bool push(int x, int m)
    {
        // overflow condition
        if (freespot == -1)
        {
            return false;
        }

        // find index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // insert in the array
        arr[index] = x;

        // update next
        next[index] = top[m - 1];

        // update top
        top[m - 1] = index;

        return true;
    }

    int pull(int m)
    {
        // underflow condition
        if (top[m - 1] == -1)
        {
            return -1;
        }

        int index = top[m - 1];

        // update top
        top[m - 1] = next[index];

        // update next
        next[index] = freespot;

        // update freespot
        freespot = index;

        return arr[index];
    }
};

int main()
{
    int n, s;

    // Input the number of stacks (n) and the size of each stack (s)
    cin >> n >> s;

    // Create an Nstack object with n stacks, each of size s
    Nstack nstack(n, s);

    // Example usage: Push and pull elements from the stacks
    nstack.push(10, 1);  // Push 10 to stack 1
    nstack.push(20, 2);  // Push 20 to stack 2

    int value1 = nstack.pull(1);  // Pull from stack 1
    int value2 = nstack.pull(2);  // Pull from stack 2

    cout << "Pulled from stack 1: " << value1 << endl;
    cout << "Pulled from stack 2: " << value2 << endl;

    return 0;
}
