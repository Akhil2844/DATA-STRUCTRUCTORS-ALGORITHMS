#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max1 = INT16_MIN;
    for (int i = 0; i < n; i++)
    {

        max1= max(max1,arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return max1;
}

int getMin(int arr[], int n)
{
    int min1 = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        min1=min(min1,arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return min1;
}
int main()
{
    int size;
    cout << "Enter the size :" << endl;
    cin >> size;

    int arr[100];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum value is : " << getMax(arr, size) << endl;
    cout << "Minimum value is : " << getMin(arr, size) << endl;
}