#include <iostream>
#include <vector>

using namespace std;

void merge(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while ((i < n) && (j < m))
    {
        if (arr1[i] < arr2[j])
        {
            arr1[k++] = arr1[i++];
            
        }
        else
        {
            arr1[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr1[k++] = arr1[i++];
        
    }

    while (j < m)
    {
        arr1[k++]= arr2[j++];
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[6] = {1, 2,3,4,5,6};
    int arr2[4] = {1, 2, 3,4};
    int arr3[10] = {0};

    merge(arr1, 6, arr2, 4);

    cout << "Merge Sorted Array is -> " << endl;

    PrintArray(arr1, 10);
}