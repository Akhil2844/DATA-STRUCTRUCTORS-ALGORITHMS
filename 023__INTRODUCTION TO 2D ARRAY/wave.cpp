#include<iostream>
using namespace std;

int wave(int arr[][4],int nrows,int mCols)
{

    for (int col=0;col<mCols;col++)
    {
        if(col&1)
        {
            //odd case --> bottom to top
            for(int row=nrows-1;row>=0;row--)
            {
                cout<<arr[row][col]<<" ";
            }
     
        
        }

        else
        {
            // even case-->> top to bottom
            for(int row=0;row<nrows;row++)
            {
                cout<<arr[row][col]<<" ";
            }
        
        }
    }
  
}

int main()
{
//create 2 d array
    int arr[3][4];

    cout << "Enter the elements " <<  endl;
    //taking input -> col wise input
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }



    cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout << arr[row][col] << " ";
        }
       cout<<endl;
    }

 cout<<"Wave print array "<<endl;
 wave(arr,3,4);

}
