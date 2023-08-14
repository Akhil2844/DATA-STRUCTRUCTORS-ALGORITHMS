#include<iostream>
using namespace std;
void print(int*arr,int start,int end)
{
    for(int i=start;i<end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}

bool binarySearch(int* arr,int start,int end,int key)
{
    cout<<endl;
    print(arr,start,end);

    // Base Case

    // element not found
    if(start>end)
    {
        return false;
    }
     
     int mid=start+(end-start)/2;
     cout<<"Value of mid is "<<arr[mid]<<endl;

   // Element found

    if(arr[mid]==key)
    {
        return true;
    }

    else if(arr[mid]>key)
    {
        return binarySearch(arr,start,mid-1,key);
    }

    else
    {
        return binarySearch(arr,mid+1,end,key);
    }
    
}
int main()
{

    int arr[6]={2,4,6,10,14,18};
    int key=18;
    // int ans=binarySearch(arr,0,6,key);

    // if(ans)
    // {
    //     cout<<"Key is Present "<<endl;
    // }
    // else
    // {
    //     cout<<"Key is not Present "<<endl;
    // }

   cout<<"Present or not "<<binarySearch(arr,0,6,key);
    return 0;
}