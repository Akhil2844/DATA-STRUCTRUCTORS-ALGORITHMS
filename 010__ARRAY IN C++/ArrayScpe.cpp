#include<iostream>
using namespace std;

void update(int arr[],int n)
{
  cout<<"Inside the function "<<endl;
  // Updating an array
  arr[0]=120;

  //Printing an array
  for(int i=0;i<3;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<"Going Inside the main Function "<<endl;
}

int main()
{
      int arr[3]={1,2,3};

      update(arr,3);

      //Printing the Array
      cout<<endl<<"Printing in main function"<<endl;
      for(int i=0;i<3;i++)
      {
        cout<<arr[i]<<" ";
      }
}