#include <iostream>
using namespace std;

int pivotArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + (end - start) / 2);
    }
    return end;
}

int binarySearch(int arr[], int start, int end, int key)
{
    
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

int main()
{
    int arr[7] = {7, 8, 9, 1, 2, 3, 4};

    int pivot = pivotArray(arr, 7);
    int k=4;

    if (k >= arr[pivot] && k <= arr[6])
    {
        cout << "Rotated Sorted Array is : " << binarySearch(arr, pivot, 6, k);
    }
    else
    {
        cout << "Rotated sorted Array is : " << binarySearch(arr, 0, pivot - 1, k);
    }
    return 0;
}