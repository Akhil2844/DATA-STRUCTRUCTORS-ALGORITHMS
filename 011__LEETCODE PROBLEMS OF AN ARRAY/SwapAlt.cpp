#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    cout<<"Following are the swap alternate Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int arr1[5] = {2, 3, 4, 5, 6};

    swapAlternate(arr, 6);
    swapAlternate(arr1, 5);

    printArray(arr, 6);
    printArray(arr1, 5);

    return 0;
}