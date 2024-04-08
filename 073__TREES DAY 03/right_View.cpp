#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

void solve(Node*root,vector<int>&ans,int level)
{
    // base case
    if(root==NULL)
    {
        return;
    }

    if(level==ans.size())
    {
        ans.push_back(root->data);
    }

    solve(root->right,ans,level+1);

    solve(root->left,ans,level+1);
    
}

vector<int> leftview(Node*root)
{
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}

int main()
{

    // Creating a simple binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->right->right = new Node(6);
    root->right->right->left = new Node(8);
    root->right->right->left->left = new Node(9);

    vector<int> result = leftview(root);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}