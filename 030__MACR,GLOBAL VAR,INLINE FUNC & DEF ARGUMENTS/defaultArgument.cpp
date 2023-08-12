#include<iostream>
using namespace std;

int print(int arr[],int n,int start=0  /*default argument */)
{
   for(int i=start;i<n;i++)
   {
    cout<<arr[i]<<endl;
   }
}
int main()
{
    int arr[5]={1,4,6,7,8};
     int size=5;

     print (arr,size);
     cout<<endl;
     print(arr,size,2);

     return 0;
}

// default argument always start with right part