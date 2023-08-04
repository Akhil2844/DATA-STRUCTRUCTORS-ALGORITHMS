#include<iostream>
using namespace std;

void rowSum(int arr[][4],int row, int col)
{
    for(int i=0;i<3;i++)
    {
        int sum =0;
        for(int j=0;j<4;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
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

    cout<<"Print the array "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



cout<<"Row wise sum is "<<endl;
rowSum(arr,3,4);
}