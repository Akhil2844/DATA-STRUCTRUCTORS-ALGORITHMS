#include <iostream>
using namespace std;

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    // constructor
    BinaryTreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int solve(BinaryTreeNode*root,int &i,int k)
{
    // base case
    if(root==NULL)
    {
        return -1;
    }

    int left=solve(root->left,i,k);

    if(left!=-1)
    {
        return left;
    }

    i++;

    if(i==k)
    {
        return root->data;
    }

    return solve(root->right,i,k);
}


int KthSmallest(BinaryTreeNode*root,int k)
{
    int i=0;
    int ans=solve(root,i,k);
    return ans;
}
int main()
{
    // Creating a binary search tree

    BinaryTreeNode *root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(5);
    root->right = new BinaryTreeNode(15);
    root->left->left = new BinaryTreeNode(3);
    root->left->right = new BinaryTreeNode(7);

    int result=KthSmallest(root,5);

    cout<<"Kth smallest element is : "<<result<<endl;


    return 0;
}
