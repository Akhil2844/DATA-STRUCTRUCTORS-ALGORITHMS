#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    // creating a 2D Array
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int [n];

    }
    
    // Creation done

    //taking input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         cin>>arr[i][j];
        }
    }

    // taking output
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }



    // how to release memory
    for(int i=0;i<n;i++)
    {
        delete []arr[i];

    }

    delete []arr;
return 0;

}