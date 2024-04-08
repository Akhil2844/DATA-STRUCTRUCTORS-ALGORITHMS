#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
// void getMin(int arr[], int n)
// {
//     int mini = INT16_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         mini = min(arr[i], mini);
//     }
//     cout << mini << endl;
// }

void reverse(int arr[], int n)
{
    // for (int i = n-1; i>= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }

int left=0;
int right=n-1;
while(left<=right)
{
    swap(arr[left],arr[right]);
    left++;
    right--;
}

}
int main()
{
    int arr[7] = {20, 4, 15, 2, 6, 8, 11};
    int n = 7;
    // getMin(arr, n);
    reverse(arr, n);
  cout<<"Printing an Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}