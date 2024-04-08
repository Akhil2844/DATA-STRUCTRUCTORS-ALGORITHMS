#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve(stack<int> &inputstack, int count, int N)
{

    // base case
    if (count == N / 2)
    {
        inputstack.pop();
        return;
    }

    int num = inputstack.top();
    inputstack.pop();

    // recursive call
    solve(inputstack, count + 1, N);

    inputstack.push(num);
}

void deleteMiddle(stack<int> &inputstack, int N)
{
    int count = 0;
    solve(inputstack, count, N);
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
    deleteMiddle(str, 5);

    // print a stack
    while (!str.empty())
    {
        cout << str.top() << endl;
        
        str.pop();
    }

    return 0;
}