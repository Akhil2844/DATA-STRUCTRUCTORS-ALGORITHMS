// #include<vector>
// #include<iostream>
// using namespace std;
// int toFindDuplicate(vector<int> &arr)
// {
//     int ans = 0;
    
//     //XOR ing all array elements
//     for(int i = 0; i<arr.size(); i++ ) {
//     	ans = ans^arr[i];
//     }
	
//     //XOR [1, n-1]
//     for(int i = 1; i<arr.size();i++ ) {
//     	ans = ans^i;
//     }
//     return ans;
// }


// int main() {
//     int arr[6] = {2, 3, 4, 5, 2, 3};
//     int c = toFindDuplicate(arr);

//     cout << "The Duplicate Element in the array is: " << c << endl;

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}

int main()
{   vector<int> arr;
    int arr[6]={2,2,3,4,4};
    int c= findDuplicate(arr);
    cout<<c<<endl;
}