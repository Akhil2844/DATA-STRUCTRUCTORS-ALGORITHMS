#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(int arr[], int n)
{
    int nonZeroes = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[nonZeroes]);
            nonZeroes++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {0, 1, 0, 3, 12, 0};

    moveZeroes(arr, 6);

    cout << "Move ZEroes is -> " << endl;

    printArray(arr, 6);
}