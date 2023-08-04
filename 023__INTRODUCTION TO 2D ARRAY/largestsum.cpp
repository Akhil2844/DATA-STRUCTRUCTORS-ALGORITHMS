#include<iostream>
using namespace std;

int LargestSum(int arr[][4],int row,int col)
{

    int maxi=INT16_MIN;
    int rowIndex=-1;
  for(int i=0;i<3;i++)
  {
    int sum=0;
    for(int j=0;j<4;j++)
    {  
        sum=sum+arr[i][j];
    }
    if(sum>maxi)
    {
        maxi=sum;
        rowIndex=i;
    }
  }

  cout<<"Maximum sum is "<<maxi<<endl;
  return rowIndex;

}

int main()
{

    int arr[3][4];

    cout<<"Enter the elements "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the Array "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }


    int ans=LargestSum(arr,3,4);
    cout<<"Index at maximum row sum is "<<ans<<endl;
}