#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int k, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int agrCows(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    int start = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr = {4, 2, 1, 3, 6};
    cout << "Maximum distance for cow is : " << agrCows(arr, 5, 2) << endl;
    return 0;
}