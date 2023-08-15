#include<iostream>
using namespace std;

bool isSorted(int*arr ,int n)
{
    // base case
    if(n==0||n==1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }

    else
    {
        bool remainingPart=isSorted(arr+1,n-1);
        return remainingPart;
    }
}
int main()
{

    int arr[5]={1,2,3,5,8};
    
    int ans=isSorted(arr,5);

    if(ans)
    {
        cout<<"Array is Sorted "<<endl;
    }
    else
    {
        cout<<"Array is not Sorted "<<endl;
    }

   return 0;

}