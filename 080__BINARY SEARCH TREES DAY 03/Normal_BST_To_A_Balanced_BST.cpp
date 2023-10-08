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

BinaryTreeNode*inorderToBST(int s,int e,vector<int>&inOrderValue)
{
   if(s>e)
   {
    return NULL;
   }

   int mid=(s+e)/2;
   BinaryTreeNode*root=new BinaryTreeNode(inOrderValue[mid]);
   root->left=inorderToBST(s,mid-1,inOrderValue);
   root->right=inorderToBST(mid+1,e,inOrderValue);

   return root;
}


BinaryTreeNode* balancedBST(BinaryTreeNode*root)
{
    vector<int>inOrderValue;
    inorder(root,inOrderValue);

   return inorderToBST(0,inOrderValue.size()-1,inOrderValue);
}



void printInOrder(BinaryTreeNode *node)
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

    // Convert the binary tree into a balanced BST
    BinaryTreeNode *result = balancedBST(root);

    // Print the values of the balanced BST
    printInOrder(result);

    return 0;
}
