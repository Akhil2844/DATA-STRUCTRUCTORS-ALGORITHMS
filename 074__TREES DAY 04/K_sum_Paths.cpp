
#include <iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

void solve(Node*root,int k,int &count,vector<int>path)
  {
      // base case
      if(root==NULL)
      {
          return ;
      }
    //   path.push_back(root->data);
    int sum=0;
    if(root!=NULL)
        {
            sum = sum + root->data;
            if(sum == k)
            {
                count++;
                sum = sum - root->data;
                return;
            }
        }
      
      // left
      solve(root->left,k,count,path);
      // right
      solve(root->right,k,count,path);
      sum=sum-root->data;
      // check for k sum
    //   int size=path.size();
    //   int sum=0;
    //   for(int i=size-1;i>=0;i--)
    //   {
    //       sum=sum+path[i];
    //       if(sum==k)
    //   {
    //       count++;
    //   }
      
    //   }
    //   path.pop_back();
      
  }
    int sumK(Node *root,int k)
    {
        vector<int>path;
        int count=0;
        solve(root,k,count,path);
        return count;
    }




int main()
{

    // Creating a simple binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->right->right = new Node(6);
    root->right->right->left = new Node(8);
    root->right->right->left->left = new Node(9);

   int result=sumK(root,5);

   cout<<"Result is : "<<result<<endl;
   

    return 0;
}