#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <climits>  // For INT_MIN
using namespace std;

vector<int> nextSmallerElement(int *arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = n - 1; i >= 0 ; i--) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(int* arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans; 
}

int largestRectangleArea(int* heights, int n) {
    vector<int> next(n);
    next = nextSmallerElement(heights, n);
    
    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);
    
    int area = INT_MIN;  // Initialize to INT_MIN

    for(int i = 0; i < n; i++) {
        int l = heights[i];
        
        if(next[i] == -1) {
            next[i] = n;
        }
        
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

const int MAX = 100; 

int maxArea(int M[MAX][MAX], int n, int m) {
    int area = largestRectangleArea(M[0], m);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(M[i][j] != 0 && i > 0) {  // Check i > 0 to avoid accessing M[i-1][j] when i is 0
                M[i][j] = M[i][j] + M[i-1][j];
            }
            else {
                M[i][j] = 0;
            }
        }
        int newArea = largestRectangleArea(M[i], m);
        area = max(area, newArea);
    }
    return area;
}

int main() {

        int n, m;

    // Input matrix dimensions n and m
    cout<<"Enter the dimensions "<<endl;
    cin >> n >> m;

    int M[MAX][MAX];

    // Input matrix elements
                cout<<"Enter matrix elements"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {


            cin >> M[i][j];
        }
    }

    // Calculate and print the maximum area
    int result = maxArea(M, n, m);
    cout << "Maximum Area: " << result << endl;

    return 0;
}

 
