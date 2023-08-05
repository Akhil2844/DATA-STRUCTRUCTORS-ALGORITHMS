#include<iostream>
#include<vector>

using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        int row=matrix.size();
        int col=matrix[0].size();

        int rowIndex=0;
        int colIndex=col-1;

        while(rowIndex<row && colIndex>=0)
        {

            int element = matrix[rowIndex][colIndex];

            if(element==target)
            {
                return 1;
            }

            else if(element<target)
            {
                rowIndex++;
            }

            else
            {
                colIndex--;
            }
        }
        return 0;
    }

    
    int main()
    {

        vector<vector<int>> matrix(3,vector<int>(4));

        cout<<"Enter the elements "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"Print the array "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the target : "<<endl;
    cin>>target;

 if(searchMatrix(matrix,target))
 {
    cout<<"Element Found "<<endl;
 }
 else
 {
    cout<<"Element not found "<<endl;
 }


    }
