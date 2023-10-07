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

bool isBST(BinaryTreeNode*root,int min,int max)
{
    // base case
    if(root==NULL)
    {
        return true;
    }

    if(root->data>=min && root->data<=max)
    {
        bool left=isBST(root->left,min,root->data);
        bool right=isBST(root->right,root->data,max);
        return left && right;
    }

    else
    {
        return false;
    }
}


bool isValidate(BinaryTreeNode*root)
{
    return isBST(root,INT16_MIN,INT16_MAX);
}
int main()
{
    // Creating a binary search tree

    BinaryTreeNode *root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(5);
    root->right = new BinaryTreeNode(15);
    root->left->left = new BinaryTreeNode(3);
    root->left->right = new BinaryTreeNode(7);



    

     bool valid = isValidate(root);

   
   
   
   
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
