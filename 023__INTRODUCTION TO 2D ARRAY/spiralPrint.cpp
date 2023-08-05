#include<iostream>
#include<vector>
using namespace std;


vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row=matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;

        // index initalization
        int rowStartingIndex =0;
        int colStartingIndex =0;
        int rowEndingIndex=row-1;
        int colEndingIndex=col-1;

        while(count<total)
        {
            // print 1st row
            for(int index=colStartingIndex;count<total && index<=colEndingIndex;index++)
            {
            ans.push_back(matrix[rowStartingIndex][index]);
            count++;
            }
        rowStartingIndex++;

        //print end col
         for(int index=rowStartingIndex;count<total && index<=rowEndingIndex;index++)
         {
             ans.push_back(matrix[index][colEndingIndex]);
             count++;
         }
         colEndingIndex--;

         //print end row
         for(int index = colEndingIndex;count<total && index>=colStartingIndex;index--)
         {
             ans.push_back(matrix[rowEndingIndex][index]);
             count++;
         }
         rowEndingIndex--;

         //print first col
         for(int index=rowEndingIndex;count<total && index>=rowStartingIndex;index-- )
         {
             ans.push_back(matrix[index][colStartingIndex]);
             count++;
         }
        colStartingIndex++;

    }
    return ans;
    }


int main()
{
    vector<vector<int>> matrix(3, vector<int>(4));

      cout << "Enter the elements " <<  endl;
    //taking input -> row wise input
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin >> matrix[row][col];
        }
    }

     cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout <<matrix[row][col] << " ";
        }
        cout << endl;
}


vector<int> spiralResult = spiralOrder(matrix);

    cout << "Spiral print is: " << endl;
    // Print the elements in spiral order
    for (int i = 0; i < spiralResult.size(); i++) {
        cout << spiralResult[i] << " ";
    }
    cout << endl;
}