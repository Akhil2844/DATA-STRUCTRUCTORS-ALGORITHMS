#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &arr,int n,int k)
{
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }
    arr=temp;
}

void printArray(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr{1,7,9,11};

   rotate(arr,4,2);
   cout<<"Rotated Array is -> "<<endl;
   printArray(arr,4);

}