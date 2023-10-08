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

BinaryTreeNode* flatten(BinaryTreeNode*root)
{
    vector<int>inOrderValue;
    inorder(root,inOrderValue);

    BinaryTreeNode*newroot=new BinaryTreeNode(inOrderValue[0]);
    BinaryTreeNode*curr=newroot;

    int n=inOrderValue.size();
    for(int i=1;i<n;i++)
    {
        BinaryTreeNode*temp=new BinaryTreeNode(inOrderValue[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }

    curr->left=NULL;
    curr->right=NULL;

    return newroot;

}

void printInOrder(BinaryTreeNode* node)
{
    if (node == nullptr)
        return;

    printInOrder(node->left);
    cout << node->data << " ";
    printInOrder(node->right);
}

int main()
{
    // Creating a binary search tree
    BinaryTreeNode *root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(5);
    root->right = new BinaryTreeNode(15);
    root->left->left = new BinaryTreeNode(3);
    root->left->right = new BinaryTreeNode(7);

    // Call the flatten function to flatten the binary tree
    BinaryTreeNode* result = flatten(root);

    // Print the values of the flattened tree
    printInOrder(result);

    return 0;
}
