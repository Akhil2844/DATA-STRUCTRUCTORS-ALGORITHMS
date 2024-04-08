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

bool searchInBST(BinaryTreeNode *root, int x)
{

    // ********  APPROCH 1***********
    // base case
    /*if(root==NULL)
    {
        return false;
    }

    if(root->data==x)
    {
        return true;

    }
    if(root->data>x)
    {
        searchInBST(root->left,x);
    }
    else
    {
        searchInBST(root->right,x);
    }*/

    //***********APPROCH 2**********
    // base case
    BinaryTreeNode *temp = root;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }
        if (temp->data > x)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
}

int main()
{
    // Creating a binary search tree
    BinaryTreeNode *root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(5);
    root->right = new BinaryTreeNode(15);
    root->left->left = new BinaryTreeNode(3);
    root->left->right = new BinaryTreeNode(7);

    // Element to search for
    int x = 7;

    // Call the searchInBST function to search for x in the BST
    bool found = searchInBST(root, x);

    // Check if the element was found
    if (found)
    {
        cout << x << " found in the BST." << endl;
    }
    else
    {
        cout << x << " not found in the BST." << endl;
    }

    // Clean up memory (assuming you have a function for this)
    // Remember to delete the nodes if they were dynamically allocated

    return 0;
}
