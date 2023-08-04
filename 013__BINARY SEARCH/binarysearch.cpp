#include <iostream>
using namespace std;

int binaySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

int main()
{
    int even[6] = {4, 6, 8, 10, 12, 16};
    int odd[5] = {3, 5, 7, 9, 15};

    int evenSearch = binaySearch(even, 6, 12);
    int oddSearch = binaySearch(odd, 5, 5);

    cout << " Index of even Search is : " << evenSearch << endl;
    cout << " Index of odd Search is : " << oddSearch << endl;
}