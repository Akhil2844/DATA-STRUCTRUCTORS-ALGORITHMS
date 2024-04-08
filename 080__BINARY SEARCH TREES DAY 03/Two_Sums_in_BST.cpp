#include <iostream>
#include<vector>
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

void inorder(BinaryTreeNode*root,vector<int>&inOrderValue)
{
    // base case
    if(root==NULL)
    {
        return;
    }

    inorder(root->left,inOrderValue);
    inOrderValue.push_back(root->data);
    inorder(root->right,inOrderValue);
}

bool twoSumBST(BinaryTreeNode*root,int target)
{
    vector<int>inOrderValue;
    inorder(root,inOrderValue);

    int i=0,j=inOrderValue.size()-1;
while(i<j)
{
    int sum=inOrderValue[i]+inOrderValue[j];
    if(sum==target)
    {
        return true;
    }
    else if(sum>target)
    {
        j--;
    }
    else
    {
        i++;
    }
}
return false;
}

int main()
{
    // Creating a binary search tree

    BinaryTreeNode *root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(5);
    root->right = new BinaryTreeNode(15);
    root->left->left = new BinaryTreeNode(3);
    root->left->right = new BinaryTreeNode(7);

     bool valid = twoSumBST(root,35);
   
    // Check if the element was found
    if (valid)
    {
        cout  << "Valid BST " << endl;
    }
    else
    {
        cout  << "Not Valid BST " << endl;
    }




    return 0;
}
