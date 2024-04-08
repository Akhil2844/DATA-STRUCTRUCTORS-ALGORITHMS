#include <iostream>
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

Node*lca(Node* root,int n1,int n2)
{
  // base case
  if(root==NULL)
  {
    return NULL;
  }

  if(root->data==n1 || root->data==n2)
  {
    return root;
  }

  Node*leftAns=lca(root->left,n1,n2);
  Node*rightAns=lca(root->right,n1,n2);

  if(leftAns!=NULL && rightAns!=NULL)
  {
    return root;
  }
  else if(leftAns!=NULL && rightAns==NULL)
  {
    return leftAns;
  }
  else if(leftAns==NULL && rightAns!=NULL)
  {
    return rightAns;
  }
  else
  {
    return NULL;
  }

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

    Node*result =lca(root,4,5);

   if (result != NULL)
    {
        cout << "LCA is : " << result->data << endl;
    }
    else
    {
        cout << "One or both nodes not found in the tree." << endl;
    }

   

    return 0;
}