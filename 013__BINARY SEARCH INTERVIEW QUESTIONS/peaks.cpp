#include<iostream>
using namespace std;
int PeakArray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=(start+(end-start)/2);

    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=(start+(end-start)/2);
    }
    return end;
}
int main()
{
    int arr[6]={0,1,6,4,3,2};
    cout<<"Peak Index of an Array is : "<<PeakArray(arr,6);
    
    return 0;
}