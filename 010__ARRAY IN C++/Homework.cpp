#include<iostream>
using namespace std;

int sum(int arr[3],int n)
{
    int sum1=0;
    for(int i=0;i<n;i++)
    {
      sum1=sum1+arr[i];
    }
    return sum1;
}
int main()
{
    int size;
    cout<<"Enter the size of an array : "<<endl;
    cin>>size;

    int arr[120];
   cout<<"Following are the Elements of an Array : "<<endl;
    for(int i=0;i<size;i++)
    {
     cin>>arr[i];
    }

   
    cout<<"Sum of the Elements of an array is : "<<sum(arr,size)<<endl;
}