#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void traverseLeft(node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return;
    }

    ans.push_back(root->data);

    if (root->left)
    {
        traverseLeft(root->left, ans);
    }
    else
    {
        traverseLeft(root->right, ans);
    }
}

void traverseLeafNode(node *node, vector<int> &ans)
{
    if (node == NULL)
    {
        return;
    }

    if (node->left == NULL && node->right == NULL)
    {
        ans.push_back(node->data);
    }

    traverseLeafNode(node->left, ans);
    traverseLeafNode(node->right, ans);
}

void traverseRight(node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }

    if (root->right)
    {
        traverseRight(root->right, ans);
    }
    else
    {
        traverseRight(root->left, ans);
    }

    // wapas ayega
    ans.push_back(root->data);
}

vector<int> boundaryTraversal(node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }

    ans.push_back(root->data);

    // left part traverse
    traverseLeft(root->left, ans);

    // Leaf node traverse

    // left subtree
    traverseLeafNode(root->left, ans);
    // right subtree
    traverseLeafNode(root->right, ans);

    // right part traverse
    traverseRight(root->right, ans);

    return ans;
}

int main()
{

    // Creating a simple binary tree
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(7);
    root->right->right = new node(6);
    root->right->right->left = new node(8);
    root->right->right->left->left = new node(9);

    vector<int> result = boundaryTraversal(root);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}