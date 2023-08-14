#include<iostream>
using namespace std;

void bubbleSort(int*arr,int n)
{
    // Base case
    if(n==0||n==1)
    {
        return ;
    }

    //processing 1 case check krna h  ---  largest element ko end m rkhna h
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    // Recursive call
    bubbleSort(arr,n-1);
}
int main()
{

    int arr[5]={2,1,5,6,9};
    bubbleSort(arr,5);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" " ;
    }

    return 0;
}