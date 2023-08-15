#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + (e - s) / 2);

    // length of to new arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create two array
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index1 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // Base call
    if (s >= e)
    {
        return;
    }

    int mid = (s + (e - s) / 2);
    // recursive calls

    // left part k liye call kra
    mergeSort(arr, s, mid);

    // right part k liye call kra
    mergeSort(arr, mid + 1, e);

    // merge two array
    merge(arr, s, e);
}
int main()
{
    int arr[5] = {3, 2, 1, 6, 9};
    int n = 5;
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}