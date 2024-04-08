#include <iostream>
#include<queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    // constructor
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    
};


 // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       priority_queue<int>pq;
       
       // step 1
       for(int i=0;i<k;i++)
       {
           pq.push(arr[i]);
       }
       
       // step 2
       for(int i=k;i<=r;i++)
       {
          if(arr[i]<pq.top())
          {
              pq.pop();
              pq.push(arr[i]);
          }
       }
       
      return pq.top();
    }

    int main() {
    heap h;
    int arr[] = {7,10,4,20,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4; // Change k to any value you want to find the kth smallest element

    int kthSmallestElement =kthSmallest(arr, 0, n - 1, k);

    cout << "The " << k << "th smallest element is: " << kthSmallestElement << endl;

    return 0;
}
