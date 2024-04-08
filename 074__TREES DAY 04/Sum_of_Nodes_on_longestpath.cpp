#include <iostream>
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

void solve(Node*root,int len,int &maxLen,int sum,int &maxSum)
{
    // base case
    if(root==NULL)
    {
        if(len>maxLen)
        {
            maxLen=len;
            maxSum=sum;
        }
        else if(len==maxLen)
        {
            maxSum=max(sum,maxSum);
          
        }

        return;
    }

    sum=sum+root->data;
    solve(root->left,len+1,maxLen,sum,maxSum);
    solve(root->right,len+1,maxLen,sum,maxSum);
}

int sumOfLongRootToLeafPath(Node *root)
{
int len=0;
int maxLen=0;
int sum=0;
int maxSum=0;

solve(root,len,maxLen,sum,maxSum);
return maxSum;
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

    int result = sumOfLongRootToLeafPath(root);

   cout<<"Maximum sum is : "<<result<<endl;

   

    return 0;
}