#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(vector<int>&arr,int n)
{
     
     stack<int>s;
     s.push(-1);
     vector<int> ans(n);
     for(int i=n-1;i>=0;i--)
     {
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
     }
     return ans;

}

vector<int> prevSmallerElement(vector<int>&arr,int n)
{
stack<int> s;
s.push(-1);
vector<int> ans(n);
for(int i=0;i<n;i++)
{
    int curr=arr[i];
    while(s.top()!=-1 && arr[s.top()]>=curr)
    {
        s.pop();
    }
    ans[i]=s.top();
    s.push(i);
}
return ans;
}



int largestRectangularArea(vector<int>&heights)
{
 int n=heights.size();

 vector<int> next(n);
 next=nextSmallerElement(heights,n);
  
 vector<int> prev(n);
 prev=prevSmallerElement(heights,n);

 int area=INT16_MIN;
 for(int i=0;i<n;i++)
 {
    
    int l=heights[i];
    if(next[i]==-1)
    {
        next[i]=n;
    }

    int b=next[i]-prev[i]-1;
    int newArea=l*b;
    area=max(area,newArea);

 } 
return area;
}
int main()
{


  // create a vector
vector<int> heights;
heights.push_back(2);
heights.push_back(1);
heights.push_back(5);
heights.push_back(6);
heights.push_back(2);
heights.push_back(3);

// largest rectangle in histogram
int result=largestRectangularArea(heights);

// print
cout<<"Largest Rectangle area is : "<<result<<endl;

    return 0;
}