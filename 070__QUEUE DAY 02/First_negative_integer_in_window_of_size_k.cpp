#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    deque<long long int> dq; // A deque to store indices of negative integers
    vector<long long> ans;   // A vector to store the results

    // Process the first window of size K
    for (long long i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            dq.push_back(i); // Add the index of the negative integer to the deque
        }
    }

    // Store the result of the first window
    if (!dq.empty())
    {
        ans.push_back(A[dq.front()]); // Push the value of the front index of the deque
    }
    else
    {
        ans.push_back(0); // If no negative integer, push 0
    }

    // Process the remaining windows
    for (long long i = K; i < N; i++)
    {
        // Remove elements that are no longer in the current window
        if (!dq.empty() && i - dq.front() >= K)
        {
            dq.pop_front();
        }

        // Add the index of the negative integer to the deque
        if (A[i] < 0)
        {
            dq.push_back(i);
        }

        // Store the result for the current window
        if (!dq.empty())
        {
            ans.push_back(A[dq.front()]); // Push the value of the front index of the deque
        }
        else
        {
            ans.push_back(0); // If no negative integer, push 0
        }
    }

    return ans; // Return the vector containing the results
}

int main()
{

    long long A[] = {2, -1, 5, -6,0, 0, -8, 3};
    long long N = 8;
    long long K = 2;

    vector<long long> result = printFirstNegativeInteger(A, N, K);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
