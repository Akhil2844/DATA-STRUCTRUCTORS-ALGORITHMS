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

BinaryTreeNode*solve(vector<int>&preOrder,int mini,int maxi,int &i)
{
    if(i>=preOrder.size())
    {
        return NULL;
    }
    if(preOrder[i]<mini || preOrder[i]>maxi)
    {
        return NULL;
    }

    BinaryTreeNode*temp=new BinaryTreeNode(preOrder[i++]);
    temp->left=solve(preOrder,mini,temp->data,i);
    temp->right=solve(preOrder,temp->data,maxi,i);
   
   return temp;

}

BinaryTreeNode*preorderToBST(vector<int>&preOrder)
{
    int mini=INT16_MIN;
    int maxi=INT16_MAX;
    int i=0;
    return solve(preOrder,mini,maxi,i);
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
    // Input: Preorder traversal of a BST
    vector<int> preOrder = {10, 5, 3, 7, 15};

    // Convert the preorder traversal into a BST
    BinaryTreeNode *root = preorderToBST(preOrder);

    // Print the inorder traversal of the BST
    printInOrder(root);


    return 0;
}
