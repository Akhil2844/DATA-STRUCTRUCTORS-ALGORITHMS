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

pair<int,int>predcessorSuccessor(BinaryTreeNode*root,int key)
{

    // base case
    pair<int,int>result=make_pair(-1,-1);

    while(root!=NULL)

    if(root->data==key)
    {

        // Node found
        // find pred(max value of the subtree)
           if(root->left!=NULL)
           {
            BinaryTreeNode*pred=root->left;
            while(pred->right!=NULL)
            {
                pred=pred->right;
            }
           result.first=pred->data;
           }

// find succ min value of the subtree
           if(root->right!=NULL)
           {
            BinaryTreeNode*succ=root->right;
            while(succ->left!=NULL)
           {
            succ=succ->left;
           }
           result.second=succ->data;
    }
return result;
    }

    else if(root->data>key)
    {
        // Move to the left subtree
          result.second=root->data;
          root=root->left;
    }

    else
    {
        // Move to the right subtree
       result.first=root->data;
       root=root->right;
    }

    return result;
}


int main() {
    // Creating a binary search tree
    BinaryTreeNode* root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(5);
    root->right = new BinaryTreeNode(15);
    root->left->left = new BinaryTreeNode(3);
    root->left->right = new BinaryTreeNode(7);

    // Element to search for
    int key = 7;

    // Call the predcessorSuccessor function to find the predecessor and successor
    pair<int, int> result = predcessorSuccessor(root, key);

    // Check if the predecessor and successor were found
    if (result.first != -1) {
        cout << "Predecessor: " << result.first << endl;
    } else {
        cout << "Predecessor not found." << endl;
    }

    if (result.second != -1) {
        cout << "Successor: " << result.second << endl;
    } else {
        cout << "Successor not found." << endl;
    }

   

    return 0;
}
