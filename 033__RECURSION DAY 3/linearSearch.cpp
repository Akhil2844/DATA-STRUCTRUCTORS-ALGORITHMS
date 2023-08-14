#include<iostream>
using namespace std;

// void print(int* arr,int n)
// {
//     cout<<"Size of array is "<<n<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

bool linearSearch(int*arr,int size,int key)
{
    // print(arr,size);

    
    // base case
    if(size==0)
    {
        return false;

    }


     // recursive call
     if(arr[0]==key)
     {
        return true;
     }   
     else
     {
        int remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
     }
}
int main()
{
    int arr[5]={3,5,2,1,6};
    int key=9;

    int ans=linearSearch(arr,5,key);

    if(ans)
    {
        cout<<"Key is Found "<<endl;
    }
    else
    {
        cout<<"Key is not Found "<<endl;
    }
   
   return 0;
    }
