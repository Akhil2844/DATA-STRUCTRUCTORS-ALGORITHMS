#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Create a priority queue (min-heap) to store the rope lengths.
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        // Add all the rope lengths to the priority queue.
        for (int i = 0; i < n; i++)
            pq.push(arr[i]);

        long long cost = 0;

        // While there are more than one rope in the priority queue.
        while (pq.size() > 1) {
            // Take the two smallest ropes from the queue.
            long long a = pq.top();
            pq.pop();

            long long b = pq.top();
            pq.pop();

            // Calculate the cost of connecting these two ropes.
            long long sum = a + b;
            cost += sum;

            // Push the combined rope length back into the priority queue.
            pq.push(sum);
        }

        // Return the final minimum cost.
        return cost;
    }
};

int main() {
    long long arr[] = {4, 3, 2, 6};
    long long n = sizeof(arr) / sizeof(arr[0]);

    Solution solution;
    long long minimumCost = solution.minCost(arr, n);

    cout << "Minimum Cost: " << minimumCost << endl;

    return 0;
}
