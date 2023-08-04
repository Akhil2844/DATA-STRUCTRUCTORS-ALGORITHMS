#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int TriplesortArray(int arr[],int n)
{

int left=0,right=n-1,mid=0;

 while (mid <= right) {
        switch (arr[mid]) {
  
        // If the element is 0
        case 0:
            swap(arr[left++], arr[mid++]);
            break;
  
        // If the element is 1 .
        case 1:
            mid++;
            break;
  
        // If the element is 2
        case 2:
            swap(arr[mid], arr[right--]);
            break;
        }
    }
}



int main()
{
    int arr[11]={1,2,2,2,0,1,0,1,0,0,1};

    TriplesortArray(arr,11);
    printArray(arr,11);

}