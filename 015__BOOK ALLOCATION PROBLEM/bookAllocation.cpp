#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum=arr[i];
        }
        if(m>n)
        {
            return false;
        }
    }
    return true;
}

int bookAllocate(int arr[], int n)
{
    int start = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (isPossible(arr, n, 5, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return ans;
}
int main()
{

    int arr[5] = {10, 20, 30, 40,50};
    cout << "Minimum Book allocated is : " << bookAllocate(arr, 5) << endl;
    return 0;
}