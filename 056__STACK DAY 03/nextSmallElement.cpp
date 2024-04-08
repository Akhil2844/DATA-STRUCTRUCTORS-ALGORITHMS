#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while ( s.top() >= curr) {
            s.pop();
        }

        ans[i] = s.top(); // Assign the current top of the stack to ans[i]
        s.push(curr);
    }
    return ans;
}

int main() {
    // Create a vector
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);

    // Next smaller element
    vector<int> result = nextSmallerElement(arr, 4);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
