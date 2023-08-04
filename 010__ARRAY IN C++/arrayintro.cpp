#include <iostream>
using namespace std;

int FuncArray(int arr[], int size)
{
    cout << "Printing an array :" << endl;
    // Print an array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "All Done Bro" << endl
         << endl;
    ;
}

int main()
{

    // Declare
    int number[15];

    // Accesing an array
    cout << "Value at 14 index " << number[14] << endl;

    cout << "Value at 20 index " << number[20] << endl
         << endl;

    // initalizing an array

    int second[3] = {2, 5, 7};

    //  Acessing an element
    cout << "Value at 2 index is : " << second[2] << endl
         << endl;

    int third[15] = {2, 7};
    FuncArray(third, 15);
    //  int n=15;
    //  cout<<"Printing an array :"<<endl;
    // //print the array
    //  for(int i=0;i<n;i++)
    //  {
    //     cout<<third[i]<<" ";
    //  }
    //   cout<<endl;

    int fourth[10] = {0};
    FuncArray(fourth, 10);
    // n=10;
    //  cout<<"Printing an array :"<<endl;
    // //Print an array
    // for(int i=0;i<n;i++)
    // {
    //     cout<<fourth[i]<<" ";
    // }
    // cout<<endl;

    int fifth[10] = {1};
    FuncArray(fifth, 10);
    // n=10;
    //  cout<<"Printing an array :"<<endl;
    // //Print an array
    // for(int i=0;i<n;i++)
    // {
    //     cout<<fifth[i]<<" ";
    // }
    // cout<<endl;

    // To print array of an same element

    int sixth[10] = {1};
    int n = 10;
    int value = 1;

    // initalize an array
    for (int i = 0; i < n; i++)
    {
        sixth[i] = value;
    }

    FuncArray(sixth,10);
    // cout << "Printing an array :" << endl;
    // // Print an array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;
    // cout << "Everything is fine" << endl;
}