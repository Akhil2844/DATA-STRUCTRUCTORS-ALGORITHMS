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

void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[smallest] > arr[left])
    {
        smallest = left;
    }
    if (right < n && arr[smallest] > arr[right])
    {
        smallest = right;
    }

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}


int main()
{
    heap h;
    int arr[6] = {-1,9,3,2,6,7};
    int n = 5;
   for (int i = (n / 2) - 1; i >= 0; i--)
{
    heapify(arr, n, i);
}

    cout << "Printing the array now : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}