#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    // constructor
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    
};

// heafiy alorithm
    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[largest] < arr[left])
        {
            largest = left;
        }

        if (right <= n && arr[largest] < arr[right])
        {
            largest = right;
        }

        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
void heapsort(int arr[], int n)
{
    // Build a max heap
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, n, i);
    }

    // Perform heapsort
    for (int i = n; i >= 2; i--)
    {
        // Swap the root (max element) with the last element
        swap(arr[i], arr[1]);

        // Call heapify on the reduced heap
        heapify(arr, i - 1, 1);
    }
}


int main()
{
    // insertion
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i >0; i--)
    {
        heapify(arr, n, i);
    }



    cout << "Printing the array now : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

// heapsort
   heapsort(arr,n);

  // print 
   cout << "Printing the sorted array: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}