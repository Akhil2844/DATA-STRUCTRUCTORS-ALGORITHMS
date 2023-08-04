#include<iostream>
using namespace std;


// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp ;
  temp=*a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int n) {
  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}


void selectionSort(int arr[],int n)
{
    int miniIndex=1;
    for(int i=0;i<n-1;i++)
    {
        miniIndex=i;
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]<arr[miniIndex])
            {
                miniIndex=j;
            }
           
        }
         swap(arr[miniIndex],arr[i]);
    }
}

int main()
{
    int arr[5]={5,3,1,2,8};
    selectionSort(arr, 5);
  cout << "Sorted array in Acsending Order: "<<endl;
  printArray(arr, 5);
    return 0;
}