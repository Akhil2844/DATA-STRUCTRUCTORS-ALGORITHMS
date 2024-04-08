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

BinaryTreeNode *LCAinaBST(BinaryTreeNode *root, BinaryTreeNode *P, BinaryTreeNode *Q)
{
    if (root == NULL)
    {
        return NULL;
    }
    while (root != NULL)
    {
        if (root->data < P->data && root->data < Q->data)
        {
            root = root->right;
        }

        else if (root->data > P->data && root->data > Q->data)
        {
            root = root->left;
        }
        else
        {
            return root;
        }
    }
}

int main()
{
    // Creating a binary search tree
    BinaryTreeNode *root = new BinaryTreeNode(20);
    root->left = new BinaryTreeNode(10);
    root->right = new BinaryTreeNode(30);
    root->left->left = new BinaryTreeNode(5);
    root->left->right = new BinaryTreeNode(15);
    root->right->right = new BinaryTreeNode(35);

    // Nodes for which we want to find the lowest common ancestor
    BinaryTreeNode *P = root->left->left;  // Node with data 5
    BinaryTreeNode *Q = root->left->right; // Node with data 15

    // Call the LCAinaBST function to find the lowest common ancestor
    BinaryTreeNode *lca = LCAinaBST(root, P, Q);

    // Check if the lowest common ancestor was found
    if (lca != nullptr)
    {
        cout << "Lowest Common Ancestor: " << lca->data << endl;
    }
    else
    {
        cout << "Lowest Common Ancestor not found." << endl;
    }

    // Clean up memory (assuming you have a function for this)
    // Remember to delete the nodes if they were dynamically allocated

    return 0;
}
